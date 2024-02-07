using System;

namespace ParkInc
{
    public interface IAttribute
    {
        Type TargetAttributeType { get; }
    }
}
