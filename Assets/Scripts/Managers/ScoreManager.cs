using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Linq;

public class ScoreManager : MonoBehaviour
{
    private static ScoreManager instance { get; set; } = null;

    private void Awake()
    {
        instance = this;
    }

    public static ScoreManager Get()
    {
        if (!instance)
            Debug.Assert(false);

        return instance;
    }
    void Start()
    {

    }

    void Update()
    {
    }

    public string[] GetRanking()
    {
        string[] ranking = File.ReadAllLines("Score Ranking.json");

        return ranking;
    }

    public int SetRanking(int score, string initial)
    {
        string[] rankings = new string[5] { "", "", "", "", "" };

        string[] get_ranking = GetRanking();
        for (int i = 0; i < get_ranking.Length; i++)
            rankings[i] = get_ranking[i];

        int[] i_ranking = new int[5];

        string score_str;
        for (int i = 0; i < 5; i++)
        {
            score_str = "";
            for (int j = 3; j < rankings[i].Length; j++) score_str += rankings[i][j];

            if (rankings[i] != "") i_ranking[i] = System.Convert.ToInt32(score_str);
            else i_ranking[i] = 0;
        }

        int rank = 0;
        bool reset = false;
        for (int i = 4; i >= 0; i--)
        {
            if (score > i_ranking[i])
            {
                rank = i;
                reset = true;
            }
        }

        if (reset)
        {
            for (int i = 4; i > rank; i--)
            {
                rankings[i] = rankings[i - 1];
                i_ranking[i] = i_ranking[i - 1];
            }

            rankings[rank] = initial + score.ToString();
            i_ranking[rank] = score;
        }

        File.WriteAllLines("Score Ranking.json", rankings);

        if (reset) return rank;
        else return -1;
    }

    public void SetInitial(int index, string initial)
    {
        string[] rankings = GetRanking();

        string score = "";

        for (int i = 3; i < rankings[index].Length; i++)
            score += rankings[index][i];

        rankings[index] = initial + score;

        File.WriteAllLines("Score Ranking.json", rankings);
    }
}
