#pragma warning disable 649

#if MODULE_VIBRATION
using MoreMountains.NiceVibrations;
#endif
using UnityEngine;

namespace Watermelon
{
    public class GameAudioController : MonoBehaviour
    {
        private static GameAudioController instance;

        public static bool SoundEnabled => PrefsSettings.GetFloat(PrefsSettings.Key.Volume) != 0f;

        private static float lastVibrationTime = 0;

        private static float lastCoinCollectedSound = 0;
        private static float lastBounceSpawnSound = 0;
        private static float lastBounceHideSound = 0;

        private void Awake()
        {
            instance = this;
        }

        private void Start()
        {
            AudioController.SetVolume(PrefsSettings.GetFloat(PrefsSettings.Key.Volume));
        }

        public static void VibrateShort()
        {
            float time = Time.time;

            if (time - lastVibrationTime < 0.07f) return;

            lastVibrationTime = time;

            if (!AudioController.IsVibrationEnabled()) return;

#if MODULE_VIBRATION
        MMVibrationManager.Haptic(HapticTypes.LightImpact, true);
#else
            Vibration.Vibrate(AudioController.Vibrations.shortVibration);
#endif
        }

        public static void VibrateLevelFinish()
        {
            if (!AudioController.IsVibrationEnabled()) return;

#if MODULE_VIBRATION
        MMVibrationManager.Haptic(HapticTypes.Success, true);
#else
            Vibration.Vibrate(AudioController.Vibrations.longVibration);
#endif
        }

        public static void PlayButtonAudio()
        {
            if (!SoundEnabled) return;

            AudioController.PlaySound(AudioController.Sounds.buttonSound);
        }

        public static void PlayFinalCoinCollect(float pitch)
        {
            if (!SoundEnabled) return;

            float time = Time.time;

            if (time - lastCoinCollectedSound < 0.07f) return;

            lastCoinCollectedSound = time;

            AudioController.PlaySound(AudioController.Sounds.finalCoinCollectClip, pitch: pitch);
        }

        public static void PlayBounceSpawn(float pitch)
        {
            if (!SoundEnabled) return;

            float time = Time.time;

            if (time - lastBounceSpawnSound < 0.07f) return;

            lastBounceSpawnSound = time;

            AudioController.PlaySound(AudioController.Sounds.bounceSpawnAudioClip, pitch: pitch);
        }

        public static void PlayBounceHide(float pitch)
        {
            if (!SoundEnabled) return;

            float time = Time.time;

            if (time - lastBounceHideSound < 0.07f) return;

            lastBounceHideSound = time;

            AudioController.PlaySound(AudioController.Sounds.bounceHideAudioClip, pitch: pitch);
        }

        public static void PlayFinishAudio()
        {
            if (!SoundEnabled) return;

            AudioController.PlaySound(AudioController.Sounds.finishAudioClip);
        }

        public static void PlayObstacleHitAudio()
        {
            if (!SoundEnabled) return;

            AudioController.PlaySound(AudioController.Sounds.obstacleHitAudioClip);
        }

        public static void PlayDrivingAwayAudio()
        {
            if (!SoundEnabled) return;

            AudioController.PlaySound(AudioController.Sounds.drivingAwayAudioClip);
        }

        public static void PlayHornShortAudio()
        {
            if (!SoundEnabled) return;

            Tween.DelayedCall(0.1f, () => AudioController.PlaySound(AudioController.Sounds.hornShort));

            PlayObstacleHitAudio();
        }
    }
}