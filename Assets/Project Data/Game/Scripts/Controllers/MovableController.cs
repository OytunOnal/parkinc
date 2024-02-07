#pragma warning disable 649

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Watermelon
{
    public class MovableController : MonoBehaviour
    {
        private static readonly int ALBEDO_ID = Shader.PropertyToID("_Albedo");
        private static readonly int TINT_ID = Shader.PropertyToID("_Tint");
        private static readonly int SWAPPABLE_COLOR_ID = Shader.PropertyToID("_SwappableColor");
        private static readonly int GRAYSCALE_INTENSITY_ID = Shader.PropertyToID("_GrayscaleIntensity");

        [SerializeField] float acceleration;
        [SerializeField] float maxSpeed;
        [SerializeField] MeshRenderer movableRenderer;
        [SerializeField] Transform collidablePart;

        [Header("Particle Systems")]
        [SerializeField] ParticleSystem exhaustParticle;
        [SerializeField] ParticleSystem hitParticle;

        public Vector3 ForwardPosition => Position + transform.forward * Data.MovableObject.Size.y / 2f;
        public Vector3 BackPosition => Position - transform.forward * Data.MovableObject.Size.y / 2f;

        private float speed;
        private Vector3 offset;
        private Vector3 movementDirection;
        private Rigidbody rb;

        private bool isMoving;
        private bool isMovingBackwards;
        bool isCollisionMovement = false;

        public bool IsTilting { get; private set; }
        public bool IsWaitingForOtherCarToPass { get; private set; }

        public bool IsInteractable { get; private set; }

        public Transform Road { get; private set; }


        public bool IsFinishing { get; private set; }
        public MovableObjectData Data { get; private set; }

        public Vector3 Position { get => transform.position; set => transform.position = value; }
        public Vector3 Euler { get => transform.eulerAngles; set => transform.eulerAngles = value; }
        public Quaternion Rotation { get => transform.rotation; set => transform.rotation = value; }

        private FinishSnap finishSnap = new FinishSnap();

        private MaterialPropertyBlock propertyBlock;
        private List<Vector3> blockedDirections = new List<Vector3>();

        void Awake()
        {
            propertyBlock = new MaterialPropertyBlock();
            IsInteractable = true;
        }

        void Start()
        {
            rb = GetComponent<Rigidbody>();

            IsTilting = false;
            isCollisionMovement = false;
            IsWaitingForOtherCarToPass = false;
        }

        public void SetInteractable(bool interactable)
        {
            if (IsInteractable == interactable)
                return;

            IsInteractable = interactable;

            StartCoroutine(ChangeTint());
        }

        private IEnumerator ChangeTint()
        {
            /*Vector4 initialTint;
            Vector4 finalTint;

            if (IsInteractable)
            {
                initialTint = Vector4.one * 0.6f;
                finalTint = Vector4.one;
            }
            else
            {
                initialTint = Vector4.one;
                finalTint = Vector4.one * 0.6f;
            }*/

            float duration = 1;
            float time = 0;
            do
            {
                yield return null;
                time += Time.deltaTime;

                float t = time / duration;

                //Vector4 color = initialTint + (finalTint - initialTint) * t;

                propertyBlock.SetFloat(GRAYSCALE_INTENSITY_ID, IsInteractable ? 1 - t : t);
                movableRenderer.SetPropertyBlock(propertyBlock);

            } while (time < duration);
        }

        public void Disable()
        {
            gameObject.SetActive(false);
            isMoving = false;
            IsFinishing = false;
            IsTilting = false;
            isCollisionMovement = false;

            StopAllCoroutines();
        }

        public void Init(State state, MovableObjectData data)
        {
            Data = data;

            speed = state.speed;
            offset = state.offset;
            movementDirection = state.movementDirection;

            isMoving = state.isMoving;
            IsFinishing = state.isFinishing;
            isMovingBackwards = state.isMovingBackwards;

            finishSnap = state.finishSnap;

            if (IsFinishing)
            {
                Position = finishSnap.position;
                Euler = finishSnap.euler;
                StartCoroutine(MoveToFinish(finishSnap));
            }
            else
            {
                Position = state.position;
                Euler = state.euler;
            }

            Road = null;

            IsInteractable = true;

            propertyBlock.SetFloat(GRAYSCALE_INTENSITY_ID, 0);
            movableRenderer.SetPropertyBlock(propertyBlock);

            isCollisionMovement = false;
        }

        public void Init(MovableObjectData data)
        {
            Data = data;

            Euler = Vector3.up * Data.Angle;
            offset = Rotation * new Vector3(Data.MovableObject.Size.x, 0, -Data.MovableObject.Size.y) / 2f;
            Position = new Vector3(Data.Position.x, 0, LevelController.CurrentLevel.Size.y - Data.Position.y) + offset;

            switch (data.Angle)
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


            isMoving = false;
            speed = 0;
            movementDirection = Vector3.zero;

            IsInteractable = true;

            propertyBlock.SetFloat(GRAYSCALE_INTENSITY_ID, 0);
            movableRenderer.SetPropertyBlock(propertyBlock);

            isCollisionMovement = false;
        }

        public void TryMove(Vector2 delta)
        {
            if (isCollisionMovement)
                return;

            if (Data.Angle % 180 == 0)
            {
                movementDirection = Vector3.forward;
                if (delta.y > 0)
                {
                    movementDirection *= -1;
                }
            }
            else
            {
                movementDirection = Vector3.right;
                if (delta.x > 0)
                {
                    movementDirection *= -1;
                }
            }


            isMovingBackwards = movementDirection != transform.forward;

            speed = 0;
            isMoving = true;
            StartCoroutine(Shine());
            GameAudioController.VibrateShort();
        }

        private IEnumerator Shine()
        {
            float duration = 0.2f;

            Vector4 initialColor = Vector4.zero;
            Vector4 finalColor = Vector4.one * 0.4f;

            Ease.IEasingFunction ease = Ease.GetFunction(Ease.Type.SineOut);

            float time = 0;
            do
            {
                yield return null;
                time += Time.deltaTime;

                float t = ease.Interpolate(time / duration);

                Vector4 color = initialColor + (finalColor - initialColor) * t;

                propertyBlock.SetColor(ALBEDO_ID, color);

                movableRenderer.SetPropertyBlock(propertyBlock);

            } while (duration > time);


            ease = Ease.GetFunction(Ease.Type.SineIn);
            time = 0;
            do
            {
                yield return null;
                time += Time.deltaTime;

                float t = ease.Interpolate(time / duration);

                Vector4 color = finalColor + (initialColor - finalColor) * t;

                propertyBlock.SetColor(ALBEDO_ID, color);

                movableRenderer.SetPropertyBlock(propertyBlock);
            } while (duration > time);

            propertyBlock.SetColor(ALBEDO_ID, initialColor);

            movableRenderer.SetPropertyBlock(propertyBlock);
        }

        private void FixedUpdate()
        {
            if (!isMoving)
                return;

            if (speed < maxSpeed)
            {
                speed += acceleration * Time.fixedDeltaTime;
                if (speed > maxSpeed)
                    speed = maxSpeed;
            }

            if (IsFinishing)
                return;
            if (isCollisionMovement)
                return;
            Position = Position + movementDirection * speed * Time.deltaTime;
        }


        void OnCollisionEnter(Collision collision)
        {
            if (IsFinishing)
                return;
            if (!isMoving)
                return;

            if (collision.gameObject.layer == 9)
            {
                ObstacleController obstacle = collision.transform.GetComponent<ObstacleController>();
                if (!obstacle.IsTilting)
                {
                    obstacle.Collide(movementDirection);
                }

            }
            else if (collision.collider.tag != "WorldSpaceButton")
            {
                MovableController movable = collision.transform.GetComponent<MovableController>();
                if (movable != null && !movable.IsTilting && !movable.isMoving)
                {
                    movable.Collide(movementDirection);

                }
            }

            if (isCollisionMovement)
                return;

            if (collision.gameObject.layer != 9)
            {
                if (isMovingBackwards)
                {
                    hitParticle.transform.localPosition = new Vector3(
                        hitParticle.transform.localPosition.x,
                        hitParticle.transform.localPosition.y,
                        -Mathf.Abs(hitParticle.transform.localPosition.z)
                        );
                }
                else
                {
                    hitParticle.transform.localPosition = new Vector3(
                        hitParticle.transform.localPosition.x,
                        hitParticle.transform.localPosition.y,
                        Mathf.Abs(hitParticle.transform.localPosition.z)
                        );
                }
                //hitParticle.transform.position = collision.contacts[0].point;
                hitParticle.Play();
                GameAudioController.PlayHornShortAudio();
            }
            else
            {
                GameAudioController.PlayObstacleHitAudio();

            }

            rb.velocity = Vector3.zero;
            Tween.NextFrame(() =>
            {
                isMoving = false;
            }, 1, false, TweenType.FixedUpdate);

            Vector3 positionInGrid = Position - offset;
            Position = new Vector3(Mathf.RoundToInt(positionInGrid.x - movementDirection.x / 3f), 0, Mathf.RoundToInt(positionInGrid.z - movementDirection.z / 3f)) + offset;

            isCollisionMovement = true;

            StartCoroutine(CollisionMovement());

            GameAudioController.VibrateShort();

        }

        public void Collide(Vector3 direction)
        {
            IsTilting = true;
            StartCoroutine(Collision(xRotation: (Euler.y == 90 || Euler.y == 270 ? 1 : -1) * direction.z, zRotation: (Euler.y == 180 || Euler.y == 0 ? 1 : -1) * direction.x));
        }


        private IEnumerator Collision(float xRotation, float zRotation)
        {
            Vector3 euler = collidablePart.localEulerAngles;
            Vector3 initialRotation = collidablePart.localEulerAngles;

            CollisionData[] collisionData = GameController.GameConfigurations.CollisionData;

            for (int i = 0; i < collisionData.Length; i++)
            {
                Vector3 finalRotation = Quaternion.Euler(Vector3.up * (Euler.y + 90)) * new Vector3(xRotation, 0, zRotation) * collisionData[i].Offset + Vector3.up * 90;
                //Debug.Log(finalRotation);
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

        void OnTriggerEnter(Collider trigger)
        {
            if (!isMoving)
                return;
            if (IsFinishing)
                return;

            if (isCollisionMovement)
                return;


            IsFinishing = true;
            Road = trigger.transform;
            StartCoroutine(MoveToFinish(LevelController.GetFinishPosition(Road)));
            GameAudioController.PlayDrivingAwayAudio();

        }



        private IEnumerator CollisionMovement()
        {

            float duration = 0.075f;
            float time = 0;
            Vector3 originalPosition = Position;

            Vector3 initialPosition = Position;
            Vector3 finalPosition = Position + movementDirection * 0.3f;
            do
            {
                yield return null;
                time += Time.deltaTime;

                float t = time / duration;

                Position = initialPosition + (finalPosition - initialPosition) * t;
            } while (time < duration);

            initialPosition = Position;
            duration = 0.075f;
            time = 0;

            do
            {
                yield return null;
                time += Time.deltaTime;

                float t = time / duration;

                Position = initialPosition + (originalPosition - initialPosition) * t;
            } while (time < duration);

            Position = originalPosition;// - movementDirection * 0.1f;

            isCollisionMovement = false;
        }

        private IEnumerator IsOtherFinishingMovableClose()
        {
            while (LevelController.IsOtherFinishingMovableClose(this))
            {
                IsWaitingForOtherCarToPass = true;
                Vector3 savedPosition = collidablePart.localPosition;
                collidablePart.DOLocalMove(savedPosition + Vector3.forward * 0.3f * (isMovingBackwards ? -1 : 1), 0.15f).SetEasing(Ease.Type.QuadOut).OnComplete(() =>
                {
                    collidablePart.DOLocalMove(savedPosition, 0.15f).SetEasing(Ease.Type.SineInOut);
                });

                GameAudioController.PlayHornShortAudio();

                yield return new WaitForSeconds(0.5f);
            }

            IsWaitingForOtherCarToPass = false;
        }

        public IEnumerator MoveToFinish(Vector3 finishPosition)
        {
            finishSnap.finishPosition = finishPosition;
            finishSnap.Save(FinishSnap.FinishStage.WAITING, Position, Euler);

            yield return StartCoroutine(MoveToFinish(finishSnap));
        }

        public IEnumerator MoveToFinish(FinishSnap snap)
        {
            switch (snap.stage)
            {
                case FinishSnap.FinishStage.WAITING:

                    yield return StartCoroutine(IsOtherFinishingMovableClose());

                    goto case FinishSnap.FinishStage.MOVING_IN_PARKING;


                case FinishSnap.FinishStage.MOVING_IN_PARKING:

                    exhaustParticle.Play();

                    Vector3 destination;

                    if (movementDirection == Vector3.forward)
                    {
                        destination = isMovingBackwards ? new Vector3(Position.x, 0, LevelController.CurrentLevel.Size.y + 1.5f) : new Vector3(Position.x, 0, LevelController.CurrentLevel.Size.y);
                    }
                    else if (movementDirection == Vector3.back)
                    {
                        destination = isMovingBackwards ? new Vector3(Position.x, 0, -1.5f) : new Vector3(Position.x, 0, 0);
                    }
                    else if (movementDirection == Vector3.right)
                    {
                        destination = isMovingBackwards ? new Vector3(LevelController.CurrentLevel.Size.x + 1.5f, 0, Position.z) : new Vector3(LevelController.CurrentLevel.Size.x, 0, Position.z);
                    }
                    else
                    {
                        destination = isMovingBackwards ? new Vector3(-1.5f, 0, Position.z) : new Vector3(0, 0, Position.z);
                    }

                    finishSnap.Save(FinishSnap.FinishStage.MOVING_IN_PARKING, Position, Euler);
                    yield return StartCoroutine(MoveToTarget(destination));

                    goto case FinishSnap.FinishStage.ROTATING;


                case FinishSnap.FinishStage.ROTATING:

                    finishSnap.Save(FinishSnap.FinishStage.ROTATING, Position, Euler);

                    if (!isMovingBackwards)
                    {
                        yield return StartCoroutine(MoveInCircle());
                    }
                    else
                    {
                        yield return StartCoroutine(BeckwardsCircle());
                    }

                    goto case FinishSnap.FinishStage.FINISHING;


                case FinishSnap.FinishStage.FINISHING:

                    finishSnap.Save(FinishSnap.FinishStage.FINISHING, Position, Euler);
                    yield return StartCoroutine(MoveToTarget(finishSnap.finishPosition, true));

                    break;
            }

            LevelController.MovableFinished(this);

            exhaustParticle.Stop();

            IsFinishing = false;
        }

        public IEnumerator MoveToTarget(Vector3 target, bool final = false)
        {
            do
            {
                yield return null;
                Position = Vector3.MoveTowards(Position, target, speed * Time.deltaTime);
                if (final && !movableRenderer.isVisible)
                {
                    GameAudioController.PlayFinishAudio();
                    break;
                }

            } while (Vector3.Distance(Position, target) > 0.001f);
        }


        public IEnumerator BeckwardsCircle()
        {

            float acceleration = 400;
            float duration = speed / acceleration;

            float distance = acceleration * duration * duration / 2;
            float radius = 4 * distance / Mathf.PI;

            float initialAngle = Euler.y;
            float initialAngleRad = initialAngle * Mathf.Deg2Rad;

            Vector3 initialPosition = Position - new Vector3(Mathf.Cos(initialAngleRad + Mathf.PI), 0, Mathf.Sin(initialAngleRad)) * radius;

            float time = 0;
            float angle;
            float angleRad;

            do
            {
                yield return null;
                time += Time.deltaTime;

                float traversedDistance = speed * time - acceleration * time * time / 2;

                angleRad = initialAngleRad - traversedDistance / radius;
                angle = angleRad * Mathf.Rad2Deg;

                Position = initialPosition + new Vector3(Mathf.Cos(angleRad + Mathf.PI), 0, Mathf.Sin(angleRad)) * radius;
                Euler = Vector3.up * angle;
            } while (time < duration);

            angleRad = initialAngleRad - distance / radius;
            angle = angleRad * Mathf.Rad2Deg;

            Position = initialPosition + new Vector3(Mathf.Cos(angleRad + Mathf.PI), 0, Mathf.Sin(angleRad)) * radius;
            Euler = Vector3.up * angle;

            initialAngleRad = angleRad;
            initialPosition = Position - new Vector3(Mathf.Cos(angleRad), 0, Mathf.Sin(angleRad + Mathf.PI)) * radius;

            time = 0;

            do
            {
                yield return null;
                time += Time.deltaTime;

                if (time >= duration)
                    break;

                float traversedDistance = acceleration * time * time / 2;

                angleRad = initialAngleRad - traversedDistance / radius;
                angle = angleRad * Mathf.Rad2Deg;

                Position = initialPosition + new Vector3(Mathf.Cos(angleRad), 0, Mathf.Sin(angleRad + Mathf.PI)) * radius;
                Euler = Vector3.up * angle;
            } while (time < duration);

            angleRad = initialAngleRad - distance / radius;
            angle = angleRad * Mathf.Rad2Deg;

            Position = initialPosition + new Vector3(Mathf.Cos(angleRad), 0, Mathf.Sin(angleRad + Mathf.PI)) * radius;
            Euler = Vector3.up * angle;
        }

        public IEnumerator MoveInCircle()
        {

            float initialY = Euler.y;
            float yRad = Euler.y * Mathf.Deg2Rad;

            float distance = 2.5f * Mathf.PI / 2;

            float duration = distance / speed;
            float angularSpeed = 90f / duration;

            Vector3 initialPosition = Position - new Vector3(Mathf.Cos(yRad + Mathf.PI), 0, Mathf.Sin(yRad)) * 2.5f;

            float time = 0;

            float angle;
            float angleRad;
            do
            {
                yield return null;

                time += Time.deltaTime;

                angle = initialY + angularSpeed * time;
                angleRad = angle * Mathf.Deg2Rad;

                Position = initialPosition + new Vector3(Mathf.Cos(angleRad + Mathf.PI), 0, Mathf.Sin(angleRad)) * 2.5f;
                Euler = Vector3.up * angle;

            } while (time < duration);

            angle = initialY + 90;
            angleRad = angle * Mathf.Deg2Rad;

            Position = initialPosition + new Vector3(Mathf.Cos(angleRad + Mathf.PI), 0, Mathf.Sin(angleRad)) * 2.5f;
            Euler = Vector3.up * angle;

        }

        public State CreateState()
        {
            return new State
            {
                position = Position,
                euler = Euler,
                speed = speed,
                offset = offset,
                movementDirection = movementDirection,
                isMoving = isMoving,
                isFinishing = IsFinishing,
                isMovingBackwards = isMovingBackwards,
                finishSnap = finishSnap,
            };
        }

        public struct State
        {
            public Vector3 position;
            public Vector3 euler;

            public float speed;
            public Vector3 offset;
            public Vector3 movementDirection;

            public bool isMoving;
            public bool isFinishing;
            public bool isMovingBackwards;

            public FinishSnap finishSnap;
        }

        public struct FinishSnap
        {
            public FinishStage stage;
            public Vector3 position;
            public Vector3 euler;
            public Vector3 finishPosition;

            public void Save(FinishStage stage, Vector3 position, Vector3 euler)
            {
                this.stage = stage;
                this.position = position;
                this.euler = euler;
            }

            public enum FinishStage
            {
                WAITING, MOVING_IN_PARKING, ROTATING, FINISHING
            }
        }

    }
}