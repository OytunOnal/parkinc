using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ParkInc
{
    [CreateAssetMenu(fileName = "StylesDatabase", menuName = "Games/ParkInc/Games/ParkInc/Create styles data", order = 2)]
    public class ListStylesDatabase : ScriptableObject
    {
        [SerializeField] List<CustomListStyle> styles;

        [Button]
        private void AddDefaultStyle()
        {
            CustomListStyle style = new CustomListStyle();
            style.SetDefaultStyleValues();
            styles.Add(style);
        }

        public CustomListStyle GetStyle(int index)
        {
            return styles[Mathf.Clamp(index, 0, styles.Count - 1)];
        }
    }

}
