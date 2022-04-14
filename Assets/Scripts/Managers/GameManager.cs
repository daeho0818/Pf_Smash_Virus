using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.Effects;
using System.IO;
using TMP = TMPro.TextMeshProUGUI;

public class GameManager : MonoBehaviour
{
    private static GameManager instance { get; set; } = null;

    [Header("Game Logic")]
    public int stage_number;
    [SerializeField] int score;
    [SerializeField] TMP[] score_texts;
    private int current_score;
    public Transform[] spawn_points = new Transform[5];
    [SerializeField] Transform stage_text;
    [SerializeField] Vector3 target_position;

    [SerializeField] float _pain_guage;

    [Header("Virus Spawn Information")]
    [SerializeField] Entity[] virus_prefabs;
    [SerializeField] float[] virus_spawn_times;
    [SerializeField] float boss_appear_timer;
    [SerializeField] Entity boss;

    [Header("Else Spawn Information")]
    [SerializeField] float white_spawn_time;
    [SerializeField] float red_spawn_time;
    [SerializeField] White white_prefab;
    [SerializeField] Red red_prefab;
    [SerializeField] Item item_prefab;

    [SerializeField] ParticleSystemMultiplier explosion_prefab;

    SoundManager s_manager;

    Player player;

    public float pain_guage
    {
        get { return _pain_guage; }
        set
        {
            Color color = value < _pain_guage ? Color.green : Color.red;

            if (value > _pain_guage)
            {
                CameraManager.Get().CameraShake(1, 0.5f);
            }

            UIManager.Get().ScreenFading(color, 0, 0.3f, true, 5, true);

            _pain_guage = value;
            ts_controller.OnValueChanged("P-Guage : ", _pain_guage, "%", TextSliderController.OutPutCase.PERCENT);

            if (value >= 100)
                GameOverAnimation();
        }
    }


    TextSliderController ts_controller;


    private void Awake()
    {
        instance = this;
    }
    public static GameManager Get()
    {
        if (!instance)
            Debug.Assert(false);

        return instance;
    }
    void Start()
    {
        ts_controller = GetComponent<TextSliderController>();
        ts_controller.SetMaxValue(100);
        pain_guage = pain_guage;

        score = PlayerPrefs.GetInt("Game Score", 0);


        player = FindObjectOfType<Player>();
        player.onDestroy += GameOverAnimation;

        s_manager = SoundManager.Get();
        s_manager.PlaySound(s_manager.BGM, 0.3f);

        if (stage_number == 1)
        {
            StartCoroutine(player.StartAnimation());
            PlayerPrefs.SetInt("Game Score", 0);
            score = 0;
        }

        foreach (var score_text in score_texts)
            score_text.text = "SCORE : \n" + PlayerPrefs.GetInt("Game Score");

        StartCoroutine(StageTextAnimation());
        StartCoroutine(SpawnLogic());
    }

    void Update()
    {
    }

    public void CreateExplosion(Vector3 position, float size = 1)
    {
        var explosion = Instantiate(explosion_prefab);
        explosion.transform.position = position;
        explosion.multiplier = size;
        s_manager.PlaySound(s_manager.explosion, 0.5f);
        Destroy(explosion.gameObject, 3);
    }

    public void Createitem(Vector3 position)
    {
        Item item = Instantiate(item_prefab);
        item.transform.position = position;
    }

    Coroutine plus_score = null;
    public void PlusScore(int score)
    {
        if (plus_score != null)
        {
            StopCoroutine(plus_score);
            current_score = this.score;

            foreach (var score_text in score_texts)
                score_text.text = "SCORE :\n" + current_score;
        }

        this.score += score;
        plus_score = StartCoroutine(_PlusScore());
    }
    public Entity CreateVirus(int index)
    {
        return Instantiate(virus_prefabs[index]);
    }

    IEnumerator StageTextAnimation()
    {
        yield return new WaitForSeconds(3);


        TMPro.TMP_Text text;
        if (stage_number == 1) text = stage_text.GetComponent<TMPro.TextMeshPro>();
        else text = stage_text.GetComponent<TMP>();

        text.text = $"STAGE {stage_number}";

        while (stage_text.transform.localPosition != target_position)
        {
            stage_text.transform.localPosition = Vector3.MoveTowards(stage_text.transform.localPosition, target_position, Time.deltaTime * (stage_number == 1 ? 50 : 500));

            yield return null;
        }

        yield return new WaitForSeconds(0.25f);

        WaitForSeconds second = new WaitForSeconds(0.25f);
        for (int i = 0; i < 4; i++)
        {
            stage_text.gameObject.SetActive(!stage_text.gameObject.activeSelf);
            yield return second;
        }
    }

    public void ClearAnimation()
    {
        PlayerPrefs.SetInt("Game Score", score);
        StartCoroutine(_ClearAnimation());
    }
    IEnumerator _ClearAnimation()
    {
        yield return new WaitForSeconds(2);
        CameraManager manager = CameraManager.Get();
        player.Invincibility(50);

        while (player != null)
        {
            manager.SetTarget(player.transform);
            player.transform.position += Vector3.forward * player.move_speed * Time.deltaTime;
            yield return null;
        }

        switch (stage_number)
        {
            case 1:
                SceneManager.Get().ChangeScene("Ingame 2");
                break;
            case 2:
                SceneManager.Get().ChangeScene("Ranking");
                break;
            default:
                Debug.Assert(false);
                break;
        }
    }

    public void GameOverAnimation()
    {
        PlayerPrefs.SetInt("Game Score", score);
        StartCoroutine(_GameOverAnimation());
    }
    IEnumerator _GameOverAnimation()
    {
        float size_x = 500;
        float size_y = 100;
        float size_z = 250;

        Vector3 position;

        if (player)
            player.enabled = false;
        for (int i = 0; i < 30; i++)
        {
            position = new Vector3(Random.Range(0, size_x) - size_x / 2, Random.Range(0, size_y) - size_y / 2, Random.Range(0, size_z) - size_z / 2);
            CreateExplosion(position, 10);

            yield return new WaitForSeconds(Random.Range(0.01f, 0.5f));
        }

        if (player)
            player.Rigid().useGravity = true;

        yield return new WaitForSeconds(1f);
        SceneManager.Get().ChangeScene("Ranking");
    }

    IEnumerator _PlusScore()
    {
        float progress = 0;
        int cur_score = current_score;

        while (progress < 1f)
        {
            progress += Time.deltaTime;
            current_score = Mathf.RoundToInt(Mathf.Lerp(cur_score, score, progress));

            foreach (var score_text in score_texts)
                score_text.text = "SCORE :\n" + current_score;

            yield return null;
        }
    }

    bool boss_spawned = false;
    float boss_check_count;

    float white_check_count;
    float red_check_count;
    float[] check_counts = new float[5];
    IEnumerator SpawnLogic()
    {
        Entity virus = null;

        for (int i = 0; i < 5; i++)
            check_counts[i] = Time.time;

        boss_check_count = Time.time;

        while (true)
        {
            if (Time.time - white_check_count >= white_spawn_time)
            {
                SpawnWhite();
                white_check_count = Time.time;
            }
            if (Time.time - red_check_count >= red_spawn_time)
            {
                SpawnRed();
                red_check_count = Time.time;
            }

            if (Time.time - boss_check_count >= boss_appear_timer)
            {
                if (!boss_spawned)
                {
                    StartCoroutine(boss.SpawnAnimation());
                    boss_spawned = true;

                    UIManager.Get().ScreenFading(Color.red, 0, 0.3f, true, 1, true, () => UIManager.Get().ScreenFading(Color.red, 0, 0.3f, true, 1, true, () => UIManager.Get().ScreenFading(Color.red, 0, 0.3f, true, 1, true)));
                }
            }
            else
            {
                for (int i = 0; i < virus_prefabs.Length; i++)
                {
                    if (Time.time - check_counts[i] >= virus_spawn_times[i])
                    {
                        virus = Instantiate(virus_prefabs[i]);
                        virus.transform.parent = spawn_points[Random.Range(0, 5)];
                        virus.transform.localPosition = Vector3.zero;

                        check_counts[i] = Time.time;
                    }
                }
            }
            yield return null;
        }
    }

    public void SpawnWhite()
    {
        White white = Instantiate(white_prefab);
        white.transform.position = spawn_points[Random.Range(0, 5)].position;
        white.player = player;
    }
    public void SpawnRed()
    {
        Red red = Instantiate(red_prefab);
        red.transform.position = spawn_points[Random.Range(0, 5)].position;
    }
}
