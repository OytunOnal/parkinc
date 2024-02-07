using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Watermelon
{
    public class FloatingTextHitBehaviour : FloatingTextBaseBehaviour
    {
        [SerializeField] TextMeshProUGUI floatingText;

        [Space]
        [SerializeField] float delay;
        [SerializeField] float disableDelay;
        [SerializeField] float scale;
        [SerializeField] float time;
        [SerializeField] Ease.Type easing;

        [Space]
        [SerializeField] float scaleTime;
        [SerializeField] Ease.Type scaleEasing;

        private Vector3 defaultScale;

        private void Awake()
        {
            defaultScale = transform.localScale;
        }

        public override void Activate(string text)
        {
            floatingText.text = text;

            int sign = Random.value >= 0.5f ? 1 : -1;

            transform.localScale = defaultScale * scale;
            transform.localRotation = Quaternion.Euler(70, 0, 18 * sign);

            Tween.DelayedCall(delay, delegate
            {
                transform.DOLocalRotate(Quaternion.Euler(70, 0, 0), time).SetEasing(easing).OnComplete(delegate
                {
                    Tween.DelayedCall(disableDelay, delegate
                    {
                        gameObject.SetActive(false);
                    });
                });
                transform.DOScale(defaultScale, scaleTime).SetEasing(scaleEasing);
            });
        }
    }
}