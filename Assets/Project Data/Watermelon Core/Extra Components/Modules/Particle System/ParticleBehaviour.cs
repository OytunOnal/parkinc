using UnityEngine;

namespace ParkInc
{
    public abstract class ParticleBehaviour : MonoBehaviour
    {
        public abstract void OnParticleActivated();
        public abstract void OnParticleDisabled();
    }
}