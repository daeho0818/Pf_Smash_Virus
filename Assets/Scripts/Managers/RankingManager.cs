using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RankingManager : MonoBehaviour
{
    static RankingManager instance { get; set; }
    ScoreManager score_manager;

    [SerializeField] Ranking[] rankings;

    int score;
    string initial = "";
    bool complete = false;

    private void Awake()
    {
        instance = this;
    }
    public static RankingManager Get()
    {
        if (!instance)
            Debug.Assert(false);

        return instance;
    }
    void Start()
    {
        score_manager = ScoreManager.Get();

        score = PlayerPrefs.GetInt("Game Score");

        SetRanking();
        GetRanking();
    }

    void Update()
    {
        if (complete || index == -1) return;

        if (Input.GetKeyDown(KeyCode.Return))
        {
            if (initial.Length == 3)
            {
                complete = true;
                score_manager.SetInitial(index, initial);
                SoundManager.Get().PlaySound(SoundManager.Get().BtnClick, 0.3f);
                StartCoroutine(GoTitleAnimation());
            }
        }

        else if (Input.anyKeyDown && initial.Length < 3)
        {
            for (int i = 97; i <= 122; i++)
            {
                if (Input.GetKeyDown((KeyCode)i))
                {
                    initial += (char)(i - 32);
                    rankings[index].initial.text = initial;
                }
            }
        }

        if (Input.GetKeyDown(KeyCode.Backspace) && initial.Length > 0)
        {
            string str = "";
            for (int i = 0; i < initial.Length - 1; i++)
            {
                str += initial[i];
            }
            initial = str;

            rankings[index].initial.text = initial;
        }
    }

    int index = 0;
    public void SetRanking()
    {
        index = score_manager.SetRanking(score, "TMP");
    }

    void GetRanking()
    {
        var ranking = score_manager.GetRanking();

        string[] initials = new string[5];
        string[] scores = new string[5];

        for (int i = 4; i >= 0; i--)
        {
            if (ranking[i] != "")
            {
                for (int j = 0; j < ranking[i].Length; j++)
                {
                    if (j < 3)
                        initials[i] += ranking[i][j];
                    else
                        scores[i] += ranking[i][j];
                }
            }
            else
            {
                initials[i] = "000";
                scores[i] = "0";
            }
        }

        for (int i = 0; i < rankings.Length; i++)
        {
            rankings[i].score.text = scores[i];
            if (index != -1 && index != i)
            {
                rankings[i].initial.text = initials[i];
            }
            else rankings[i].initial.text = "";
        }
    }

    IEnumerator GoTitleAnimation()
    {
        var second = new WaitForSeconds(0.25f);

        for (int i = 0; i < 4; i++)
        {
            rankings[index].initial.enabled = !rankings[index].initial.enabled;
            yield return second;
        }

        SceneManager.Get().ChangeScene("Title");
    }
}
