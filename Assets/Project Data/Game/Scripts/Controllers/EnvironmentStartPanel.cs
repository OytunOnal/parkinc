#pragma warning disable 0649

using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Watermelon
{
    public class EnvironmentStartPanel : MonoBehaviour
    {
        [Header("Canvas")]
        [SerializeField] Canvas startCanvas;
        [SerializeField] CanvasGroup startCanvasGroup;
        [SerializeField] RectTransform startCanvasRect;

        [Header("UI Elements")]
        [SerializeField] Image titleImage;
        [SerializeField] TextMeshProUGUI tapToPlayText;

        [Header("Text Animation")]
        [SerializeField] float growthDuration = 1.5f;
        [SerializeField] float shrinkageDuration = 1.5f;
        [Space]
        [SerializeField] float growthScale = 1.1f;
        [SerializeField] float shrinkageScale = 0.9f;
        [Space]
        [SerializeField] Ease.Type growthEasing = Ease.Type.SineInOut;
        [SerializeField] Ease.Type shrinkageEasing = Ease.Type.SineInOut;

        public void ShowStartPanel()
        {
            startCanvas.gameObject.SetActive(true);

            titleImage.color = titleImage.color.SetAlpha(0);
            tapToPlayText.rectTransform.localScale = Vector3.zero;

            titleImage.DOFade(1, 0.5f).OnComplete(() =>
            {

                UITouchHandler.Enabled = true;

                tapToPlayText.rectTransform.DOScale(1, 2f).SetEasing(Ease.Type.BackOut).OnComplete(() =>
                {

                    if (!gameObject.activeInHierarchy) return;

                    tapToPlayText.transform.DOScale(Vector3.one * shrinkageScale, shrinkageDuration / 2).SetEasing(Ease.Type.SineOut).OnComplete(() =>
                    {
                        if (!gameObject.activeInHierarchy) return;

                        StartCoroutine(TapTextScale());

                    });

                });
            });
        }

        private IEnumerator TapTextScale()
        {
            while (true)
            {
                if (!gameObject.activeInHierarchy) break;

                tapToPlayText.transform.DOScale(Vector3.one * growthScale, growthDuration).SetEasing(growthEasing);
                yield return new WaitForSeconds(growthDuration);

                tapToPlayText.transform.DOScale(Vector3.one * shrinkageScale, shrinkageDuration).SetEasing(shrinkageEasing);
                yield return new WaitForSeconds(shrinkageDuration);
            }
        }

        public void FadeOut(float blendDuration)
        {
            startCanvasGroup.DOFade(0, blendDuration);
        }

        public void Init(EnvironmentStartPanel refference)
        {
            startCanvas.gameObject.SetActive(refference.startCanvas.gameObject.activeSelf);
            startCanvasRect.sizeDelta = refference.startCanvasRect.sizeDelta;
            startCanvasGroup.alpha = refference.startCanvasGroup.alpha;

            titleImage.rectTransform.sizeDelta = refference.titleImage.rectTransform.sizeDelta;
            tapToPlayText.rectTransform.sizeDelta = refference.tapToPlayText.rectTransform.sizeDelta;

            tapToPlayText.fontSize = refference.tapToPlayText.fontSize;

            if (startCanvas.gameObject.activeSelf) StartCoroutine(TapTextScale());
        }

        public void Init(Level level)
        {
            startCanvasGroup.alpha = 1;

            startCanvasRect.sizeDelta = new Vector2(level.Size.x * 100, level.Size.y * 100);

            if (level.Size.x > level.Size.y)
            {
                float titleSizeY = level.Size.y * 100 / 2;
                titleImage.rectTransform.sizeDelta = new Vector2(titleSizeY * 2, titleSizeY);

                float textSizeY = level.Size.y * 100 / 5;
                tapToPlayText.rectTransform.sizeDelta = new Vector2(textSizeY * 5, textSizeY);
            }
            else
            {
                float titleSizeX = level.Size.x * 100;
                titleImage.rectTransform.sizeDelta = new Vector2(titleSizeX, titleSizeX / 2);

                float textSizeX = level.Size.x * 100;
                tapToPlayText.rectTransform.sizeDelta = new Vector2(textSizeX, textSizeX / 5);
            }

            tapToPlayText.fontSize = (int)(tapToPlayText.rectTransform.sizeDelta.y / 200 * 126);
        }
    }
}