using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Watermelon
{
    [RequireComponent(typeof(Animator))]
    public class BuildingSign : MonoBehaviour, EnvironmentProp
    {
        int hasFallenTriggerId = Animator.StringToHash("Has Fallen Trigger");

        private Animator animator;

        bool hasFallen = false;

        void Awake()
        {
            animator = GetComponent<Animator>();

            hasFallen = false;
        }

        public void Tap()
        {

            if (hasFallen) return;

            hasFallen = true;

            animator.SetTrigger(hasFallenTriggerId);
        }
    }
}