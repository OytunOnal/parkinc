using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Watermelon
{
    public class NoAdsButton : MonoBehaviour
    {
        private static List<NoAdsButton> buttons = new List<NoAdsButton>();

        void Awake()
        {
            buttons.Add(this);
        }

        void Start()
        {
            if (!AdsManager.IsForcedAdEnabled())
            {
                gameObject.SetActive(false);
            }
        }

        public static void Disable()
        {
            for (int i = 0; i < buttons.Count; i++)
            {
                buttons[i].gameObject.SetActive(false);
            }
        }
    }
}