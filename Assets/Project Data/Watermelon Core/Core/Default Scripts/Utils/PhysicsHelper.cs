using UnityEngine;

namespace Watermelon
{
    public static class PhysicsHelper
    {
        public static readonly int LAYER_DEFAULT = LayerMask.NameToLayer("Default");

        public const string TAG_FLOOR = "Floor";
        public const string TAG_COLLECT_POINT = "CoinsGatherPoint";

        public static void Init()
        {

        }
    }
}