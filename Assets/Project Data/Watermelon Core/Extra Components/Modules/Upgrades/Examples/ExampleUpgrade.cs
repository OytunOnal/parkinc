using UnityEngine;

namespace ParkInc
{
    [CreateAssetMenu(menuName = "Content/Upgrades/Example Upgrade", fileName = "Example Upgrade")]
    public class ExampleUpgrade : Upgrade<ExampleUpgrade.Stage>
    {
        public override void Initialise()
        {

        }

        [System.Serializable]
        public class Stage: BaseUpgradeStage
        {
            [SerializeField] float value;
            public float Value => value;
        }
    }
}

