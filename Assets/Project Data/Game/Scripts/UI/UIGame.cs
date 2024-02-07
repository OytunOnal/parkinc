using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
using Watermelon.Store;

namespace Watermelon
{
    public class UIGame : UIPage
    {
        [SerializeField] Image blackFadePanel;
        [SerializeField] Canvas blackFadeCanvas;

        [Header("Buttons")]
        [SerializeField] Button replayButton;
        [SerializeField] Button skipButton;

        [Header("Coins")]
        [SerializeField] TMP_Text levelText;

        public void ReplayButton()
        {
            if (!UITouchHandler.CanReplay) return;

            GameController.ReplayLevel();

            SetReplayButtonVisibility(false);

            GameAudioController.PlayButtonAudio();
        }

        public void SetLevelText(int level)
        {
            levelText.text = "LEVEL " + (level + 1);
        }

        public void SkipButton()
        {
            GameAudioController.PlayButtonAudio();

            AdsManager.ShowRewardBasedVideo((hasWatched) =>
            {
                if (hasWatched)
                {
                    GameController.TurnsAfterRewardVideo = 0;
                    GameController.SkipLevel();
                }
            });
        }

        public void FirstLevelButton()
        {
            if (GameController.WinStage) return;
            GameController.FirstLevelDev();
        }

        public void NextLevelButton()
        {
            if (GameController.WinStage) return;
            //GameController.SkipLevel();
            LevelController.DestroyLevel();
            GameController.NextLevel(false);
        }

        public void PreviousLevel()
        {
            if (GameController.WinStage) return;
            GameController.PrevLevelDev();
        }

        public void SetReplayButtonVisibility(bool isShown)
        {
            if (isShown)
            {
                replayButton.image.rectTransform.DOAnchoredPosition(Vector3.up * 470f, 0.5f).SetEasing(Ease.Type.QuadOut);
            }
            else
            {
                replayButton.image.rectTransform.DOAnchoredPosition(new Vector2(200, 470), 0.5f).SetEasing(Ease.Type.QuadOut);
            }
        }

        public void SetSkipButtonVisibility(bool isShown)
        {
            if (isShown)
            {
                skipButton.image.rectTransform.DOAnchoredPosition(Vector3.up * 470f, 0.5f).SetEasing(Ease.Type.QuadOut);
            }
            else
            {
                skipButton.image.rectTransform.DOAnchoredPosition(new Vector2(-200, 470), 0.5f).SetEasing(Ease.Type.QuadOut);
            }
        }

        public void ShopButton()
        {
            GameAudioController.PlayButtonAudio();

            StoreController.OpenStore();
        }

        public override void Initialise()
        {

        }

        #region Show/Hide

        public override void PlayHideAnimation()
        {
            UIController.OnPageClosed(this);
        }

        public override void PlayShowAnimation()
        {
            UIController.OnPageOpened(this);
        }

        #endregion

        private void BlackFadeOut()
        {
            blackFadeCanvas.enabled = true;
            blackFadePanel.color = Color.black;
            blackFadePanel.DOFade(0, 0.5f).OnComplete(() => {
                blackFadeCanvas.enabled = false;
            });
        }

        public void DoHidden(UnityAction action)
        {
            blackFadeCanvas.enabled = true;

            blackFadePanel.DOFade(1, 0.3f).OnComplete(() => {
                action();
                blackFadePanel.DOFade(0, 0.3f).OnComplete(() => {
                    blackFadeCanvas.enabled = false;
                });
            });
        }
    }
}
