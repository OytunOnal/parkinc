#pragma warning disable 649

using UnityEngine;

namespace ParkInc
{
    [CreateAssetMenu(menuName = "Games/ParkInc/Level Database/Obstacle", fileName = "Obstacle")]
    public class Obstacle : ScriptableObject
    {
        [SerializeField] int shopIndex;
        [SerializeField] private FieldElement fieldElement;

        public Vector2Int Size => fieldElement.Size;
        public GameObject Prefab => StoreController.GetSelectedPrefab(TabType.Environment).GetComponent<EnvironmentProductBehavior>().GetObstacleObject(shopIndex);
    }
}