﻿using UnityEngine;

namespace ParkInc
{
    [SetupTab("Audio", texture = "icon_audio")]
    [CreateAssetMenu(fileName = "Audio Settings", menuName = "Games/ParkInc/Settings/Audio Settings")]
    public class AudioSettings : ScriptableObject
    {
        [SerializeField] Music music;
        public Music Music => music;

        [SerializeField] Sounds sounds;
        public Sounds Sounds => sounds;

        [SerializeField] Vibrations vibrations;
        public Vibrations Vibrations => vibrations;
    }
}

// -----------------
// Audio Controller v 0.3.3
// -----------------