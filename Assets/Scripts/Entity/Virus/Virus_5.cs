using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Virus_5 : Entity
{
    protected override void Awake()
    {
        base.Awake();
    }
    protected override void Start()
    {
        base.Start();


        onDestroy += () => Destroy(gameObject);

        GameManager.Get().StartCoroutine(Fire(10));
    }

    float sin = 0;
    protected override void Update()
    {
        base.Update();

        if (is_destroy) return;


    }

    IEnumerator Fire(float size)
    {
        Vector3 position;
        BulletPool pool = BulletPool.Get();
        Bullet bullet;
        Bullet[,] bullets = new Bullet[4, (int)size];

        for (int i = 0; i < 4; i++)
            for (int j = 0; j < size; j++)
            {
                if (i % 2 == 0)
                {
                    bullet = pool.GetBullet(transform.position + new Vector3(0, j - size / 2, 0), BulletType.VIRUS);
                }
                else
                {
                    if (i == 1)
                        bullet = pool.GetBullet(transform.position + new Vector3(0, size / 2, 0), BulletType.VIRUS);
                    else
                        bullet = pool.GetBullet(transform.position + new Vector3(0, -size / 2, 0), BulletType.VIRUS);
                }

                bullet.direction = Vector3.back;
                bullet.damage = damage;
                bullet.move_speed = bullet_speed;

                bullets[i, j] = bullet;
            }

        yield return new WaitForSeconds(3);

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < size; j++)
            {
                switch (i)
                {
                    case 0:
                        bullets[i, j].direction = new Vector3(-1, 0, -1);
                        break;
                    case 1:
                        if (j < size / 2)
                            bullets[i, j].direction = new Vector3(-(j / (size / 2f)), 0, -1);
                        else
                            bullets[i, j].direction = new Vector3((j - size / 2) / (size / 2f), 0, -1);
                        break;
                    case 2:
                        bullets[i, j].direction = new Vector3(1, 0, -1);
                        break;
                    case 3:
                        if (j < size / 2)
                            bullets[i, j].direction = new Vector3(-(j / (size / 2f)), 0, -1);
                        else
                            bullets[i, j].direction = new Vector3((j - size / 2) / (size / 2f), 0, -1);
                        break;
                }
            }
        }
    }


    protected override IEnumerator MoveAnimation()
    {
        while (true)
        {
            sin += 2;
            transform.position += (Vector3.back + Vector3.up * Mathf.Sin(sin * Mathf.Deg2Rad) / 5) * move_speed * Time.deltaTime;
            yield return null;
        }
    }
}
