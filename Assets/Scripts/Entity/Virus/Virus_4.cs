using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Virus_4 : Entity
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
            collider.enabled = false;
            StopCoroutine(fire);

            Rigidbody[] rigids = GetComponentsInChildren<Rigidbody>();
            foreach (var rigid in rigids)
            {
                rigid.useGravity = true;
                rigid.AddForce(new Vector3(Random.Range(-0.5f, 0.5f), Random.Range(-1.5f, 1.5f), Random.Range(-0.5f, 0.5f)) * 15, ForceMode.Impulse);
            }

            StartCoroutine(DestroyAnimation());
        };

        fire = StartCoroutine(Fire());
    }

    protected override void Update()
    {
        base.Update();

        if (is_destroy) return;

        transform.position += Vector3.back * move_speed * Time.deltaTime;
    }

    Coroutine fire = null;
    IEnumerator Fire()
    {
        var directions = new Vector3[8] { new Vector3(1, 0, 1), new Vector3(1, 0, -1), new Vector3(-1, 0, 1), new Vector3(-1, 0, -1),
                                          new Vector3(1, 0, 0), new Vector3(-1, 0, 0), new Vector3(0, 0, 1), new Vector3(0, 0, -1)};
        BulletPool pool = BulletPool.Get();
        Bullet bullet;

        while (true)
        {
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < directions.Length / 2; j++)
                {
                    bullet = pool.GetBullet(transform.position, BulletType.VIRUS);
                    bullet.direction = directions[j + i * 4];
                    bullet.move_speed = bullet_speed;
                    bullet.damage = damage;
                }

                yield return new WaitForSeconds(fire_interval);
            }

        }
    }


    IEnumerator DestroyAnimation()
    {
        yield return new WaitForSeconds(1);
        Transform tr;

        while (transform.childCount > 0)
        {
            for (int i = 0; i < transform.childCount; i++)
            {
                tr = transform.GetChild(i);
                tr.localScale = Vector3.MoveTowards(tr.localScale, Vector3.zero, Time.deltaTime * 5);
            }

            yield return null;
        }

        Destroy(gameObject);
    }
}
