#pragma warning disable 649

using System;
using System.Collections;
using UnityEngine;
using Watermelon.Store;

namespace Watermelon
{
    public class LevelController : MonoBehaviour
    {
        private static LevelController instance;

        [SerializeField] EnvironmentStartPanel startPanel;
        [SerializeField] EnvironmentWinPanel winPanel;

        public static EnvironmentController Environment { get; private set; }

        public static Level CurrentLevel { get; private set; }

        public static bool isReplaying = false;

        private static Coroutine replayCoroutine;

        private void Start()
        {
            instance = this;
        }

        public static void Init()
        {
            GameObject environmentObject = Instantiate(StoreController.GetSelectedPrefab(TabType.Environment));

            Environment = environmentObject.GetComponent<EnvironmentController>();
            Environment.LinkPanels(instance.winPanel, instance.startPanel);

            LevelPoolHandler.InitPools();
        }

        public static void ReplayLevel()
        {
            if (replayCoroutine != null && isReplaying)
            {
                instance.StopCoroutine(replayCoroutine);

                isReplaying = false;
            }

            replayCoroutine = instance.StartCoroutine(ReplayLevelCoroutine());
        }

        private static IEnumerator ReplayLevelCoroutine()
        {
            isReplaying = true;

            yield return LevelObjectsSpawner.HideBounceCars();

            yield return LevelObjectsSpawner.SpawnBounceCars();

            isReplaying = false;
        }

        public static void DestroyLevel()
        {
            LevelPoolHandler.ReturnEverythingToPool();

            LevelObjectsSpawner.DisableMovables();
        }

        public static void InitLevel(Level level)
        {
            CurrentLevel = level;

            Environment.Init(level);

            LevelPoolHandler.ReturnEverythingToPool();

            LevelObjectsSpawner.SpawnObstacles();

            LevelObjectsSpawner.SpawnCars();

            TutorialController.Init(CurrentLevel);
        }

        public static void InitLevelWithLogo(Level level)
        {
            CurrentLevel = level;

            Environment.Init(level, true);

            LevelPoolHandler.ReturnEverythingToPool();
        }

        public static void InitLevelWithTransition(Level level)
        {
            UITouchHandler.Enabled = false;
            CurrentLevel = level;

            Environment.EnvironmentWinPanel.HideWinCanvas();
            Environment.NewLevelTransition(level);

            instance.StartCoroutine(LevelObjectsSpawner.SpawnBounceCars());
            instance.StartCoroutine(LevelObjectsSpawner.SpawnBounceObstacles());

            UIGame gameUI = UIController.GetPage<UIGame>();
            gameUI.SetSkipButtonVisibility(true);

            CameraController.ChangeAngleToGamePosition(CurrentLevel);

            Tween.DelayedCall(1f, () =>
            {
                UITouchHandler.Enabled = true;

                TutorialController.Init(CurrentLevel);
            });
        }


        public static void LoadObstaclesAndCars()
        {
            UITouchHandler.Enabled = false;
            Environment.FirstTap();

            instance.StartCoroutine(LevelObjectsSpawner.SpawnBounceCars());
            instance.StartCoroutine(LevelObjectsSpawner.SpawnBounceObstacles());

            Tween.DelayedCall(1f, () =>
            {
                UITouchHandler.Enabled = true;

                TutorialController.Init(CurrentLevel);
            });
        }

        public static void MovableFinished(MovableController movable)
        {
            LevelObjectsSpawner.RemoveCar(movable);

            if (LevelObjectsSpawner.IsMovablesEmpty)
            {
                GameController.FinishLevel();
                FinishLevel();
            }
        }

        public static void FinishLevel()
        {
            UITouchHandler.Enabled = false;
            instance.StartCoroutine(LevelObjectsSpawner.HideBounceObstacles());
            Environment.BlendToClear();

            int coinsAmount = CurrentLevel.MovableObjects.Length * 2;
            if (coinsAmount < 15) coinsAmount = 14 + GameController.CurrentLevelId % 2;
            if (coinsAmount > 25) coinsAmount = 24 + GameController.CurrentLevelId % 2;

            Environment.ShowWinPanel(CurrentLevel, coinsAmount);

            UIGame gameUI = UIController.GetPage<UIGame>();
            gameUI.SetReplayButtonVisibility(false);
            gameUI.SetSkipButtonVisibility(false);

            CameraController.ChangeAngleToMenuPosition(CurrentLevel);

        }

        public static Vector3 GetFinishPosition(Transform roadTransform)
        {
            return Environment.GetFinishPosition(roadTransform);
        }

        public static bool IsOtherFinishingMovableClose(MovableController current)
        {
            for (int i = 0; i < LevelObjectsSpawner.MovablesCount; i++)
            {
                MovableController movable = LevelObjectsSpawner.GetCar(i);

                if (movable == current) continue;
                if (!movable.IsFinishing) continue;
                if (movable.IsWaitingForOtherCarToPass) continue;
                if (current.Road != movable.Road) continue;

                Vector3 finishPosition = Environment.GetFinishPosition(current.Road); //Roads.GetFinishPosition(current.Road);

                if (Vector3.Distance(current.Position, finishPosition) > Vector3.Distance(movable.Position, finishPosition) + movable.Data.MovableObject.Size.y) continue;

                if (Vector3.Distance(movable.Position, current.Position) < (movable.Data.MovableObject.Size.y + current.Data.MovableObject.Size.y) / 2 + 10) return true;
            }

            return false;
        }

        public static void ResetEnvironment()
        {
            GameObject environmentObject = Instantiate(StoreController.GetSelectedPrefab(TabType.Environment));

            EnvironmentController newEnvironment = environmentObject.GetComponent<EnvironmentController>();
            newEnvironment.LinkPanels(instance.winPanel, instance.startPanel);

            if (GameController.WinStage || GameController.StartStage)
            {
                newEnvironment.Init(Environment);
            }
            else
            {
                newEnvironment.Init(CurrentLevel);
            }

            Destroy(Environment.gameObject);
            Environment = newEnvironment;
        }
    }
}