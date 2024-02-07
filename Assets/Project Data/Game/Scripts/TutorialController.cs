#pragma warning disable 0649

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Watermelon
{
    public class TutorialController : MonoBehaviour
    {
        private static TutorialController instance;

        private static TutorialDatabase Database => instance.database;
        [SerializeField] TutorialDatabase database;

        private static Canvas TutorialCanvas => instance.tutorialCanvas;
        [SerializeField] Canvas tutorialCanvas;

        private static RectTransform TutorialCanvasRect => instance.tutorialCanvasRect;
        [SerializeField] RectTransform tutorialCanvasRect;

        private static Image PointerImage => instance.pointerImage;
        [SerializeField] Image pointerImage;

        private static List<TutorialStep> steps;
        private static TutorialInfo tutorial;

        public static bool Active { get; private set; }

        private static int CurrentStepId;

        private static TweenCase pointerCase;

        void Awake()
        {
            instance = this;
            CurrentStepId = -1;
            steps = new List<TutorialStep>();
        }

        public static void Init(Level level)
        {
            tutorial = Database.GetTutorial(level);
            Active = tutorial != null;

            steps.Clear();
            CurrentStepId = -1;

            TutorialCanvas.enabled = Active;

            if (Active)
            {
                for (int i = 0; i < tutorial.StepsCount; i++)
                {
                    TutorialStep step = new TutorialStep();

                    TutorialInfo.TutorialStep tutorialStep = tutorial.GetStep(i);

                    step.movable = LevelObjectsSpawner.GetCar(tutorialStep.CarId);
                    step.direction = tutorialStep.Direction;

                    steps.Add(step);
                }

                CurrentStepId = 0;
                SetInteractables();

                UIGame gameUI = UIController.GetPage<UIGame>();
                gameUI.SetReplayButtonVisibility(false);
                gameUI.SetSkipButtonVisibility(false);

            }
            else
            {
                LevelObjectsSpawner.ResetInteractables();
            }
        }

        public static void NextStep()
        {
            CurrentStepId++;

            if (CurrentStepId >= tutorial.StepsCount)
            {
                CurrentStepId = -1;

                instance.StopAllCoroutines();
                pointerCase.Kill();

                Active = false;

                //UIController.ShowReplayAndSkipButtons();
                //UIController.ShowShopButton();

                PointerImage.DOFade(0, 0.5f).OnComplete(() =>
                {

                    TutorialCanvas.enabled = false;

                    LevelObjectsSpawner.ResetInteractables();
                });
            }
            else
            {
                instance.StopAllCoroutines();
                pointerCase.Kill();

                PointerImage.DOFade(0, 0.5f).OnComplete(() =>
                {
                    SetInteractables();
                });
            }
        }

        public static IEnumerator PointerAnimation()
        {
            Vector2 forwardPos = ScreenToCanvasPosition(steps[CurrentStepId].movable.ForwardPosition + Vector3.up, CameraController.MainCamera);
            Vector2 backPos = ScreenToCanvasPosition(steps[CurrentStepId].movable.BackPosition + Vector3.up, CameraController.MainCamera);

            Vector2 difference = forwardPos - backPos;

            Vector2 startPos = backPos;
            Vector2 endPos = forwardPos;

            bool swapDirection = false;

            switch (steps[CurrentStepId].direction)
            {
                case TutorialInfo.SwipeDirection.Down:

                    swapDirection = difference.y > 0;
                    break;

                case TutorialInfo.SwipeDirection.Left:

                    swapDirection = difference.x > 0;
                    break;

                case TutorialInfo.SwipeDirection.Right:

                    swapDirection = difference.x < 0;
                    break;

                case TutorialInfo.SwipeDirection.Top:

                    swapDirection = difference.y < 0;
                    break;
            }

            if (swapDirection)
            {
                startPos = forwardPos;
                endPos = backPos;
            }

            while (true)
            {
                PointerImage.rectTransform.position = startPos;

                pointerCase = PointerImage.DOFade(1, 0.5f);
                yield return new WaitForSeconds(0.5f);

                pointerCase = PointerImage.rectTransform.DOMove(endPos, 1.5f).SetEasing(Ease.Type.SineInOut);
                yield return new WaitForSeconds(1.5f);

                pointerCase = PointerImage.DOFade(0, 0.5f);
                yield return new WaitForSeconds(2f);

            }
        }

        public static void SetInteractables()
        {
            LevelObjectsSpawner.SetInteractables(steps[CurrentStepId].movable);

            instance.StartCoroutine(PointerAnimation());
        }

        private static Vector2 ScreenToCanvasPosition(Vector3 targetPosition, Camera camera)
        {
            Vector3 camForward = camera.transform.forward;

            float distInFrontOfCamera = Vector3.Dot(targetPosition - (camera.transform.position + camForward), camForward);
            if (distInFrontOfCamera < 0f)
            {
                targetPosition -= camForward * distInFrontOfCamera;
            }

            return RectTransformUtility.WorldToScreenPoint(camera, targetPosition);
        }

        public static bool Approve(Vector2 inputDelta)
        {
            TutorialInfo.SwipeDirection inputDirection;

            if (Mathf.Abs(inputDelta.x) > Mathf.Abs(inputDelta.y))
            {
                if (inputDelta.x > 0)
                {
                    inputDirection = TutorialInfo.SwipeDirection.Left;
                }
                else
                {
                    inputDirection = TutorialInfo.SwipeDirection.Right;
                }
            }
            else
            {
                if (inputDelta.y > 0)
                {
                    inputDirection = TutorialInfo.SwipeDirection.Down;
                }
                else
                {
                    inputDirection = TutorialInfo.SwipeDirection.Top;
                }
            }

            return steps[CurrentStepId].direction == inputDirection;
        }


        private class TutorialStep
        {
            public MovableController movable;
            public TutorialInfo.SwipeDirection direction;
        }
    }
}