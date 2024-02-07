#pragma warning disable 649

using UnityEngine;
using UnityEngine.EventSystems;

namespace Watermelon
{
    // UI Module v0.9.0
    public class UITouchHandler : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IDragHandler
    {
        private bool isMouseDown = false;
        private DragData dragData;

        public static bool Enabled { get; set; }

        public static bool CanReplay { get; set; }

        void Awake()
        {
            Enabled = false;
            CanReplay = false;
        }

        public void OnDrag(PointerEventData eventData)
        {
            if (!isMouseDown) return;

            Vector2 delta = dragData.PressPosition - eventData.position;

            if (delta.magnitude > 50)
            {

                if (TutorialController.Active)
                {
                    if (TutorialController.Approve(delta))
                    {
                        dragData.Movable.TryMove(delta);

                        isMouseDown = false;

                        TutorialController.NextStep();
                    }
                }
                else
                {
                    dragData.Movable.TryMove(delta);
                    CanReplay = true;

                    UIGame gameUI = UIController.GetPage<UIGame>();
                    gameUI.SetReplayButtonVisibility(true);

                    isMouseDown = false;
                }


            }
        }

        public void OnPointerDown(PointerEventData eventData)
        {

            if (!Enabled) return;

            if (GameController.WinStage)
            {

                if (Physics.Raycast(CameraController.MainCamera.ScreenPointToRay(eventData.position), out RaycastHit buttonHit, float.PositiveInfinity, 1024))
                {
                    if (buttonHit.collider.tag == "WorldSpaceButton")
                    {
                        ExecuteEvents.Execute(buttonHit.collider.gameObject, new BaseEventData(EventSystem.current), ExecuteEvents.submitHandler);
                        return;
                    }
                }

                LevelController.Environment.CollectCoins();

                GameController.TurnsAfterRewardVideo++;
                GameController.NextLevel();
            }

            if (GameController.StartStage)
            {
                GameController.StartGame();
            }

            Ray ray = CameraController.MainCamera.ScreenPointToRay(eventData.position);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit, 200, 256))
            {

                MovableController movable = hit.transform.GetComponent<MovableController>();
                if (movable != null && movable.IsInteractable)
                {
                    isMouseDown = true;
                    dragData = new DragData { Movable = movable, PressPosition = eventData.position };
                }
            }
        }

        public void OnPointerUp(PointerEventData eventData)
        {
            isMouseDown = false;

            Ray ray = CameraController.MainCamera.ScreenPointToRay(eventData.position);

            if (Physics.Raycast(ray, out RaycastHit hit, 200, 8192))
            {
                EnvironmentProp prop = hit.collider.GetComponent<EnvironmentProp>();

                prop.Tap();

            }
        }

        private struct DragData
        {
            public MovableController Movable;
            public Vector2 PressPosition;
        }
    }
}