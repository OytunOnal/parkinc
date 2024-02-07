using System;

namespace ParkInc
{
    [AttributeUsage(AttributeTargets.Class, AllowMultiple = false)]
    public class SelectorAnchorAttribute : Attribute
    {
        public SelectorAnchorAttribute()
        {
        }
    }
}
