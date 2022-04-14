using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMP = TMPro.TextMeshProUGUI;

public class TextSliderController : MonoBehaviour
{
    public enum OutPutCase
    {
        PERCENT,
        VALUE
    }

    public Slider slider;
    public TMP[] texts;

    private float max_value = 0;

    public void SetMaxValue(float value)
    {
        max_value = value;
    }


    float target_value;
    Coroutine value_change = null;
    public void OnValueChanged(string pre, float value, string sub, OutPutCase output_case)
    {
        Debug.Assert(max_value != 0);
        if (value < 0) value = 0;
        else if (value > max_value) value = max_value;

        if (value_change != null)
        {
            slider.value = target_value / max_value;

            if (output_case == OutPutCase.PERCENT)
                foreach (var text in texts)
                    text.text = pre + ((int)(value / max_value * 100)).ToString() + sub;
            else
                foreach (var text in texts)
                    text.text = pre + ((int)value).ToString() + sub;

            StopCoroutine(value_change);
        }
        target_value = value;
        value_change = StartCoroutine(ValueChange(pre, sub, output_case));
    }
    IEnumerator ValueChange(string pre, string sub, OutPutCase output_case)
    {
        float value;
        float start_value = slider.value * max_value;

        float progress = 0;
        while (progress < 1)
        {
            progress += Time.deltaTime;
            value = Mathf.Lerp(start_value, target_value, progress);
            slider.value = value / max_value;

            if (output_case == OutPutCase.PERCENT)
                foreach (var text in texts)
                    text.text = pre + Mathf.RoundToInt(value / max_value * 100).ToString() + sub;
            else
                foreach (var text in texts)
                    text.text = pre + Mathf.RoundToInt(value).ToString() + sub;

            yield return null;
        }
    }

    void Start()
    {
    }

    void Update()
    {

    }
}
