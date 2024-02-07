#pragma warning disable 0649

using System.Collections.Generic;
using UnityEngine;

namespace Watermelon
{
    [System.Serializable]
    public class TutorialInfo
    {
        [SerializeField] Level level;
        [SerializeField] List<TutorialStep> steps;

        public Level Level => level;

        public int StepsCount => steps.Count;

        public TutorialStep GetStep(int index)
        {
            return steps[index];
        }

        [System.Serializable]
        public class TutorialStep
        {
            [SerializeField] int carId;
            [SerializeField] SwipeDirection direction;

            public int CarId => carId;
            public SwipeDirection Direction => direction;
        }

        public enum SwipeDirection
        {
            Left, Top, Right, Down
        }
    }
}