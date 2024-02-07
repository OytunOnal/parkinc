using System;
using UnityEngine;

namespace ParkInc
{
    [AttributeUsage(AttributeTargets.Field, AllowMultiple = false)]
    public class DisableFieldAttribute : PropertyAttribute
    {
        public DisableFieldAttribute()
        {

        }
    }
}
