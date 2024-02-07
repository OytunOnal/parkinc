#pragma warning disable 649

using System.Collections;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Rendering.Universal;

namespace Watermelon
{
    public class CameraController : MonoBehaviour
    {
        private static CameraController instance;

        private static UniversalRenderPipelineAsset URP => instance.urp;
        [SerializeField] UniversalRenderPipelineAsset urp;

        public static Camera MainCamera { get; private set; }
        public static Vector3 Position { get => instance.transform.position; set => instance.transform.position = value; }
        public static Quaternion Rotation { get => instance.transform.rotation; set => instance.transform.rotation = value; }
        public static Vector3 Forward => instance.transform.forward;
        public static Vector3 Euler { get => instance.transform.eulerAngles; set => instance.transform.eulerAngles = value; }

        private static float hfov;

        void Start()
        {
            instance = this;

            MainCamera = GetComponent<Camera>();

            float fovRadians = MainCamera.fieldOfView * Mathf.Deg2Rad;
            hfov = 2 * Mathf.Atan(Mathf.Tan(fovRadians / 2) * MainCamera.aspect);

            MainCamera.fieldOfView = 45;

            //urp.shadowDistance = 50;

            Tween.NextFrame(delegate
            {
                StartCoroutine(FovAnimation(LevelController.Environment.ShowStartPanel));
            });
        }

        private IEnumerator FovAnimation(UnityAction action)
        {
            float duration = 1.5f;
            float initial = 45;
            float final = 50;

            Ease.IEasingFunction ease = Ease.GetFunction(Ease.Type.BackOut);

            float time = 0;
            do
            {
                yield return null;
                time += Time.deltaTime;

                float t = ease.Interpolate(time / duration);

                MainCamera.fieldOfView = initial + (final - initial) * t;

            } while (time < duration);
            MainCamera.fieldOfView = final;

            action?.Invoke();
        }

        public static void Init(Level level)
        {
            Vector3 centerPoint = new Vector3(level.Size.x, 0, level.Size.y) / 2f;

            float width = level.Size.x + 5;

            Position = GetCameraPosition(centerPoint, width, Quaternion.Euler(Euler.x, 0, Euler.z) * Vector3.forward);

            Euler = Euler.SetY(0);

            //URP.shadowDistance = (Position - Vector3.forward * (level.Size.y + 40)).magnitude;
        }

        public static void ChangeAngleToGamePosition(Level level)
        {

            Vector3 centerPoint = new Vector3(level.Size.x, 0, level.Size.y) / 2f;

            float width = level.Size.magnitude + 1;

            Vector3 finalRotation = new Vector3(Euler.x, -15, Euler.z);

            Vector3 finalPosition = GetCameraPosition(centerPoint, width, Quaternion.Euler(finalRotation) * Vector3.forward);

            instance.transform.DOMove(finalPosition, 0.5f).SetEasing(Ease.Type.SineInOut);
            instance.StartCoroutine(DoRotate(finalRotation, 0.5f, Ease.Type.SineInOut));
            //instance.StartCoroutine(DoShadowDistance((Position - Vector3.forward * (level.Size.magnitude + 30)).magnitude, 0.5f, Ease.Type.SineInOut));
        }

        public static void ChangeAngleToMenuPosition(Level level)
        {
            Vector3 centerPoint = new Vector3(level.Size.x, 0, level.Size.y) / 2f;

            float width = level.Size.x + 5;

            Vector3 finalRotation = new Vector3(Euler.x, 0, Euler.z);

            Vector3 finalPosition = GetCameraPosition(centerPoint, width, Quaternion.Euler(finalRotation) * Vector3.forward);

            instance.transform.DOMove(finalPosition, 0.5f).SetEasing(Ease.Type.SineInOut);
            instance.StartCoroutine(DoRotate(finalRotation, 0.5f, Ease.Type.SineInOut));
            //instance.StartCoroutine(DoShadowDistance((Position - Vector3.forward * (level.Size.magnitude + 30)).magnitude, 0.5f, Ease.Type.SineInOut));
        }

        private static IEnumerator DoShadowDistance(float finalDistance, float duration, Ease.Type ease = Ease.Type.Linear)
        {
            float initialDistance = URP.shadowDistance;

            Ease.IEasingFunction easeFunc = Ease.GetFunction(ease);

            float time = 0;
            do
            {
                yield return null;
                time += Time.deltaTime;

                float t = easeFunc.Interpolate(time / duration);

                URP.shadowDistance = initialDistance + (finalDistance - initialDistance) * t;

            } while (time < duration);

            URP.shadowDistance = finalDistance;
        }

        private static IEnumerator DoRotate(Vector3 finalRotation, float duration, Ease.Type ease = Ease.Type.Linear)
        {
            Vector3 initialRotation = Euler;

            if (initialRotation.y > 180)
            {
                initialRotation.y -= 360;
            }

            Ease.IEasingFunction easeFunc = Ease.GetFunction(ease);

            float time = 0;

            do
            {
                yield return null;
                time += Time.deltaTime;

                float t = easeFunc.Interpolate(time / duration);

                Euler = initialRotation + (finalRotation - initialRotation) * t;

            } while (time < duration);

            Euler = finalRotation;
        }

        public static void Move(Level level)
        {
            Vector3 centerPoint = new Vector3(level.Size.x, 0, level.Size.y) / 2f;

            float width = level.Size.magnitude + 1;

            Vector3 newCameraPosition = GetCameraPosition(centerPoint, width, Forward);

            instance.transform.DOMove(newCameraPosition, 0.5f).SetEasing(Ease.Type.SineInOut);
        }

        private static Vector3 GetCameraPosition(Vector3 centerPoint, float width, Vector3 forward)
        {
            float length = width / (2 * Mathf.Tan(hfov / 2));

            float height = Mathf.Abs((forward * length).y);

            Vector3 initialPosition = Vector3.up * height;

            Vector3 initialLookPoint = new Vector3(
                x: -height / forward.y * forward.x,
                y: 0,
                z: -height / forward.y * forward.z);

            Vector3 offset = centerPoint - initialLookPoint;

            return initialPosition + offset;
        }
    }
}