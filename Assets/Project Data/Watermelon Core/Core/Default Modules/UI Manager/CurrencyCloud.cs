using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using TMPro;

namespace Watermelon
{
    [System.Serializable]
    public class CurrencyCloud
    {
        private static CurrencyCloud currencyCloud;

        [SerializeField] FloatingCloudCase[] floatingCloudCases;

        [Space]
        [SerializeField] TextMeshProUGUI floatingText;

        private static Dictionary<int, FloatingCloudCase> floatingCloudCasesLink;

        public void Initialise()
        {
            currencyCloud = this;

            floatingCloudCasesLink = new Dictionary<int, FloatingCloudCase>();
            for (int i = 0; i < floatingCloudCases.Length; i++)
            {
                int cloudHash = StringToHash(floatingCloudCases[i].Name);
                if (!floatingCloudCasesLink.ContainsKey(cloudHash))
                {
                    floatingCloudCases[i].Init();

                    floatingCloudCasesLink.Add(cloudHash, floatingCloudCases[i]);
                }
                else
                {
                    Debug.LogError($"Cloud {floatingCloudCases[i].Name} already registered!");
                }
            }
        }

        public static void SpawnCurrency(string key, RectTransform rectTransform, RectTransform targetTransform, int elementsAmount, string text, System.Action onCurrencyHittedTarget = null)
        {
            SpawnCurrency(key.GetHashCode(), rectTransform, targetTransform, elementsAmount, text, onCurrencyHittedTarget);
        }

        public static void SpawnCurrency(int hash, RectTransform rectTransform, RectTransform targetTransform, int elementsAmount, string text, System.Action onCurrencyHittedTarget = null)
        {
            if (!floatingCloudCasesLink.ContainsKey(hash))
            {
                Debug.LogError($"Cloud with hash {hash} isn't registered!");

                return;
            }

            FloatingCloudCase floatingCloudCase = floatingCloudCasesLink[hash];

            RectTransform targetRectTransform = targetTransform;

            floatingCloudCase.Pool.ReturnToPoolEverything(true);

            // Play appear sound
            if (floatingCloudCase.AppearAudioClip != null)
                AudioController.PlaySound(floatingCloudCase.AppearAudioClip);

            float cloudRadius = floatingCloudCase.CloudRadius;
            Vector3 centerPoint = rectTransform.position;

            float defaultPitch = 0.9f;
            bool currencyHittedTarget = false;
            for (int i = 0; i < elementsAmount; i++)
            {
                GameObject elementObject = floatingCloudCase.Pool.GetPooledObject();
                elementObject.transform.SetParent(targetRectTransform);

                //elementObject.transform.SetParent(targetRectTransform);
                //elementObject.transform.SetAsLastSibling();
                //elementObject.transform.SetParent(currencyCloud.coinsContainerRectTransform);

                elementObject.transform.position = centerPoint;
                elementObject.transform.localRotation = Quaternion.identity;
                elementObject.transform.localScale = Vector3.one;

                Image elementImage = elementObject.GetComponent<Image>();
                elementImage.color = Color.white.SetAlpha(0);

                float moveTime = Random.Range(0.6f, 0.8f);

                TweenCase currencyTweenCase = null;
                RectTransform elementRectTransform = (RectTransform)elementObject.transform;
                elementImage.DOFade(1, 0.2f, unscaledTime: true);
                elementRectTransform.DOAnchoredPosition(elementRectTransform.anchoredPosition + (Random.insideUnitCircle * cloudRadius), moveTime, unscaledTime: true).SetEasing(Ease.Type.CubicOut).OnComplete(delegate
                {
                    Tween.DelayedCall(0.1f, delegate
                    {
                        elementRectTransform.DOScale(0.3f, 0.5f, unscaledTime: true).SetEasing(Ease.Type.ExpoIn);
                        elementRectTransform.DOLocalMove(Vector3.zero, 0.5f, unscaledTime: true).SetEasing(Ease.Type.SineIn).OnComplete(delegate
                        {
                            if (!currencyHittedTarget)
                            {
                                if (onCurrencyHittedTarget != null)
                                    onCurrencyHittedTarget.Invoke();

                                currencyHittedTarget = true;
                            }

                            bool punchTarget = true;
                            if (currencyTweenCase != null)
                            {
                                if (currencyTweenCase.state < 0.8f)
                                {
                                    punchTarget = false;
                                }
                                else
                                {
                                    currencyTweenCase.Kill();
                                }
                            }

                            if (punchTarget)
                            {
                                // Play collect sound
                                if (floatingCloudCase.CollectAudioClip != null)
                                    AudioController.PlaySound(floatingCloudCase.CollectAudioClip, pitch: defaultPitch);

                                defaultPitch += 0.01f;

                                currencyTweenCase = targetRectTransform.DOScale(1.2f, 0.15f, unscaledTime: true).OnComplete(delegate
                                {
                                    currencyTweenCase = targetRectTransform.DOScale(1.0f, 0.1f, unscaledTime: true);
                                });
                            }

                            elementObject.transform.SetParent(targetRectTransform);
                            elementRectTransform.gameObject.SetActive(false);
                        });
                    }, unscaledTime: true);
                });
            }

            if (!string.IsNullOrEmpty(text))
            {
                currencyCloud.floatingText.gameObject.SetActive(true);
                currencyCloud.floatingText.text = text;
                currencyCloud.floatingText.transform.localScale = Vector3.zero;
                currencyCloud.floatingText.transform.SetParent(targetRectTransform);
                currencyCloud.floatingText.transform.SetAsLastSibling();
                currencyCloud.floatingText.transform.position = rectTransform.position;
                currencyCloud.floatingText.color = currencyCloud.floatingText.color.SetAlpha(1.0f);
                currencyCloud.floatingText.transform.DOScale(1, 0.3f, unscaledTime: true).SetEasing(Ease.Type.CubicOut).OnComplete(delegate
                {
                    currencyCloud.floatingText.DOFade(0, 0.5f, unscaledTime: true).SetEasing(Ease.Type.ExpoIn);
                    currencyCloud.floatingText.transform.DOMove(currencyCloud.floatingText.transform.position.AddToY(0.1f), 0.5f, unscaledTime: true).SetEasing(Ease.Type.QuadIn).OnComplete(delegate
                    {
                        currencyCloud.floatingText.gameObject.SetActive(false);
                    });
                });
            }
        }

        public static void FloatingText(string text, RectTransform targetRectTransform, Vector3 position, int fontSize = 130)
        {
            if (!string.IsNullOrEmpty(text))
            {
                currencyCloud.floatingText.gameObject.SetActive(true);
                currencyCloud.floatingText.text = text;
                currencyCloud.floatingText.fontSize = fontSize;
                currencyCloud.floatingText.transform.localScale = Vector3.zero;
                currencyCloud.floatingText.transform.SetParent(targetRectTransform);
                currencyCloud.floatingText.transform.SetAsLastSibling();
                currencyCloud.floatingText.transform.position = position;
                currencyCloud.floatingText.color = currencyCloud.floatingText.color.SetAlpha(1.0f);
                currencyCloud.floatingText.transform.DOScale(1, 0.3f, unscaledTime: true).SetEasing(Ease.Type.CubicOut).OnComplete(delegate
                {
                    currencyCloud.floatingText.DOFade(0, 1.2f, unscaledTime: true).SetEasing(Ease.Type.ExpoIn);
                    currencyCloud.floatingText.transform.DOMove(currencyCloud.floatingText.transform.position.AddToY(0.1f), 1.2f, unscaledTime: true).SetEasing(Ease.Type.QuadIn).OnComplete(delegate
                    {
                        currencyCloud.floatingText.gameObject.SetActive(false);
                    });
                });
            }
        }

        public static int StringToHash(string cloudName)
        {
            return cloudName.GetHashCode();
        }

        [System.Serializable]
        public class FloatingCloudCase
        {
            [SerializeField] string name;
            public string Name => name;

            [SerializeField] GameObject prefab;
            public GameObject Prefab => prefab;

            [SerializeField] AudioClip appearAudioClip;
            public AudioClip AppearAudioClip => appearAudioClip;

            [SerializeField] AudioClip collectAudioClip;
            public AudioClip CollectAudioClip => collectAudioClip;

            [Space]
            [SerializeField] float cloudRadius;
            public float CloudRadius => cloudRadius;

            public Pool Pool { private set; get; }

            public void Init()
            {
                Pool = new Pool(new PoolSettings("FloatingCloud_" + name, prefab, 10, true));
            }
        }
    }
}
