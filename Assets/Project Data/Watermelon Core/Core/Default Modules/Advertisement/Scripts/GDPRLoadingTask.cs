using UnityEngine;

namespace ParkInc
{
    public sealed class GDPRLoadingTask : LoadingTask
    {
        private GDPRPanel gdprPanel;

        public override void Activate()
        {
            isActive = true;

            GameObject gdprPanelObject = GameObject.Instantiate(AdsManager.GDPRPrefab);
            gdprPanelObject.transform.ResetGlobal();

            gdprPanel = gdprPanelObject.GetComponent<GDPRPanel>();
            gdprPanel.Initialise(this);
        }
    }
}
