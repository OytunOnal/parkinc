#pragma warning disable 649


namespace Watermelon
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