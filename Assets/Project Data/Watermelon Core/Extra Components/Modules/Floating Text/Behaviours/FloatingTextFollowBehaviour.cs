using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace ParkInc
{
    public class FloatingTextFollowBehaviour : FloatingTextBaseBehaviour
    {
        [SerializeField] TextMeshProUGUI floatingText;

        [Space]
        [SerializeField] Vector3 offset;
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

            transform.localScale = Vector3.zero;
            transform.DOScale(defaultScale, scaleTime).SetEasing(scaleEasing);
            transform.DOMove(transform.position + offset, time).SetEasing(easing).OnComplete(delegate
            {
                gameObject.SetActive(false);
            });
        }
    }
}