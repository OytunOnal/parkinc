using System;

namespace ParkInc
{
    public class PropertyDrawConditionAttribute : BaseAttribute
    {
        public PropertyDrawConditionAttribute(Type targetAttributeType) : base(targetAttributeType)
        {
        }
    }
}
