#pragma warning disable 0109, 649

using UnityEngine;

namespace Watermelon
{
    public class Coin : MonoBehaviour
    {
        [SerializeField] Rigidbody coinRigidbody;
        [SerializeField] ConstantForce coinConstantForce;

        private bool forceEnabled = false;
        private bool collided = false;
        private bool triggerable = false;
        private float timeAlive = 0;

        public void Init(Vector3 initialVelocity, Vector3 position, Quaternion rotation)
        {
            transform.position = position;
            transform.rotation = rotation;
            transform.localScale = Vector3.one;
            gameObject.SetActive(true);

            forceEnabled = false;
            collided = false;
            triggerable = false;
            timeAlive = 0;

            coinRigidbody.velocity = initialVelocity;
            coinConstantForce.force = Vector3.zero;
        }

        private void OnCollisionEnter(Collision collision)
        {
            if (!collided && collision.gameObject.CompareTag(PhysicsHelper.TAG_FLOOR))
            {
                collided = true;

                GameAudioController.PlayFinalCoinCollect(0.75f);

                GameAudioController.VibrateShort();

                Tween.DelayedCall(0.70f, () =>
                {
                    coinConstantForce.force = (LevelController.Environment.EnvironmentWinPanel.CoinGatherPoint - transform.position).normalized * 20f;
                    forceEnabled = true;
                    triggerable = true;
                    timeAlive = 0;
                });
            }
        }

        private void OnTriggerEnter(Collider collider)
        {
            if (triggerable && collider.gameObject.CompareTag(PhysicsHelper.TAG_COLLECT_POINT))
            {
                transform.DOScale(Vector3.zero, 0.15f).SetEasing(Ease.Type.QuadIn).OnComplete(() =>
                {
                    gameObject.SetActive(false);

                    Tween.NextFrame(Disable);

                    LevelController.Environment.CollectCoin();

                    GameAudioController.VibrateShort();
                });
            }
        }

        private void FixedUpdate()
        {
            if (forceEnabled)
            {
                timeAlive += Time.fixedDeltaTime;
                coinConstantForce.force = (LevelController.Environment.EnvironmentWinPanel.CoinGatherPoint - transform.position).normalized * (20f + timeAlive * 15);

                if (timeAlive > 2)
                {
                    triggerable = false;
                    forceEnabled = false;
                    transform.DOScale(Vector3.zero, 0.15f).SetEasing(Ease.Type.QuadIn).OnComplete(() =>
                    {
                        gameObject.SetActive(false);

                        Tween.NextFrame(Disable);

                        LevelController.Environment.CollectCoin();

                        GameAudioController.VibrateShort();
                    });
                }
            }
        }

        private void Disable()
        {
            forceEnabled = false;
            collided = false;
            triggerable = false;
            timeAlive = 0;
            coinConstantForce.force = Vector3.zero;

            transform.localScale = Vector3.one;
        }
    }
}