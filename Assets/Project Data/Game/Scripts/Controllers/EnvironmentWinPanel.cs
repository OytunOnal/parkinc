#pragma warning disable 0649

using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Watermelon
{
    public class EnvironmentWinPanel : MonoBehaviour
    {
        [Header("Canvas")]
        [SerializeField] Canvas winCanvas;
        [SerializeField] CanvasGroup winCanvasGroup;
        [SerializeField] RectTransform winCanvasRect;

        [Header("UI Elements")]
        [SerializeField] TextMeshProUGUI perfectText;
        [SerializeField] Image coinImage;
        [SerializeField] TextMeshProUGUI coinsText;
        [SerializeField] Button getX3Button;
        [SerializeField] TextMeshProUGUI getX3ButtonText;
        [SerializeField] Image videoImage;
        [SerializeField] TextMeshProUGUI noThanksText;

        [Header("Button Collider")]
        [SerializeField] BoxCollider buttonCollider;

        private bool isBouncingCoin = false;

        public Button GetX3Button => getX3Button;
        public Vector3 CoinGatherPoint => coinImage.transform.position;

        public void SetCoinsAmount(int amount)
        {
            coinsText.text = "+" + amount;
        }

        public void BounceCoin()
        {
            if (isBouncingCoin == true) return;

            isBouncingCoin = true;

            coinsText.rectTransform.DOScale(1.2f, 0.1f);
            coinImage.rectTransform.DOScale(1.2f, 0.1f).OnComplete(() =>
            {
                coinsText.rectTransform.DOScale(1f, 0.1f);
                coinImage.rectTransform.DOScale(1f, 0.1f).OnComplete(() =>
                {
                    isBouncingCoin = false;
                });
            });
        }

        public void Init(EnvironmentWinPanel refference)
        {
            isBouncingCoin = false;

            winCanvas.gameObject.SetActive(refference.winCanvas.gameObject.activeSelf);
            winCanvasRect.sizeDelta = refference.winCanvasRect.sizeDelta;
            winCanvasGroup.alpha = refference.winCanvasGroup.alpha;

            perfectText.rectTransform.sizeDelta = refference.perfectText.rectTransform.sizeDelta;
            noThanksText.rectTransform.sizeDelta = refference.noThanksText.rectTransform.sizeDelta;
            getX3Button.image.rectTransform.sizeDelta = refference.getX3Button.image.rectTransform.sizeDelta;

            perfectText.fontSize = refference.perfectText.fontSize;
            noThanksText.fontSize = refference.noThanksText.fontSize;
            getX3ButtonText.fontSize = refference.getX3ButtonText.fontSize;

            buttonCollider.size = refference.buttonCollider.size;
            buttonCollider.center = refference.buttonCollider.center;
        }

        public void Show(Level level)
        {
            isBouncingCoin = false;

            Currency coinCurrency = CurrenciesController.GetCurrency(Currency.Type.Coins);
            coinImage.sprite = coinCurrency.Icon;

            getX3Button.gameObject.SetActive(false);
            getX3ButtonText.gameObject.SetActive(false);
            noThanksText.gameObject.SetActive(false);

            coinsText.text = "";

            winCanvas.gameObject.SetActive(true);
            winCanvasGroup.DOFade(1f, 0.5f);

            winCanvasRect.sizeDelta = new Vector2(level.Size.x * 100, level.Size.y * 100);

            float refferenceSize;

            if (level.Size.x > level.Size.y)
            {
                refferenceSize = level.Size.y * 100f / 10f;
            }
            else
            {
                refferenceSize = level.Size.x * 100f / 10f;
            }

            perfectText.rectTransform.sizeDelta = new Vector2(refferenceSize * 10, refferenceSize * 2f);
            perfectText.rectTransform.anchoredPosition = new Vector2(0, -refferenceSize);
            perfectText.fontSize = (int)(perfectText.rectTransform.sizeDelta.y / 200f * 126f);

            coinImage.rectTransform.sizeDelta = new Vector2(refferenceSize * 1.2f, refferenceSize * 1.2f);
            coinImage.rectTransform.anchoredPosition = new Vector2(-refferenceSize, -refferenceSize * 4);

            coinsText.rectTransform.sizeDelta = new Vector2(refferenceSize * 3f, refferenceSize * 1.4f);
            coinsText.rectTransform.anchoredPosition = new Vector2(refferenceSize * 1.4f, -refferenceSize * 4);
            coinsText.fontSize = (int)(100f / 160 * refferenceSize * 1.4f);

            getX3Button.image.rectTransform.sizeDelta = new Vector2(refferenceSize * 5f, refferenceSize * 2f);
            getX3Button.image.rectTransform.anchoredPosition = new Vector2(0, refferenceSize * 2);

            buttonCollider.size = getX3Button.image.rectTransform.sizeDelta;
            buttonCollider.center = Vector3.up * getX3Button.image.rectTransform.sizeDelta.y / 2;

            videoImage.rectTransform.sizeDelta = new Vector2(refferenceSize * 1.6f, refferenceSize * 1.6f);
            videoImage.rectTransform.anchoredPosition = new Vector2(-refferenceSize * 1.3f, 0);

            getX3ButtonText.rectTransform.sizeDelta = new Vector2(refferenceSize * 3.5f, refferenceSize * 2.5f);
            getX3ButtonText.rectTransform.anchoredPosition = new Vector2(refferenceSize * 1.3f, 0);
            getX3ButtonText.fontSize = (int)(80f / 250f * refferenceSize * 2.5f);

            noThanksText.rectTransform.sizeDelta = new Vector2(refferenceSize * 10f, refferenceSize * 1.1f);
            noThanksText.fontSize = (int)(noThanksText.rectTransform.sizeDelta.y / 100f * 72f);


            //getX3ButtonText.fontSize = (int)(getX3Button.image.rectTransform.sizeDelta.y / 250f * 128f);

            float noThanksPositionY = 50f / 72f * noThanksText.fontSize;

            noThanksText.rectTransform.anchoredPosition = new Vector2(0, noThanksPositionY);

            perfectText.rectTransform.localScale = Vector3.zero;
            perfectText.rectTransform.DOScale(1, 1f).SetEasing(Ease.Type.BackOut);

            coinImage.rectTransform.localScale = Vector3.zero;
            Tween.DelayedCall(0.3f, () =>
            {
                coinImage.rectTransform.DOScale(1, 1f).SetEasing(Ease.Type.BackOut);
            });

        }


        public void ShowButtons()
        {
            getX3Button.gameObject.SetActive(true);
            getX3ButtonText.gameObject.SetActive(true);

            getX3Button.image.color = getX3Button.image.color.SetAlpha(0);
            getX3Button.image.DOFade(1, 0.5f).OnComplete(() =>
            {
                UITouchHandler.Enabled = true;
            });

            getX3ButtonText.color = getX3ButtonText.color.SetAlpha(0);
            getX3ButtonText.DOFade(1, 0.5f);

            Tween.DelayedCall(1.5f, () =>
            {
                noThanksText.color = noThanksText.color.SetAlpha(0);
                noThanksText.gameObject.SetActive(true);
                noThanksText.DOFade(1, 0.5f);
            });
        }

        public void HideWinCanvas()
        {
            isBouncingCoin = false;

            winCanvasGroup.DOFade(0f, 0.5f).OnComplete(() =>
            {
                winCanvas.gameObject.SetActive(false);
            });

        }
    }
}