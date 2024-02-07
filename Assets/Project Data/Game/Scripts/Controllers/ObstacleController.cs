#pragma warning disable 649

using System.Collections;
using UnityEngine;

namespace Watermelon
{
    public class ObstacleController : MonoBehaviour
    {
        [SerializeField] Transform collidablePart;
        [SerializeField] ObstacleCollisionAnimation collisionAnimation;
        [SerializeField] ObstacleCollisionParticle collisionParticle;

        [Space]
        [SerializeField] bool isMoving;
        [SerializeField] Transform movablePart;
        [SerializeField] BoxCollider blockingCollider;
        [SerializeField] MovementData[] movementData;

        public bool IsTilting { get; private set; }

        public Quaternion Rotation => transform.rotation;
        public Vector3 EulerAngles { get => transform.eulerAngles; set => transform.eulerAngles = value; }
        public Vector3 Position { get => transform.position; set => transform.position = value; }

        public ObstacleData Data { get; private set; }

        private Vector3 offset;

        public void Disable()
        {
            IsTilting = false;
            StopAllCoroutines();
        }

        public void Init(ObstacleData obstacleData)
        {
            Data = obstacleData;

            EulerAngles = Vector3.up * Data.Angle;

            offset = Rotation * new Vector3(Data.Obstacle.Size.x, 0, -Data.Obstacle.Size.y) / 2f;

            Position = new Vector3(Data.Position.x, 0, LevelController.CurrentLevel.Size.y - Data.Position.y) + offset;

            switch (obstacleData.Angle)
            {
                case 90:
                case -270:
                    Position += Vector3.right;
                    break;
                case -90:
                case 270:
                    Position += Vector3.back;
                    break;
                case 180:
                case -180:
                    Position += Vector3.right + Vector3.back;
                    break;
            }

            if (isMoving && movementData.Length != 0) StartCoroutine(Move());

            IsTilting = false;
        }


        private IEnumerator Move()
        {
            while (enabled)
            {
                for (int i = 0; i < movementData.Length; i++)
                {
                    MovementData data = movementData[i];


                    if (!blockingCollider.enabled && data.IsSnteractable)
                    {
                        while (Physics.CheckBox(Position + blockingCollider.center, blockingCollider.size / 2, Rotation, 256))
                        {
                            yield return new WaitForSeconds(0.1f);
                        }
                    }

                    movablePart.DOLocalMove(data.Position, data.Duration).SetEasing(data.EaseFunction);
                    blockingCollider.enabled = data.IsSnteractable;

                    yield return new WaitForSeconds(data.Duration);
                    yield return null;
                }
            }
        }


        public void Collide(Vector3 direction)
        {
            IsTilting = true;

            float xRotation = (EulerAngles.y == 90 || EulerAngles.y == 270 ? 1 : -1) * direction.z;
            float zRotation = (EulerAngles.y == 180 || EulerAngles.y == 0 ? 1 : -1) * direction.x;

            Vector3 angle;

            if (direction.x == 1)
            {
                angle = Vector3.up * 90;
            }
            else if (direction.x == -1)
            {
                angle = Vector3.up * 270;
            }
            else
            {
                if (direction.z == 1)
                {
                    angle = Vector3.up * 0;
                }
                else
                {
                    angle = Vector3.up * 180;
                }
            }

            if (collisionAnimation != null)
            {
                collisionAnimation.Collide(Quaternion.Euler(angle - EulerAngles) * Vector3.back);
            }




            if (collisionParticle != null)
            {
                collisionParticle.Collide(angle);
            }

            StartCoroutine(Collision(xRotation, zRotation));
        }


        private IEnumerator Collision(float xRotation, float zRotation)
        {
            Vector3 euler = collidablePart.localEulerAngles;
            Vector3 initialRotation = collidablePart.localEulerAngles;

            CollisionData[] collisionData = GameController.GameConfigurations.CollisionData;

            for (int i = 0; i < collisionData.Length; i++)
            {
                Vector3 finalRotation = Quaternion.Euler(Vector3.up * (EulerAngles.y + 180)) * new Vector3(xRotation, 0, zRotation) * collisionData[i].Offset;
                Vector3 currentEuler;

                Ease.IEasingFunction ease = Ease.GetFunction(collisionData[i].EaseFunction);

                float time = 0;
                do
                {
                    yield return null;
                    time += Time.deltaTime;

                    float t = ease.Interpolate(time / collisionData[i].Duration);

                    currentEuler = initialRotation + (finalRotation - initialRotation) * t;

                    collidablePart.localEulerAngles = currentEuler;

                } while (time < collisionData[i].Duration);

                initialRotation = currentEuler;
            }

            collidablePart.localEulerAngles = euler;

            IsTilting = false;
        }

        [System.Serializable]
        public struct MovementData
        {
            [SerializeField] Ease.Type easeFunction;
            [SerializeField] float duration;
            [SerializeField] Vector3 position;
            [SerializeField] bool isInteractable;

            public Ease.Type EaseFunction => easeFunction;
            public float Duration => duration;
            public Vector3 Position => position;
            public bool IsSnteractable => isInteractable;
        }
    }
}