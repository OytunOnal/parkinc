using UnityEngine;

namespace Watermelon
{
    [System.Serializable]
    public class Currency
    {
        [SerializeField] Type currencyType;
        public Type CurrencyType => currencyType;

        [SerializeField] Sprite icon;
        public Sprite Icon => icon;

        [SerializeField] GameObject model;
        public GameObject Model => model;

        [SerializeField] bool displayAlways = false;
        public bool DisplayAlways => displayAlways;

        public int Amount { get => save.Amount; set => save.Amount = value; }

        public string AmountFormatted => CurrenciesHelper.Format(save.Amount);

        private Pool pool;
        public Pool Pool => pool;

        public event CurrencyChangeDelegate OnCurrencyChanged;

        private Save save;

        public void Initialise()
        {
            pool = new Pool(new PoolSettings(currencyType.ToString(), model, 1, true));
        }

        public void SetSave(Save save)
        {
            this.save = save;
        }

        public void InvokeChangeEvent(int difference)
        {
            OnCurrencyChanged?.Invoke(this, difference);
        }

        // DO NOT CHANGE ORDER OF THE CURRENCIES AFTER RELEASE. IT CAN BRAKE THE SAVES OF THE GAME!
        public enum Type
        {
            Coins = 0,
        }

        [System.Serializable]
        public class Save : ISaveObject
        {
            [SerializeField] int amount;
            public int Amount { get => amount; set => amount = value; }

            public void Flush()
            {

            }
        }
    }
}