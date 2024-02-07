using UnityEngine;

namespace Watermelon
{
    public class CarProductBehavior : MonoBehaviour
    {
        [SerializeField] GameObject[] movableGameObjects;

        public GameObject GetMovableObject(int index)
        {
            if (movableGameObjects.IsInRange(index))
                return movableGameObjects[index];

            return null;
        }
    }
}
