using UnityEditor;

namespace ParkInc
{
    [CustomPropertyDrawer(typeof(InfoAttribute))]
    public class InfoDrawer : HelpBoxDrawer
    {
        protected override MessageType GetMessageType()
        {
            return MessageType.Info;
        }
    }
}
