using System;

namespace ParkInc
{
    public class MethodDrawerAttribute : BaseAttribute
    {
        public MethodDrawerAttribute(Type targetAttributeType) : base(targetAttributeType)
        {
        }
    }
}