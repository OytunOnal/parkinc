using System;

namespace ParkInc
{
    [AttributeUsage(AttributeTargets.Field, AllowMultiple = false, Inherited = true)]
    public class ResizableTextAreaAttribute : DrawerAttribute
    {
    }
}