using UnityEditor;

namespace ParkInc
{
    [CustomPropertyDrawer(typeof(ErrorAttribute))]
    public class ErrorDrawer : HelpBoxDrawer
    {
        protected override MessageType GetMessageType()
        {
            return MessageType.Error;
        }
    }
}
