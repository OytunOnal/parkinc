#pragma warning disable 649

using System;
using System.Configuration;
using UnityEngine;
using Watermelon.Store;

namespace Watermelon
{
    public class GameController : MonoBehaviour
    {
        private static GameController instance;

        [SerializeField] UIController uiController;
        [SerializeField] CurrenciesController currenciesController;
        [SerializeField] LevelDatabase levelDatabase;

        [DrawReference]
        [SerializeField] GameConfigurations gameConfigurations;

        public static GameConfigurations GameConfigurations => instance.gameConfigurations;

        public static LevelDatabase LevelDatabase => instance.levelDatabase;

        public static int CurrentLevelId
        {
            get => levelSave.CurrentLevelID;
            private set => levelSave.CurrentLevelID = value;
        }

        public static int ActualLevelId
        {
            get => levelSave.ActualLevelID;
            private set => levelSave.ActualLevelID = value;
        }

        private static LevelSave levelSave;

        public static bool StartStage { get; private set; }
        public static bool WinStage { get; private set; }

        public static int TurnsAfterRewardVideo { get; set; }

        private UIGame gameUI;

        private void OnEnable()
        {
            AdsManager.ExtraInterstitialReadyConditions += ExtraInterstitialCondition;
            StoreController.OnProductSelected += OnProductSelected;
        }

        private void OnDisable()
        {
            AdsManager.ExtraInterstitialReadyConditions -= ExtraInterstitialCondition;
            StoreController.OnProductSelected -= OnProductSelected;
        }

        private bool ExtraInterstitialCondition()
        {
            if (TurnsAfterRewardVideo <= 4)
            {
                Debug.Log("[AdsManager]: Custom condition - TurnsAfterRewardVideo <= 4");

                return false;
            }

            return true;
        }

        private void Awake()
        {
            instance = this;

            SaveController.Initialise(false);

            levelSave = SaveController.GetSaveObject<LevelSave>("level");
        }

        private void Start()
        {
            uiController.Initialise();

            currenciesController.Initialise();

            gameUI = UIController.GetPage<UIGame>();

            TurnsAfterRewardVideo = 5;

            StoreController.Init();
            LevelController.Init();

            StartLevel(ActualLevelId, true);

            StartStage = true;
            WinStage = false;

            uiController.InitialisePages();

            UIController.ShowPage<UIGame>();

            QualitySettings.vSyncCount = 1;

            GameLoading.MarkAsReadyToHide();
        }

        public static void StartGame()
        {
            StartStage = false;
            LevelController.LoadObstaclesAndCars();

            instance.gameUI.SetSkipButtonVisibility(true);

            CameraController.ChangeAngleToGamePosition(LevelController.CurrentLevel);
        }

        public static void NextLevel(bool withTransition = true)
        {
            AdsManager.ShowInterstitial((isDisplayed) =>
            {
                if (isDisplayed)
                {
                    CalculateNextLevel(withTransition);
                }
                else
                {
                    CalculateNextLevel(withTransition);
                }

                SaveController.ForceSave();
            });
        }

        private static void CalculateNextLevel(bool withTransition)
        {
            CurrentLevelId++;
            if (CurrentLevelId >= LevelDatabase.LevelsCount)
            {
                int oldLevel = ActualLevelId;
                do
                {
                    ActualLevelId = UnityEngine.Random.Range(0, LevelDatabase.LevelsCount);
                } while (ActualLevelId == oldLevel);
            }
            else
            {
                ActualLevelId = CurrentLevelId;
            }

            UITouchHandler.CanReplay = false;

            if (withTransition)
            {
                StartLevelWithTransition(ActualLevelId);
            }
            else
            {
                StartLevel(ActualLevelId, StartStage);
            }
        }

        private static void PreviousLevel()
        {
            if (ActualLevelId > 0)
            {
                ActualLevelId--;
                CurrentLevelId = ActualLevelId;
            }

            StartLevel(ActualLevelId, StartStage);
        }

        private static void FirstLevel()
        {
            ActualLevelId = 0;
            CurrentLevelId = 0;

            StartLevel(ActualLevelId, StartStage);
        }

        public static void PrevLevelDev()
        {
            LevelController.DestroyLevel();
            PreviousLevel();
        }

        public static void FirstLevelDev()
        {
            LevelController.DestroyLevel();
            FirstLevel();
        }

        public static void StartLevel(int levelId, bool withLogo = false)
        {
            Level level = LevelDatabase.GetLevel(levelId);

            if (withLogo)
            {
                LevelController.InitLevelWithLogo(level);
            }
            else
            {
                LevelController.InitLevel(level);
            }

            CameraController.Init(level);
            instance.gameUI.SetLevelText(CurrentLevelId);
        }

        public static void StartLevelWithTransition(int levelId)
        {
            Level level = LevelDatabase.GetLevel(levelId);
            LevelController.InitLevelWithTransition(level);

            instance.gameUI.SetLevelText(CurrentLevelId);

            WinStage = false;
        }

        public static void FinishLevel()
        {
            WinStage = true;

            GameAudioController.VibrateLevelFinish();
        }

        public static void SkipLevel()
        {
            instance.StartCoroutine(LevelObjectsSpawner.HideBounceCars());
            LevelController.FinishLevel();
            FinishLevel();
        }

        public static void ReplayLevel()
        {
            if (!LevelController.isReplaying) LevelController.ReplayLevel();
        }

        public static void CollectCoins(int amount)
        {
            CurrenciesController.Add(Currency.Type.Coins, amount);
        }

        public static void SpendCoins(int amount)
        {
            CurrenciesController.Substract(Currency.Type.Coins, amount);
        }

        public static void SetCarSkin(ProductData product, CarProductBehavior characterSkinProduct)
        {
            // Remove cars
            LevelPoolHandler.DeleteMovablesPools();
            LevelPoolHandler.InitMovablePools();

            if (!StartStage && !LevelObjectsSpawner.IsMovablesEmpty)
            {
                LevelObjectsSpawner.SpawnCars();
            }
        }

        public static void SetEnvironmentSkin(ProductData product, EnvironmentProductBehavior environmentSkinProduct)
        {
            LevelController.ResetEnvironment();

            // Remove cars
            LevelPoolHandler.DeleteObstaclePools();
            LevelPoolHandler.InitObstaclePools();

            if (!StartStage && !LevelObjectsSpawner.IsMovablesEmpty)
            {
                LevelObjectsSpawner.SpawnObstacles();
            }
        }

        private void OnProductSelected(TabType tab, ProductData product)
        {
            if (tab == TabType.Cars)
            {
                CarProductBehavior carProductBehavior = product.Prefab.GetComponent<CarProductBehavior>();
                if (carProductBehavior != null)
                {
                    SetCarSkin(product, carProductBehavior);
                }
            }
            else if (tab == TabType.Environment)
            {
                EnvironmentProductBehavior environmentProductBehavior = product.Prefab.GetComponent<EnvironmentProductBehavior>();
                if (environmentProductBehavior != null)
                {
                    SetEnvironmentSkin(product, environmentProductBehavior);
                }
            }
        }
    }
}