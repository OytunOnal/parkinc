#pragma warning disable 649

using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

namespace Watermelon
{
    public class EnvironmentController : MonoBehaviour
    {
        private static readonly int TILING_ID = Shader.PropertyToID("_Tiling");
        private static readonly int BLEND_ID = Shader.PropertyToID("_BlendCoef");

        [Header("Environment")]
        [SerializeField] Transform topEnvironment;
        [SerializeField] Transform rightEnvironment;
        [SerializeField] Transform bottomEnvironment;
        [SerializeField] Transform leftEnvironment;

        [Header("Parking Borders")]
        [SerializeField] Transform leftBorder;
        [SerializeField] Transform topBorder;
        [SerializeField] Transform rightBorder;
        [SerializeField] Transform bottomBorder;

        [Header("Roads")]
        [SerializeField] Transform topRoad;
        [SerializeField] Transform rightRoad;
        [SerializeField] Transform bottomRoad;

        [Header("Path Points")]
        [SerializeField] Transform leftOutRoadEndPoint;
        [SerializeField] Transform bottomRoadEndPoint;
        [SerializeField] Transform rightRoadEndPoint;
        [SerializeField] Transform topRoadEndPoint;

        [Header("Field")]
        [SerializeField] Transform bottomParking;
        [SerializeField] Transform middleParking;
        [SerializeField] Transform topParking;
        [SerializeField] Transform topFreeParking;
        [SerializeField] Transform bottomFreeParking;

        [Header("Parking Material")]
        [SerializeField] Material parkingPatternMaterial;


        [Header("Blend Animation")]
        [SerializeField] float blendDuration = 0.5f;

        [SerializeField] Collider coinsGatherTrigger;

        public EnvironmentWinPanel EnvironmentWinPanel { get; private set; }
        public EnvironmentStartPanel EnvironmentStartPanel { get; private set; }

        private int winAmountOfCoins;

        private bool additionalCoinsAnimation = false;


        private int collectedAmount = 0;

        public void LinkPanels(EnvironmentWinPanel environmentWinPanel, EnvironmentStartPanel environmentStartPanel)
        {
            EnvironmentWinPanel = environmentWinPanel;
            EnvironmentStartPanel = environmentStartPanel;

            Button getX3Button = environmentWinPanel.GetX3Button;
            getX3Button.onClick.RemoveAllListeners();
            getX3Button.onClick.AddListener(new UnityEngine.Events.UnityAction(GetX3Click));
        }

        public void DisableTop()
        {
            topEnvironment.gameObject.SetActive(false);
        }

        public void DisableAll()
        {
            topEnvironment.gameObject.SetActive(false);
            bottomEnvironment.gameObject.SetActive(false);
            leftEnvironment.gameObject.SetActive(false);
            rightEnvironment.gameObject.SetActive(false);
        }

        public void EnableBottomLeftAndRight()
        {
            bottomEnvironment.gameObject.SetActive(true);
            leftEnvironment.gameObject.SetActive(true);
            rightEnvironment.gameObject.SetActive(true);
        }

        public void EnableTop()
        {
            topEnvironment.gameObject.SetActive(true);
        }

        public void CollectCoin()
        {
            collectedAmount++;

            GameAudioController.PlayFinalCoinCollect(0.75f + (float)collectedAmount / winAmountOfCoins * 0.5f);

            EnvironmentWinPanel.BounceCoin();

            EnvironmentWinPanel.SetCoinsAmount(collectedAmount);

            if (collectedAmount == winAmountOfCoins)
            {
                if (!additionalCoinsAnimation)
                {
                    EnvironmentWinPanel.ShowButtons();
                }
                else
                {
                    UITouchHandler.Enabled = true;

                    GameController.CollectCoins(winAmountOfCoins);
                    GameController.NextLevel();
                }

            }
        }

        public void ShowStartPanel()
        {
            EnvironmentStartPanel.ShowStartPanel();
        }

        public void ShowWinPanel(Level level, int amountOfCoins)
        {
            UITouchHandler.Enabled = false;
            additionalCoinsAnimation = false;

            collectedAmount = 0;

            winAmountOfCoins = amountOfCoins;

            EnvironmentWinPanel.Show(level);

            coinsGatherTrigger.transform.position = EnvironmentWinPanel.CoinGatherPoint;
            CoinsRain.RainCoins(winAmountOfCoins);
        }

        public void GetX3Click()
        {
            AdsManager.ShowRewardBasedVideo((finished) =>
            {
                if (finished)
                {
                    GameController.TurnsAfterRewardVideo = 0;
                    CoinsRain.RainCoins(winAmountOfCoins * 4);
                    winAmountOfCoins *= 5;
                    UITouchHandler.Enabled = false;
                    additionalCoinsAnimation = true;
                }
                else
                {

                    GameController.CollectCoins(winAmountOfCoins);
                    GameController.TurnsAfterRewardVideo++;
                    GameController.NextLevel();

                }
            });
        }

        public void CollectCoins()
        {
            GameController.CollectCoins(winAmountOfCoins);
        }

        public void NewLevelTransition(Level level)
        {
            topEnvironment.DOMove(new Vector3(0, 0, level.Size.y + 5), 0.5f).SetEasing(Ease.Type.SineInOut);
            rightEnvironment.DOMove(new Vector3(level.Size.x + 5, 0, level.Size.y), 0.5f).SetEasing(Ease.Type.SineInOut);
            bottomEnvironment.DOMove(new Vector3(level.Size.x, 0, -5), 0.5f).SetEasing(Ease.Type.SineInOut);

            leftBorder.DOLocalMove(
                new Vector3(
                    x: leftBorder.localPosition.x,
                    y: 0,
                    z: level.Size.y / 2f),
                0.5f).SetEasing(Ease.Type.SineInOut);
            topBorder.DOLocalMove(
                new Vector3(
                    x: level.Size.x / 2f,
                    y: 0,
                    z: topBorder.localPosition.z),
                0.5f).SetEasing(Ease.Type.SineInOut);
            rightBorder.DOLocalMove(
                new Vector3(
                    x: rightBorder.localPosition.x,
                    y: 0,
                    z: level.Size.y / 2f),
                0.5f).SetEasing(Ease.Type.SineInOut);
            bottomBorder.DOLocalMove(
                new Vector3(
                    x: bottomBorder.localPosition.x,
                    y: 0,
                    z: level.Size.x / 2f),
                0.5f).SetEasing(Ease.Type.SineInOut);

            leftBorder.DOScale(new Vector3(level.Size.y - 1.5f, 1, 1), 0.5f).SetEasing(Ease.Type.SineInOut);
            topBorder.DOScale(new Vector3(level.Size.x - 1.5f, 1, 1), 0.5f).SetEasing(Ease.Type.SineInOut);
            rightBorder.DOScale(new Vector3(level.Size.y - 1.5f, 1, 1), 0.5f).SetEasing(Ease.Type.SineInOut);
            bottomBorder.DOScale(new Vector3(level.Size.x - 1.5f, 1, 1), 0.5f).SetEasing(Ease.Type.SineInOut);

            topRoad.DOMove(new Vector3(-0.25f, 0, level.Size.y + 0.25f), 0.5f).SetEasing(Ease.Type.SineInOut);
            rightRoad.DOMove(new Vector3(level.Size.x + 0.25f, 0, level.Size.y + 0.25f), 0.5f).SetEasing(Ease.Type.SineInOut);
            bottomRoad.DOMove(new Vector3(level.Size.x + 0.25f, 0, -0.25f), 0.5f).SetEasing(Ease.Type.SineInOut);

            bottomParking.DOMove(new Vector3(level.Size.x + 0.25f, 0, 4.75f), 0.5f).SetEasing(Ease.Type.SineInOut);
            middleParking.DOMove(new Vector3(-0.25f, 0.01f, 4.73f), 0.5f).SetEasing(Ease.Type.SineInOut);
            topParking.DOMove(new Vector3(-0.25f, 0, level.Size.y - 5 + 0.25f), 0.5f).SetEasing(Ease.Type.SineInOut);

            bottomParking.DOScale(new Vector3(level.Size.x + 0.5f, 1, 5), 0.5f).SetEasing(Ease.Type.SineInOut);
            middleParking.DOScale(new Vector3(level.Size.x + 0.5f, 1, level.Size.y > 9.5f ? level.Size.y - 9.5f + 0.05f : 0f + 0.05f), 0.5f).SetEasing(Ease.Type.SineInOut);
            topParking.DOScale(new Vector3(level.Size.x + 0.5f, 1, 5), 0.5f).SetEasing(Ease.Type.SineInOut);

            int xDiv3 = level.Size.x / 3;

            parkingPatternMaterial.SetVector(TILING_ID, new Vector4(xDiv3, 1, 0, 0));

            StartCoroutine(BlendCoroutine());
        }

        public void Init(Level level, bool clear = false)
        {

            //ColorController.ResetColors("buildings");

            topEnvironment.position = new Vector3(0, 0, level.Size.y + 5);
            rightEnvironment.position = new Vector3(level.Size.x + 5, 0, level.Size.y);
            bottomEnvironment.position = new Vector3(level.Size.x, 0, -5);

            leftBorder.localPosition = new Vector3(
                x: leftBorder.localPosition.x,
                y: 0,
                z: level.Size.y / 2f);
            topBorder.localPosition = new Vector3(
                x: level.Size.x / 2f,
                y: 0,
                z: topBorder.localPosition.z);
            rightBorder.localPosition = new Vector3(
                x: rightBorder.localPosition.x,
                y: 0,
                z: level.Size.y / 2f);
            bottomBorder.localPosition = new Vector3(
                x: bottomBorder.localPosition.x,
                y: 0,
                z: level.Size.x / 2f);


            leftBorder.localScale = new Vector3(level.Size.y - 1.5f, 1, 1);
            topBorder.localScale = new Vector3(level.Size.x - 1.5f, 1, 1);
            rightBorder.localScale = new Vector3(level.Size.y - 1.5f, 1, 1);
            bottomBorder.localScale = new Vector3(level.Size.x - 1.5f, 1, 1);


            topRoad.position = new Vector3(-0.25f, 0, level.Size.y + 0.25f);
            rightRoad.position = new Vector3(level.Size.x + 0.25f, 0, level.Size.y + 0.25f);
            bottomRoad.position = new Vector3(level.Size.x + 0.25f, 0, -0.25f);

            int xDiv3 = level.Size.x / 3;

            bottomParking.position = new Vector3(level.Size.x + 0.25f, 0, 4.75f);
            middleParking.position = new Vector3(-0.25f, 0.01f, 4.73f);
            topParking.position = new Vector3(-0.25f, 0, level.Size.y - 5 + 0.25f);

            //bottomFreeParking.position = new Vector3(xDiv3 * 3, 0, 0);
            //topFreeParking.position = new Vector3(xDiv3 * 3, 0, level.Size.y - 5);

            bottomParking.localScale = new Vector3(level.Size.x + 0.5f, 1, 5);
            middleParking.localScale = new Vector3(level.Size.x + 0.5f, 1, level.Size.y > 9.5f ? level.Size.y - 9.5f + 0.04f : 0.04f);
            topParking.localScale = new Vector3(level.Size.x + 0.5f, 1, 5);

            //bottomFreeParking.localScale = new Vector3(xMod3, 1, 5);
            //topFreeParking.localScale = new Vector3(xMod3, 1, 5);

            parkingPatternMaterial.SetVector(TILING_ID, new Vector4(xDiv3, 1, 0, 0));

            //startCanvas.gameObject.SetActive(clear);

            if (clear)
            {
                EnvironmentStartPanel.Init(level);

                parkingPatternMaterial.SetFloat(BLEND_ID, 1);
            }
            else
            {
                parkingPatternMaterial.SetFloat(BLEND_ID, 0);
            }
        }

        public void Init(EnvironmentController refference)
        {
            InitFieldFromRefference(refference);
            InitRoadsFromRefference(refference);
            InitUIFromRefference(refference);
        }

        private void InitUIFromRefference(EnvironmentController refference)
        {
            winAmountOfCoins = refference.winAmountOfCoins;

            EnvironmentStartPanel.Init(refference.EnvironmentStartPanel);
            EnvironmentWinPanel.Init(refference.EnvironmentWinPanel);
        }

        private void InitRoadsFromRefference(EnvironmentController refference)
        {
            topEnvironment.position = refference.topEnvironment.position;
            rightEnvironment.position = refference.rightEnvironment.position;
            bottomEnvironment.position = refference.bottomEnvironment.position;

            topRoad.position = refference.topRoad.position;
            rightRoad.position = refference.rightRoad.position;
            bottomRoad.position = refference.bottomRoad.position;
        }

        private void InitFieldFromRefference(EnvironmentController refference)
        {
            leftBorder.localPosition = refference.leftBorder.localPosition;
            topBorder.localPosition = refference.topBorder.localPosition;
            rightBorder.localPosition = refference.rightBorder.localPosition;
            bottomBorder.localPosition = refference.bottomBorder.localPosition;

            leftBorder.localScale = refference.leftBorder.localScale;
            topBorder.localScale = refference.topBorder.localScale;
            rightBorder.localScale = refference.rightBorder.localScale;
            bottomBorder.localScale = refference.bottomBorder.localScale;

            bottomParking.position = refference.bottomParking.position;
            middleParking.position = refference.middleParking.position;
            topParking.position = refference.topParking.position;

            bottomParking.localScale = refference.bottomParking.localScale;
            middleParking.localScale = refference.middleParking.localScale;
            topParking.localScale = refference.topParking.localScale;

            parkingPatternMaterial.SetVector(TILING_ID, refference.parkingPatternMaterial.GetVector(TILING_ID));
            parkingPatternMaterial.SetFloat(BLEND_ID, refference.parkingPatternMaterial.GetFloat(BLEND_ID));
        }



        public void FirstTap()
        {
            EnvironmentStartPanel.FadeOut(blendDuration);
            StartCoroutine(BlendCoroutine());
        }

        private IEnumerator BlendCoroutine(float initial = 1, float final = 0)
        {
            float time = 0;
            do
            {
                yield return null;
                time += Time.deltaTime;

                float t = time / blendDuration;

                float blendValue = initial + (final - initial) * t;

                parkingPatternMaterial.SetFloat(BLEND_ID, blendValue);

            } while (time < blendDuration);

            parkingPatternMaterial.SetFloat(BLEND_ID, final);
        }

        public void BlendToClear()
        {
            StartCoroutine(BlendCoroutine(0, 1));
        }

        public Vector3 GetFinishPosition(Transform roadTransform)
        {

            if (roadTransform == bottomRoad)
            {
                return bottomRoadEndPoint.position;
            }
            if (roadTransform == rightRoad)
            {
                return rightRoadEndPoint.position;
            }
            if (roadTransform == topRoad)
            {
                return topRoadEndPoint.position;
            }

            return leftOutRoadEndPoint.position;
        }

    }
}