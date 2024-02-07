#pragma warning disable 649

using UnityEngine;

namespace Watermelon
{
    [CreateAssetMenu(menuName = "Level Database/Level Database", fileName = "Level Database")]
    public class LevelDatabase : ScriptableObject
    {
        [SerializeField] Level[] levels;
        [SerializeField] Obstacle[] obstacles;
        [SerializeField] MovableObject[] movableObjects;

        //Editor stuff
        [SerializeField] Texture2D placeholderTexture;
        [SerializeField] Texture2D greenTexture;
        [SerializeField] Texture2D redTexture;
        [SerializeField] Texture2D itemBackgroundTexture;

        public int LevelsCount => levels.Length;
        public int ObstaclesCount => obstacles.Length;
        public int MovableObjectsCount => movableObjects.Length;

        public Level GetLevel(int index)
        {
            if (index < 0 || index >= LevelsCount) return null;

            return levels[index];
        }

        public Obstacle GetObstacle(int index)
        {
            if (index < 0 || index >= ObstaclesCount) return null;

            return obstacles[index];
        }

        public MovableObject GetMovableObject(int index)
        {
            if (index < 0 || index >= MovableObjectsCount) return null;

            return movableObjects[index];
        }
    }
}