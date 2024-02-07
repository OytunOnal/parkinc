using System;
using System.Collections.Generic;
using UnityEngine;

namespace Watermelon
{
    public class LevelPoolHandler : MonoBehaviour
    {
        private static Dictionary<Obstacle, Pool> obstaclePools;
        private static Dictionary<MovableObject, Pool> movablePools;

        public static Pool GetObstaclePool(Obstacle key)
        {
            return obstaclePools[key];
        }

        public static Pool GetMovablePool(MovableObject key)
        {
            return movablePools[key];
        }

        public static void InitPools()
        {
            obstaclePools = new Dictionary<Obstacle, Pool>();
            movablePools = new Dictionary<MovableObject, Pool>();

            InitObstaclePools();
            InitMovablePools();
        }

        public static void InitObstaclePools()
        {
            for (int i = 0; i < GameController.LevelDatabase.ObstaclesCount; i++)
            {
                Obstacle obstacle = GameController.LevelDatabase.GetObstacle(i);

                PoolSettings poolSettings = new PoolSettings
                {
                    autoSizeIncrement = true,
                    objectsContainer = null,
                    size = 5,
                    type = Pool.PoolType.Single,
                    singlePoolPrefab = obstacle.Prefab,
                    name = "Obstacle_" + i
                };

                Pool obstaclePool = PoolManager.AddPool(poolSettings);
                obstaclePools.Add(obstacle, obstaclePool);
            }
        }

        public static void InitMovablePools()
        {
            int movableObjectsCount = GameController.LevelDatabase.MovableObjectsCount;
            for (int i = 0; i < movableObjectsCount; i++)
            {
                MovableObject movable = GameController.LevelDatabase.GetMovableObject(i);
                movablePools.Add(movable, PoolManager.AddPool(new PoolSettings
                {
                    autoSizeIncrement = true,
                    objectsContainer = null,
                    size = 5,
                    type = Pool.PoolType.Single,
                    singlePoolPrefab = movable.Prefab,
                    name = string.Format("Movable_{0}x{1}", movable.Size.x, movable.Size.y)
                }));
            }
        }

        public static void ReturnObstaclesToPool()
        {
            foreach (Pool obstaclePool in obstaclePools.Values)
            {
                obstaclePool.ReturnToPoolEverything();
            }
        }

        public static void ReturnMovablesToPool()
        {
            foreach (Pool movablePool in movablePools.Values)
            {
                movablePool.ReturnToPoolEverything();
            }
        }

        public static void ReturnEverythingToPool()
        {
            ReturnObstaclesToPool();
            ReturnMovablesToPool();
        }

        public static void ResetObstaclesSkinPools(bool withSpawn)
        {
            ReturnObstaclesToPool();
            DeleteObstaclePools();
            InitObstaclePools();

            if (withSpawn)
            {
                LevelObjectsSpawner.SpawnObstacles();
            }
        }

        public static void DeleteMovablesPools()
        {
            foreach (MovableObject movableObject in movablePools.Keys)
            {
                PoolManager.DestroyPool(movablePools[movableObject]);
            }

            movablePools.Clear();
        }

        public static void DeleteObstaclePools()
        {
            foreach (Obstacle obstacle in obstaclePools.Keys)
            {
                PoolManager.DestroyPool(obstaclePools[obstacle]);
            }

            obstaclePools.Clear();
        }
    }
}