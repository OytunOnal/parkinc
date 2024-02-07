﻿using System;
using UnityEngine;

namespace ParkInc
{
    [AttributeUsage(AttributeTargets.Field, AllowMultiple = true, Inherited = true)]
    public abstract class HelpBoxAttribute : PropertyAttribute
    {
        public string message;

        public HelpBoxAttribute(string message)
        {
            this.message = message;
        }
    }
}