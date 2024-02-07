using System;

namespace ParkInc
{
    [AttributeUsage(AttributeTargets.Class, AllowMultiple = true)]
    public class RegisterModuleAttribute : Attribute
    {
        public string path;

        public RegisterModuleAttribute(string path)
        {
            this.path = path;
        }
    }
}
