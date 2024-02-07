using UnityEngine;

namespace ParkInc
{
    public interface IUpgrade
    {
        public UpgradeType UpgradeType { get; }
        public string Title { get; }
        public BaseUpgradeStage[] Upgrades { get; }

        public void Initialise();
        public void UpgradeStage();
    }
}