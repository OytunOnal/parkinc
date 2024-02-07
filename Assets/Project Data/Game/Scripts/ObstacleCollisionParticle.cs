#pragma warning disable 0649

using UnityEngine;

namespace ParkInc
{
    public class ObstacleCollisionParticle : MonoBehaviour
    {
        [SerializeField] ParticleSystem particle;
        [SerializeField] bool changeRotation = true;

        private Vector3 initialRotation;

        void Awake()
        {
            initialRotation = particle.transform.localEulerAngles;
        }

        public void Collide(Vector3 rotation)
        {
            if (changeRotation)
            {
                particle.transform.eulerAngles = initialRotation + rotation;
            }

            particle.Play();
        }
    }
}