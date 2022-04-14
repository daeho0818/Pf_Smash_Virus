using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{

    static SoundManager instance { get; set; }

    public AudioClip fire;
    public AudioClip hit;
    public AudioClip explosion;
    public AudioClip BGM;
    public AudioClip BtnClick;
    private void Awake()
    {
        instance = this;
    }

    public static SoundManager Get()
    {
        if (!instance) Debug.Assert(false);

        return instance;
    }

    public void PlaySound(AudioClip clip, float volume)
    {
        GameObject go = new GameObject("Audio");
        var source = go.AddComponent<AudioSource>();
        source.clip = clip;
        source.volume = volume;
        source.Play();
    }
}
