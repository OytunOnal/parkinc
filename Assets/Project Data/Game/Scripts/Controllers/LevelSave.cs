#pragma warning disable 649


namespace ParkInc
{
    public class LevelSave : ISaveObject
    {
        public int CurrentLevelID = 0;
        public int ActualLevelID;

        public void Flush()
        {

        }
    }
}