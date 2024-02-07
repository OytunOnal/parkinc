using UnityEditor;

namespace ParkInc
{
    [CustomPropertyDrawer(typeof(WarningAttribute))]
    public class WarningDrawer : HelpBoxDrawer
    {
        protected override MessageType GetMessageType()
        {
            return MessageType.Warning;
        }
    }
}