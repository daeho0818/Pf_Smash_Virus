using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMP = TMPro.TextMeshProUGUI;

public class TitleScene : MonoBehaviour
{
    [SerializeField] TMP title;
    [SerializeField] GameObject UI;

    [SerializeField] Button[] buttons;
    Button target_button;

    int btn_index = 0;
    bool ui_open = false;
    void Start()
    {
        SoundManager s_manager = SoundManager.Get();
        buttons[0].onClick.AddListener(() => { s_manager.PlaySound(s_manager.BtnClick, 0.3f); SceneManager.Get().ChangeScene("Ingame 1"); });
        buttons[1].onClick.AddListener(() => { s_manager.PlaySound(s_manager.BtnClick, 0.3f); ui_open = true; UI.SetActive(true); });
        buttons[2].onClick.AddListener(() => { s_manager.PlaySound(s_manager.BtnClick, 0.3f); Application.Quit(); });

        target_button = buttons[btn_index];

        StartCoroutine(TitleTextAnimation());
        StartCoroutine(ButtonAnimation());
    }

    void Update()
    {
        if (ui_open)
        {
            if (Input.GetKeyDown(KeyCode.Escape))
            {
                UI.SetActive(false);
                ui_open = false;
            }
            return;
        }

        if (Input.GetKeyDown(KeyCode.UpArrow))
        {
            if (btn_index > 0)
            {
                btn_index--;
                target_button = buttons[btn_index];
            }
        }
        else if (Input.GetKeyDown(KeyCode.DownArrow))
        {
            if (btn_index < 3)
            {
                btn_index++;
                target_button = buttons[btn_index];
            }
        }

        if (Input.GetKeyDown(KeyCode.Return))
        {
            target_button.onClick.Invoke();
        }
    }

    IEnumerator TitleTextAnimation()
    {
        float sin = 0;
        while (true)
        {
            sin += 0.1f;
            title.characterSpacing = Mathf.Sin(sin * Mathf.Deg2Rad) * 12.5f + 12.5f;
            yield return null;
        }
    }

    IEnumerator ButtonAnimation()
    {
        while (true)
        {
            target_button.transform.localScale = Vector3.MoveTowards(target_button.transform.localScale, Vector2.one * 1.25f, Time.deltaTime * 10);

            for (int i = 0; i < 3; i++)
            {
                if (buttons[i] != target_button)
                    buttons[i].transform.localScale = Vector3.MoveTowards(buttons[i].transform.localScale, Vector3.one, Time.deltaTime * 10);
            }

            yield return null;
        }
    }
}
