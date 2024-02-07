using System;

namespace ParkInc
{
    [AttributeUsage(AttributeTargets.Field, AllowMultiple = true, Inherited = true)]
    public class WarningAttribute : HelpBoxAttribute
    {
        public WarningAttribute(string title) : base(title)
        {

        }
    }
}
