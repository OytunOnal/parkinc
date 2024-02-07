#pragma warning disable 649

using System.Collections.Generic;
using UnityEngine;

namespace Watermelon
{
    [System.Serializable]
    public class FieldElement
    {
        [SerializeField] private Texture2D texture;
        [SerializeField] private float horizontalOffset;
        [SerializeField] private float verticalOffset;
        [SerializeField] private Vector2Int size;

        public Texture2D Texture { get => texture; }
        public float HorizontalOffset { get => horizontalOffset; }
        public float VerticalOffset { get => verticalOffset; }
        public Vector2Int Size { get => size; }

        public FieldElement(Texture2D texture, float horizontalOffset, float verticalOffset, Vector2Int size)
        {
            this.texture = texture;
            this.horizontalOffset = horizontalOffset;
            this.verticalOffset = verticalOffset;
            this.size = size;
        }

        public float GetWidth(float cellSize)
        {
            return cellSize * size.x - horizontalOffset * 2;
        }

        public float GetHeight(float cellSize)
        {
            return cellSize * size.y - verticalOffset * 2;
        }

        public Rect GetFullRect(float startX, float startY, float cellSize)
        {
            return new Rect(startX, startY, cellSize * size.x, cellSize * size.y);
        }

        public Rect GetRect(float startX, float startY, float cellSize)
        {
            return new Rect(startX + horizontalOffset, startY + verticalOffset, GetWidth(cellSize), GetHeight(cellSize));
        }

        public static Vector2 GetOffset(float cellSize, int angle)
        {
            switch (angle)
            {
                case 0:
                    return Vector2.zero;
                case 90:
                    return new Vector2(cellSize, 0);
                case 180:
                    return new Vector2(cellSize, cellSize);
                case 270:
                    return new Vector2(0, cellSize);
                default:
                    Debug.LogError("Incorect angle in GetOffset");
                    return Vector2.zero;
            }
        }

        public List<Vector2Int> GetGridCells(Vector2Int currentPosition, int angle)
        {
            List<Vector2Int> resultList = new List<Vector2Int>();

            switch (angle)
            {
                case 0:
                    for (int x = 0; x < size.x; x++) // 3
                    {
                        for (int y = 0; y < size.y; y++)  //6
                        {
                            resultList.Add(new Vector2Int(currentPosition.x + x, currentPosition.y + y));
                        }
                    }

                    break;

                case 90:
                    for (int x = 0; x < size.x; x++)
                    {
                        for (int y = 0; y < size.y; y++)
                        {
                            resultList.Add(new Vector2Int(currentPosition.x - y, currentPosition.y + x));
                        }
                    }

                    break;
                case 180:
                    for (int x = 0; x < size.x; x++) // 3
                    {
                        for (int y = 0; y < size.y; y++)  //6
                        {
                            resultList.Add(new Vector2Int(currentPosition.x - x, currentPosition.y - y));
                        }
                    }

                    break;
                case 270:
                    for (int x = 0; x < size.x; x++)
                    {
                        for (int y = 0; y < size.y; y++)
                        {
                            resultList.Add(new Vector2Int(currentPosition.x + y, currentPosition.y - x));
                        }
                    }

                    break;
                default:
                    Debug.LogError("Incorect angle in GetGridCells");
                    break;
            }

            return resultList;
        }
    }
}