using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMP = TMPro.TextMeshPro;

public class Boss_2 : Entity
{
    [SerializeField] GameObject hp_slider;
    TextSliderController ts_controller;

    internal BossState boss_state;

    internal Player player;

    public const string FACE = "*_#";

    TMP text;
    protected override void Awake()
    {
        base.Awake();
    }
    protected override void Start()
    {
        base.Start();

        onHit += () =>
        {
            ts_controller.OnValueChanged("BOSS : ", hp, "", TextSliderController.OutPutCase.VALUE);
        };

        ts_controller = GetComponent<TextSliderController>();
        ts_controller.SetMaxValue(max_hp);
        hp_slider.SetActive(true);
    }

    protected override void Update()
    {
        base.Update();
    }

    public override IEnumerator SpawnAnimation()
    {
        WaitForSeconds second = new WaitForSeconds(0.5f);
        this.enabled = true;
        player = FindObjectOfType<Player>();
        text = GetComponent<TMP>();

        onDestroy += () =>
        {
            StartCoroutine(DestroyAnimation());
        };

        while (transform.position.y != 0)
        {
            transform.position = Vector3.MoveTowards(transform.position, new Vector3(0, 0, 50), Time.deltaTime * 50);
            yield return null;
        }

        rigid.freezeRotation = true;
        boss_state = new WaitState(3, 3);
        Action(boss_state.Action(this));
    }

    IEnumerator DestroyAnimation()
    {
        GameManager manager = GameManager.Get();

        for (int i = 0; i < 8; i++)
        {
            manager.CreateExplosion(transform.position + new Vector3(Random.Range(-20, 20), Random.Range(0, 20), 1));

            yield return new WaitForSeconds(0.5f);
        }

        yield return new WaitForSeconds(2f);

        for (int i = 0; i < 16; i++)
        {
            manager.CreateExplosion(transform.position + new Vector3(Random.Range(-20, 20), Random.Range(0, 20), 1));
        }

        player.enabled = false;
        gameObject.SetActive(false);
        GameManager.Get().ClearAnimation();

        Destroy(gameObject);
    }

    Coroutine set_text = null;
    public void SetText(string str)
    {
        if (set_text != null) StopCoroutine(set_text);
        set_text = StartCoroutine(_SetText(str));
    }
    public IEnumerator _SetText(string str)
    {
        text.text = "";
        string txt = "";
        var second = new WaitForSeconds(0.05f);

        for (int i = 0; i < str.Length; i++)
        {
            txt += str[i];
            text.text = txt + '\n' + FACE;

            yield return second;
        }
    }

    Coroutine _action = null;
    public void Action(IEnumerator action)
    {
        if (_action != null) StopCoroutine(_action);
        _action = StartCoroutine(action);
    }

    public interface BossState
    {
        IEnumerator Action(Boss_2 boss);
    }

    public class Attack1State : BossState
    {
        List<Bullet> bullets = new List<Bullet>();
        public IEnumerator Action(Boss_2 boss)
        {
            BulletPool pool = BulletPool.Get();
            Bullet bullet;
            int interval = 30;
            Vector3 direction;

            boss.SetText("I HATE YOU");

            for (int count = 0; count < 3; count++)
            {
                int random = Random.Range(0, Random.Range(0, 360));

                for (int i = random; i < random + 360; i += interval)
                {
                    direction = new Vector3(Mathf.Cos(i * Mathf.Deg2Rad), 0, Mathf.Sin(i * Mathf.Deg2Rad));

                    bullet = pool.GetBullet(boss.transform.position, BulletType.VIRUS);
                    bullet.move_speed = boss.bullet_speed;
                    bullet.direction = direction;
                    bullet.damage = boss.damage;

                    bullets.Add(bullet);
                }

                yield return new WaitForSeconds(1);

                for (int i = 0; i < bullets.Count;)
                {
                    bullet = pool.GetBullet(bullets[i].transform.position, BulletType.VIRUS);
                    bullet.direction = (bullets[i].direction - new Vector3(0.5f, 0, 0.5f)).normalized;
                    bullet.move_speed = bullets[i].move_speed;
                    bullet.damage = bullets[i].damage;

                    bullet = pool.GetBullet(bullets[i].transform.position, BulletType.VIRUS);
                    bullet.direction = (bullets[i].direction + new Vector3(0.5f, 0, 0.5f)).normalized;
                    bullet.move_speed = bullets[i].move_speed;
                    bullet.damage = bullets[i].damage;

                    bullets.RemoveAt(i);
                }

                yield return new WaitForSeconds(1f);
            }

            boss.boss_state = new WaitState(3, 1);
            boss.Action(boss.boss_state.Action(boss));
        }
    }

    public class Attack2State : BossState
    {
        Player player;
        public Attack2State()
        {
        }
        public IEnumerator Action(Boss_2 boss)
        {
            BulletPool pool = BulletPool.Get();
            Bullet bullet;
            player = boss.player;
            Vector3 target_position = player.transform.position;
            Vector3 direction;

            boss.SetText("I'll KILL YOU");

            int interval = 5;

            yield return new WaitForSeconds(1);

            for (int loop = 0; loop < 3; loop++)
            {
                target_position.x = GameManager.Get().spawn_points[Random.Range(0, 5)].position.x;
                for (int count = 1; count <= 5; count++)
                {
                    for (int i = 0; i < 360; i += interval)
                    {
                        direction = (target_position + new Vector3(Mathf.Cos(i * Mathf.Deg2Rad) * (count * 6), Mathf.Sin(i * Mathf.Deg2Rad) * (count * 6), -5))
                            - boss.transform.position;
                        direction = direction.normalized;
                        bullet = pool.GetBullet(boss.transform.position, BulletType.VIRUS);
                        bullet.direction = direction;
                        bullet.move_speed = boss.bullet_speed;
                        bullet.damage = boss.damage;
                    }
                }

                yield return new WaitForSeconds(1.5f);
            }

            boss.boss_state = new WaitState(3, 2);
            boss.Action(boss.boss_state.Action(boss));
        }
    }

    public class Attack3State : BossState
    {
        public IEnumerator Action(Boss_2 boss)
        {
            BulletPool pool = BulletPool.Get();
            Bullet bullet;
            Vector3 direction;
            float random_size;

            for (int i = 0; i < 180; i++)
            {
                direction = new Vector3(Mathf.Cos(Random.Range(-180, 0) * Mathf.Deg2Rad), 0, -Mathf.Sin(Random.Range(1, 181) * Mathf.Deg2Rad));
                bullet = pool.GetBullet(boss.transform.position, BulletType.VIRUS);
                bullet.direction = direction;
                bullet.damage = boss.damage;
                bullet.move_speed = boss.bullet_speed;

                random_size = Random.Range(0.5f, 2f);
                bullet.transform.localScale = Vector3.one * random_size;

                yield return new WaitForSeconds(Random.Range(0, 0.1f));
            }

            boss.boss_state = new WaitState(3, 3);
            boss.Action(boss.boss_state.Action(boss));
        }
    }

    public class Attack4State : BossState
    {
        public IEnumerator Action(Boss_2 boss)
        {
            Vector3[] targets = new Vector3[2] { new Vector3(-10, 0, 0), new Vector3(10, 0, 0) };
            BulletPool pool = BulletPool.Get();
            Bullet bullet;
            float value = 0.5f;

            for (int i = 0; i < 200; i++)
            {
                if (i < 25)
                {
                    targets[0].x -= value;
                    targets[1].x -= value;
                }
                else if (i < 75)
                {
                    targets[0].x += value;
                    targets[1].x += value;
                }
                else if (i < 125)
                {
                    targets[0].x -= value;
                    targets[1].x -= value;
                }
                else if (i < 175)
                {
                    targets[0].x += value;
                    targets[1].x += value;
                }
                else
                {
                    targets[0].x -= value;
                    targets[1].x -= value;
                }

                for (int j = 0; j < 2; j++)
                {
                    bullet = pool.GetBullet(boss.transform.position, BulletType.VIRUS);
                    bullet.direction = (targets[j] - boss.transform.position).normalized;
                    bullet.move_speed = boss.bullet_speed;
                    bullet.damage = boss.damage;
                }

                yield return new WaitForSeconds(0.07f);
            }

            boss.boss_state = new WaitState(3, 4);
            boss.Action(boss.boss_state.Action(boss));
        }
    }

    public class SpawnState : BossState
    {
        public IEnumerator Action(Boss_2 boss)
        {
            int random = Random.Range(0, 5);
            Entity virus;
            GameManager manager = GameManager.Get();

            boss.SetText("I'll CURSE YOU");

            for (int i = 0; i < 5; i += 2)
            {
                virus = manager.CreateVirus(random);
                virus.transform.position = manager.spawn_points[i].position;
            }

            yield return null;

            boss.boss_state = new WaitState(3, 0);
            boss.Action(boss.boss_state.Action(boss));
        }
    }

    public class WaitState : BossState
    {
        float wait_time;
        int pattern_index;
        public WaitState(float wait, int pattern)
        {
            wait_time = wait;
            pattern_index = pattern;
        }
        public IEnumerator Action(Boss_2 boss)
        {
            yield return new WaitForSeconds(wait_time);

            switch (pattern_index)
            {
                case 0:
                    boss.boss_state = new Attack1State();
                    boss.Action(boss.boss_state.Action(boss));
                    break;
                case 1:
                    boss.boss_state = new Attack2State();
                    boss.Action(boss.boss_state.Action(boss));
                    break;
                case 2:
                    boss.boss_state = new Attack3State();
                    boss.Action(boss.boss_state.Action(boss));
                    break;
                case 3:
                    boss.boss_state = new Attack4State();
                    boss.Action(boss.boss_state.Action(boss));
                    break;
                case 4:
                    boss.boss_state = new SpawnState();
                    boss.Action(boss.boss_state.Action(boss));
                    break;
                default:
                    Debug.Assert(false);
                    break;
            }
        }
    }

}

