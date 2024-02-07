using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Watermelon
{
    [RequireComponent(typeof(Animator))]
    public class ObstacleCollisionAnimation : MonoBehaviour
    {
        private static int collidedId = Animator.StringToHash("Collided Trigger");
        private static int collided90DegreesId = Animator.StringToHash("Collided 90 Degrees Trigger");
        private static int collided180DegreesId = Animator.StringToHash("Collided 180 Degrees Trigger");
        private static int collided270DegreesId = Animator.StringToHash("Collided 270 Degrees Trigger");
        private Animator animator;

        void Awake()
        {
            animator = GetComponent<Animator>();
        }

        public void Collide(Vector3 direction)
        {

            if (direction == Vector3.back)
            {
                animator.SetTrigger(collided180DegreesId);
            }
            else if (direction == Vector3.forward)
            {
                animator.SetTrigger(collidedId);
            }
            else if (direction == Vector3.left)
            {
                animator.SetTrigger(collided90DegreesId);
            }
            else if (direction == Vector3.right)
            {
                animator.SetTrigger(collided270DegreesId);
            }

        }




    }
}