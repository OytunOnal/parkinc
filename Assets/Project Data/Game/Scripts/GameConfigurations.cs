#pragma warning disable 649

using UnityEngine;

namespace Watermelon
{
    [CreateAssetMenu(fileName = "Game Configuration")]
    public class GameConfigurations : ScriptableObject
    {
        [Header("Cars Configurations")]
        [SerializeField] float maxSpeed;
        [SerializeField] float acceleration;

        public float MaxSpeed => maxSpeed;
        public float Acceleration => acceleration;

        [Header("Obstacle Configurations")]
        [SerializeField] CollisionData[] collisionData;

        public CollisionData[] CollisionData => collisionData;
    }

    [System.Serializable]
    public class ColorPack
    {
        [SerializeField] Color[] bodyColors;

        public Color[] BodyColors { get => bodyColors; }

        public Color GetRandomBodyColor()
        {
            return bodyColors.GetRandomItem();
        }
    }

    [System.Serializable]
    public struct CollisionData
    {
        [SerializeField] Ease.Type easeFunction;
        [SerializeField] float duration;
        [SerializeField] float offset;

        public Ease.Type EaseFunction => easeFunction;
        public float Duration => duration;
        public float Offset => offset;
    }
}
