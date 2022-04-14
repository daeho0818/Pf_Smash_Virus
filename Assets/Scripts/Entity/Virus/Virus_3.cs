using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Virus_3 : Entity
{
    protected override void Awake()
    {
        base.Awake();
    }
    protected override void Start()
    {
        base.Start();

        onDestroy += () =>
        {
            StartCoroutine(DestroyAnimation());
        };

        StartCoroutine(Fire());
    }

    protected override void Update()
    {
        base.Update();

        if (is_destroy) return;

        transform.position += Vector3.back * move_speed * Time.deltaTime;
    }

    protected override IEnumerator MoveAnimation()
    {
        while (true)
        {
            transform.Rotate(Vector3.left * 100 * Time.deltaTime);
            yield return null;
        }
    }

    IEnumerator Fire()
    {
        var pool = BulletPool.Get();
        int interval = 10;
        Vector3 direction;
        Bullet bullet;

        yield return new WaitForSeconds(2);

        for (int i = 0; i < 360; i += interval)
        {
            direction = new Vector3(Mathf.Cos(i * Mathf.Deg2Rad), 0, Mathf.Sin(i * Mathf.Deg2Rad));

            bullet = pool.GetBullet(transform.position, BulletType.VIRUS);
            bullet.direction = direction;
            bullet.move_speed = bullet_speed;
            bullet.damage = damage;
        }

        check_count = Time.time;
    }

    IEnumerator DestroyAnimation()
    {
        yield return new WaitForSeconds(1f);

        Quaternion target_q = Quaternion.Euler(Random.Range(0, 360), Random.Range(0, 360), Random.Range(0, 360));
        rigid.useGravity = true;

        while (transform.rotation != target_q)
        {
            transform.rotation = Quaternion.RotateTowards(transform.rotation, target_q, Time.deltaTime * 3);
            yield return null;
        }

        Destroy(gameObject);
    }
}
