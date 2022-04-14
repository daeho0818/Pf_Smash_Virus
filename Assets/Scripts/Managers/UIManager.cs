using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    private static UIManager instance { get; set; } = null;

    [SerializeField] Image fade_image_under;
    [SerializeField] Image fade_image;
    private void Awake()
    {
        instance = this;
    }
    public static UIManager Get()
    {
        if (!instance)
            Debug.Assert(false);

        return instance;
    }

    Coroutine screen_fading = null;
    public void ScreenFading(Color color, float start_alpha, float target_alpha, bool under = false, float speed = 1, bool _return = false, System.Action onFaded = null)
    {
        if (screen_fading != null)
        {
            fade_image_under.gameObject.SetActive(false);
            fade_image.gameObject.SetActive(false);
            StopCoroutine(screen_fading);
        }
        screen_fading = StartCoroutine(_ScreenFading(color, start_alpha, target_alpha, under, speed, _return, onFaded));
    }

    IEnumerator _ScreenFading(Color color, float start_alpha, float target_alpha, bool under, float speed, bool _return, System.Action onFaded)
    {
        Color target_color = new Color(color.r, color.g, color.b, target_alpha);
        color.a = start_alpha;

        Image fade_image = under ? fade_image_under : this.fade_image;
        fade_image.gameObject.SetActive(true);

        float progress = 0;

        while (progress < 1)
        {
            progress += Time.deltaTime * speed;
            fade_image.color = Color.Lerp(color, target_color, progress);

            yield return null;
        }

        if (_return)
            ScreenFading(color, target_alpha, start_alpha, under, speed, false, onFaded);
        else if (onFaded != null)
            onFaded();
    }
}
