using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public enum EntityType
{
    PLAYER,
    VIRUS,
    ELSE
}

public abstract class Entity : MonoBehaviour
{
    [Header("Entity Information")]
    [SerializeField] int score;
    public EntityType entity_type;
    public float max_hp;
    public float hp;
    public float move_speed;
    public float damage;
    public bool invincibility;
    public bool move_animation = true;
    public bool is_destroy = false;
    protected float check_count = 0;
    public event Action onHit = null;
    public event Action onDestroy = null;

    [Header("Fire Information")]
    public float bullet_speed;
    public float fire_interval;

    protected Rigidbody rigid;
    protected Collider collider;
    protected Renderer renderer;
    protected Animator anim;

    protected virtual void Awake()
    {

    }

    protected virtual void Start()
    {
        rigid = GetComponent<Rigidbody>();
        collider = GetComponent<Collider>();
        renderer = GetComponent<Renderer>();
        anim = GetComponent<Animator>();

        onDestroy += () =>
        {
            if (move_anim != null) StopCoroutine(move_anim);

            GameManager manager = GameManager.Get();
            manager.CreateExplosion(transform.position);
            manager.PlusScore(score);
        };

        if (move_animation)
            move_anim = StartCoroutine(MoveAnimation());
    }

    protected virtual void Update()
    {
        if (hp <= 0 && !is_destroy)
        {
            onDestroy?.Invoke();
            is_destroy = true;
        }
    }

    public Rigidbody Rigid() => rigid;

    protected void BaseFire(Vector3 position, Action<Bullet> onFire = null)
    {
        if (Time.time - check_count >= fire_interval)
        {
            Bullet bullet =
                BulletPool.Get().GetBullet(position, entity_type == EntityType.PLAYER ? BulletType.PLAYER : BulletType.VIRUS);

            bullet.direction = entity_type == EntityType.PLAYER ? Vector3.forward : Vector3.back;
            bullet.move_speed = bullet_speed;
            bullet.damage = damage;

            check_count = Time.time;

            onFire?.Invoke(bullet);
        }
    }

    public void OnHit(float damage)
    {
        hp -= damage;
        if (damage > 0)
            onHit?.Invoke();
        else
            ((Player)this).ts_controller.OnValueChanged("HP : ", hp, "", TextSliderController.OutPutCase.VALUE);
    }

    Coroutine move_anim = null;
    protected virtual IEnumerator MoveAnimation()
    {
        while (true)
        {
            while (transform.rotation != Quaternion.Euler(0, 30, 0))
            {
                transform.rotation = Quaternion.RotateTowards(transform.rotation, Quaternion.Euler(0, 30, 0), Time.deltaTime * 100);
                yield return null;
            }

            while (transform.rotation != Quaternion.Euler(0, -30, 0))
            {
                transform.rotation = Quaternion.RotateTowards(transform.rotation, Quaternion.Euler(0, -30, 0), Time.deltaTime * 100);
                yield return null;
            }
        }
    }

    public virtual IEnumerator SpawnAnimation()
    {
        yield return null;
    }

    protected void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Virus") && other.TryGetComponent(out Entity v))
        {
            if (entity_type == EntityType.PLAYER && v.entity_type == EntityType.VIRUS)
            {
                if (!invincibility)
                    OnHit(v.damage / 2);

                Destroy(v.gameObject);
            }
        }

        else if (other.CompareTag("Bullet") && other.TryGetComponent(out Bullet b))
        {
            if ((entity_type == EntityType.PLAYER && b.bullet_type == BulletType.VIRUS) ||
                (entity_type == EntityType.VIRUS && b.bullet_type == BulletType.PLAYER))
            {
                if (!invincibility)
                    OnHit(b.damage);

                GameManager.Get().CreateExplosion(b.transform.position, 0.2f);
                Destroy(b.gameObject);
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Stage Range"))
        {
            if (move_anim != null)
                StopCoroutine(move_anim);

            GameManager.Get().pain_guage += damage / 2;
            Destroy(gameObject);
        }
    }
}
