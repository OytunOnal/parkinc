#pragma warning disable 0649

using System.Collections.Generic;
using UnityEngine;

namespace Watermelon
{
    [CreateAssetMenu(fileName = "Tutorials Database")]
    public class TutorialDatabase : ScriptableObject
    {
        [SerializeField] List<TutorialInfo> tutorials;

        public TutorialInfo GetTutorial(Level level)
        {
            for (int i = 0; i < tutorials.Count; i++)
            {
                if (tutorials[i].Level == level) return tutorials[i];
            }

            return null;
        }
    }
}