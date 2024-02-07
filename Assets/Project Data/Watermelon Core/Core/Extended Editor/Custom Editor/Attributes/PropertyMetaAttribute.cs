using System;

namespace ParkInc
{
    public class PropertyMetaAttribute : BaseAttribute
    {
        public PropertyMetaAttribute(Type targetAttributeType) : base(targetAttributeType)
        {
        }
    }
}
