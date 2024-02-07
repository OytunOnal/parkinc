using UnityEngine;

namespace Watermelon
{
    public class EnvironmentProductBehavior : MonoBehaviour
    {
        [SerializeField] GameObject[] obstaclePrefabs;

        public GameObject GetObstacleObject(int index)
        {
            if (obstaclePrefabs.IsInRange(index))
                return obstaclePrefabs[index];

            return null;
        }
    }
}
