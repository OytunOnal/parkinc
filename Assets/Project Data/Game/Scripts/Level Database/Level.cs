#pragma warning disable 649

using UnityEngine;

namespace Watermelon
{
    [CreateAssetMenu(menuName = "Level Database/Level", fileName = "Level")]
    public class Level : ScriptableObject
    {
        [SerializeField] Vector2Int size;
        [SerializeField] ObstacleData[] obstacles;

        [SerializeField] MovableObjectData[] movableObjects;
        public MovableObjectData[] MovableObjects => movableObjects;

        public Vector2Int Size => size;
        public int ObstaclesCount => obstacles.Length;

        public Level()
        {
            size = new Vector2Int(15, 15);
        }

        public ObstacleData GetObstacle(int index)
        {
            return obstacles[index];
        }
    }

    /* In case new Data classes needs to be added there are few requirements. This requirements make working with classes easier and 
             * help reduce code duplication to minimum. Requirements:
             * 1) Each Data class have 3 fields : "element", "position", "angle".
             * 2) "position" and "angle" fields is the same in each class.
             * 3) Element field inherits from ScriptableObject and have "fieldElement" field.
             */

    [System.Serializable]
    public class ObstacleData
    {
        [SerializeField] Obstacle element;
        [SerializeField] Vector2Int position;
        [SerializeField] int angle;

        public Obstacle Obstacle => element;
        public Vector2Int Position => position;
        public int Angle => angle;
    }

    [System.Serializable]
    public class MovableObjectData
    {
        [SerializeField] MovableObject element;
        [SerializeField] Vector2Int position;
        [SerializeField] int angle;

        public MovableObject MovableObject => element;
        public Vector2Int Position => position;
        public int Angle => angle;
    }
}