using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : Entity
{
    enum FormState
    {
        BATTLE,
        FAST
    }
    FormState _form_state;
    FormState form_state
    {
        get => _form_state;
        set
        {
            _form_state = value;

            if (_form_state == FormState.BATTLE)
            {
                move_speed = battle_speed;
                bullet_positions = battle_fire_positions;
                anim.SetInteger("Formation", 1);
            }
            else
            {
                move_speed = fast_speed;
                bullet_positions = fast_fire_positions;
                anim.SetInteger("Formation", 0);
            }
        }
    }

    [SerializeField] Transform[] battle_fire_positions;
    [SerializeField] Transform[] fast_fire_positions;

    [SerializeField] MeshRenderer shield_renderer;

    [Header("Particles")]
    [SerializeField] ParticleSystem fire_upgrade_prefab;
    [SerializeField] ParticleSystem hp_plus_prefab;

    [SerializeField] float battle_speed;
    [SerializeField] float fast_speed;

    int attack_rank = 1;
    private int move_index;
    Vector3 target_position;

    Transform[] bullet_positions;

    public TextSliderController ts_controller;
    SoundManager manager;

    protected override void Awake()
    {
        base.Awake();
    }
    protected override void Start()
    {
        base.Start();

        form_state = FormState.FAST;

        manager = SoundManager.Get();

        move_index = 2;

        ts_controller = GetComponent<TextSliderController>();
        ts_controller.SetMaxValue(max_hp);

        onHit += () =>
        {
            CameraManager.Get().CameraShake(1, 0.5f);
            UIManager.Get().ScreenFading(Color.red, 0, 0.3f, true, 5, true);

            ts_controller.OnValueChanged("HP : ", hp, "", TextSliderController.OutPutCase.VALUE);

            Invincibility(1.5f);

            onHit += () =>
            {
                manager.PlaySound(manager.hit, 1);
            };
        };
    }

    int temp = 0;
    protected override void Update()
    {
        base.Update();

        Move();

        Fire();

        if (Input.GetKeyDown(KeyCode.S))
        {
            if (temp < 5)
                temp++;
            else temp = 0;

            GetItem(temp);
        }
    }
    private void OnTriggerEnter(Collider other)
    {
        base.OnTriggerEnter(other);

        if (other.CompareTag("Item"))
        {
            GetItem(Random.Range(0, 6));
            Destroy(other.gameObject);
        }
    }

    int dir_x = 0;
    private void Move()
    {
        if (Input.GetKeyDown(KeyCode.LeftArrow) && move_index > 0)
        {
            move_index--;
            dir_x = -1;
        }
        else if (Input.GetKeyDown(KeyCode.RightArrow) && move_index < GameManager.Get().spawn_points.Length - 1)
        {
            move_index++;
            dir_x = 1;
        }

        target_position.x = GameManager.Get().spawn_points[move_index].position.x;
        transform.position = Vector3.MoveTowards(transform.position, target_position, move_speed * Time.deltaTime);

        if (transform.position != target_position)
        {
            transform.rotation = Quaternion.RotateTowards(transform.rotation, Quaternion.Euler(0, 0, 30 * -dir_x), 100 * Time.deltaTime);
        }
        else
        {
            transform.rotation = Quaternion.RotateTowards(transform.rotation, Quaternion.Euler(0, 0, 0), 100 * Time.deltaTime);
        }
    }

    void Fire()
    {
        if (Input.GetKey(KeyCode.Space))
        {
            if (Time.time - check_count >= fire_interval)
            {
                BulletPool pool = BulletPool.Get();
                Bullet bullet = null;

                foreach (var position in bullet_positions)
                {
                    if (position.gameObject.activeSelf)
                    {
                        bullet = pool.GetBullet(position.position, BulletType.PLAYER);
                        bullet.direction = Vector3.forward;
                        bullet.move_speed = bullet_speed;
                        bullet.damage = damage;
                    }
                }

                check_count = Time.time;

                manager.PlaySound(manager.fire, 1);
            }
        }

        if (Input.GetKeyDown(KeyCode.C))
        {
            form_state = (FormState)(Mathf.Abs((int)form_state - 1));
        }
    }

    public void GetItem(int index)
    {
        switch (index)
        {
            case 0:
                ItemFireUpgrade();
                break;
            case 1:
                Invincibility(3f);
                break;
            case 2:
                ItemHpPlus(10);
                break;
            case 3:
                ItemPainGuageMinus(10);
                break;
            case 4:
                SlowMode(5);
                break;
            case 5:
                ItemFireSkill();
                break;
        }
    }
    void ItemFireUpgrade()
    {
        if (attack_rank < battle_fire_positions.Length)
        {
            battle_fire_positions[attack_rank].gameObject.SetActive(true);
            attack_rank++;

            ParticleSystem particle = Instantiate(fire_upgrade_prefab);
            particle.transform.position = transform.position;
            Destroy(particle.gameObject, 1.5f);
        }
    }

    Coroutine c_invincibility = null;
    public void Invincibility(float time, bool cancel = false)
    {
        if (cancel) StopCoroutine(c_invincibility);
        else
            c_invincibility = StartCoroutine(_Invincibility(time));
    }
    public IEnumerator _Invincibility(float time)
    {
        if (c_invincibility != null) StopCoroutine(c_invincibility);

        invincibility = true;
        shield_renderer.transform.localScale = Vector3.one * 0.5f;
        shield_renderer.gameObject.SetActive(true);

        float check_time = Time.time;
        bool blink = false;

        while (Time.time - check_time < time)
        {
            shield_renderer.transform.localScale = Vector3.MoveTowards(shield_renderer.transform.localScale, Vector3.one * 20, Time.deltaTime * 50);

            shield_renderer.material.mainTextureOffset += new Vector2(Time.deltaTime, 0);

            if (Time.time - check_time >= time - 0.5f && !blink)
            {
                blink = true;
                InvokeRepeating(nameof(Blinking), 0, 0.1f);
            }

            yield return null;
        }

        CancelInvoke("Blinking");
        shield_renderer.gameObject.SetActive(false);
        invincibility = false;
    }
    void Blinking()
    {
        shield_renderer.gameObject.SetActive(!shield_renderer.gameObject.activeSelf);
    }

    public void ItemHpPlus(int plus)
    {
        if (hp + plus > max_hp) hp = max_hp;
        else hp += plus;

        ParticleSystem particle = Instantiate(hp_plus_prefab);
        particle.transform.position = transform.position;
        Destroy(particle.gameObject, 1);
    }
    public void ItemPainGuageMinus(int minus)
    {
        GameManager manager = GameManager.Get();
        if (manager.pain_guage - minus < 0) manager.pain_guage = 0;
        else manager.pain_guage -= minus;
    }

    public void SlowMode(float time)
    {
        if (slow_mode != null)
        {
            StopCoroutine(slow_mode);

            Time.timeScale = 1;
            move_speed = base_status.move_speed;
            bullet_speed = base_status.bullet_speed;
            fire_interval = base_status.fire_interval;
        }
        slow_mode = StartCoroutine(_SlowMode(time / 2));
    }
    struct BaseStatus
    {
        public BaseStatus(float m_speed, float b_speed, float f_interval)
        {
            move_speed = m_speed;
            bullet_speed = b_speed;
            fire_interval = f_interval;
        }

        public float move_speed;
        public float bullet_speed;
        public float fire_interval;
    }
    BaseStatus base_status;
    Coroutine slow_mode = null;
    IEnumerator _SlowMode(float time)
    {
        base_status = new BaseStatus(move_speed, bullet_speed, fire_interval);

        Time.timeScale = 0.5f;
        move_speed *= 2;
        bullet_speed *= 2;
        fire_interval /= 2;

        UIManager.Get().ScreenFading(Color.black, 0, 0.5f, true, 5);

        yield return new WaitForSeconds(time);

        UIManager.Get().ScreenFading(Color.black, 0.5f, 0, true, 1);

        Time.timeScale = 1;
        move_speed = base_status.move_speed;
        bullet_speed = base_status.bullet_speed;
        fire_interval = base_status.fire_interval;
    }

    void ItemFireSkill()
    {
        BulletPool pool = BulletPool.Get();
        Bullet bullet;
        Vector3 direction;
        for (int i = 0; i < 180; i++)
        {
            direction = new Vector3(Mathf.Cos((i - 180) * Mathf.Deg2Rad), 0, Mathf.Sin((i + 1) * Mathf.Deg2Rad));
            bullet = pool.GetBullet(transform.position, BulletType.PLAYER);
            bullet.direction = direction;
            bullet.move_speed = bullet_speed;
            bullet.damage = damage;
        }
    }

    public IEnumerator StartAnimation()
    {
        while (transform.position != Vector3.zero)
        {
            transform.position = Vector3.MoveTowards(transform.position, Vector3.zero, Time.deltaTime * 20);
            target_position = transform.position;
            yield return null;
        }

    }
}
