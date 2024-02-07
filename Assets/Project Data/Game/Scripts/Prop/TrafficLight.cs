using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Watermelon
{
    [RequireComponent(typeof(Animator))]
    public class TrafficLight : MonoBehaviour, EnvironmentProp
    {
        int slightRotationTriggerId = Animator.StringToHash("Slight Rotation Trigger");
        int tapRotationTriggerId = Animator.StringToHash("Tap Rotation Trigger");

        [SerializeField] GameObject topColoredLight;
        [SerializeField] GameObject middleColoredLight;
        [SerializeField] GameObject bottomColoredLight;

        [SerializeField] GameObject topGrayLight;
        [SerializeField] GameObject middleGrayLight;
        [SerializeField] GameObject bottomGrayLight;

        float lastTimeLightFlicked;
        float lastTimeSlightRotation;
        float lastTimeTap;

        private Animator animator;

        void Awake()
        {
            animator = GetComponent<Animator>();

            lastTimeSlightRotation = Time.time;
            lastTimeLightFlicked = Time.time;
            lastTimeTap = Time.time;
        }

        void Update()
        {
            LightsFlickerAnimation();
            SlightRotationAnimation();
        }

        public void Tap()
        {
            float time = Time.time;

            if (time - lastTimeTap < 2)
                return;

            lastTimeTap = time;

            animator.SetTrigger(tapRotationTriggerId);
        }

        private void SlightRotationAnimation()
        {
            float time = Time.time;


            if (time - lastTimeSlightRotation < 10)
                return;

            if (time - lastTimeTap < 2)
                return;

            lastTimeSlightRotation = time;

            if (Random.value > 0.5f)
                return;

            animator.SetTrigger(slightRotationTriggerId);
        }

        private void LightsFlickerAnimation()
        {
            float time = Time.time;

            if (time - lastTimeLightFlicked < 5)
                return;

            lastTimeLightFlicked = time;

            if (Random.value > 0.5f)
                return;

            GameObject coloredLight;
            GameObject grayLight;

            if (Random.value > 0.66f)
            {
                coloredLight = topColoredLight;
                grayLight = topGrayLight;
            }
            else if (Random.value > 0.33f)
            {
                coloredLight = middleColoredLight;
                grayLight = middleGrayLight;
            }
            else
            {
                coloredLight = bottomColoredLight;
                grayLight = bottomGrayLight;
            }

            coloredLight.SetActive(false);
            grayLight.SetActive(true);

            Tween.DelayedCall(1f, () =>
            {
                if (coloredLight != null)
                    coloredLight.SetActive(true);

                if (grayLight != null)
                    grayLight.SetActive(false);
            });
        }

    }
}