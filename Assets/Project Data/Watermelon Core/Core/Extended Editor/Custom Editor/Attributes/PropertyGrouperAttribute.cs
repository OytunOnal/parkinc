using System;

namespace ParkInc
{
    public class PropertyGrouperAttribute : BaseAttribute
    {
        public PropertyGrouperAttribute(Type targetAttributeType) : base(targetAttributeType)
        {
        }
    }
}
