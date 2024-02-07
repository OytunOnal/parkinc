using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Watermelon
{
    [RequireComponent(typeof(Animator))]
    public class ArrowSign : MonoBehaviour, EnvironmentProp
    {

        int bottomArrowTriggerId = Animator.StringToHash("Bottom Arrow Trigger");
        int middleArrowTriggerId = Animator.StringToHash("Middle Arrow Trigger");

        int topArrowFirstTriggerId = Animator.StringToHash("Top Arrow First Trigger");
        int topArrowSecondTriggerId = Animator.StringToHash("Top Arrow Second Trigger");
        int topArrowThirdTriggerId = Animator.StringToHash("Top Arrow Third Trigger");
        int topArrowFourthTriggerId = Animator.StringToHash("Top Arrow Fourth Trigger");


        int arrowState = 0;

        private Animator animator;

        private float lastTime;

        private float lastTimeBottomArrows;

        void Awake()
        {
            animator = GetComponent<Animator>();

            arrowState = 0;
            lastTime = Time.time;
            lastTimeBottomArrows = Time.time;

        }

        void Update()
        {
            float time = Time.time;

            if (time - lastTimeBottomArrows < 30)
            {
                return;
            }

            lastTimeBottomArrows = time;

            if (Random.value > 0.5) return;

            if (Random.value > 0.5f)
            {
                animator.SetTrigger(bottomArrowTriggerId);
            }
            else
            {
                animator.SetTrigger(middleArrowTriggerId);
            }

        }

        public void Tap()
        {

            float time = Time.time;

            if ((arrowState == 1 || arrowState == 2) && time - lastTime < 1 || (arrowState == 3 || arrowState == 0) && time - lastTime < 2)
            {
                return;
            }

            lastTime = time;

            arrowState++;



            switch (arrowState)
            {
                case 1:
                    animator.SetTrigger(topArrowFirstTriggerId);
                    break;

                case 2:
                    animator.SetTrigger(topArrowSecondTriggerId);
                    break;

                case 3:
                    animator.SetTrigger(topArrowThirdTriggerId);
                    break;
                case 4:
                    animator.SetTrigger(topArrowFourthTriggerId);
                    break;
            }

            if (arrowState == 4) arrowState = 0;

        }

    }
}