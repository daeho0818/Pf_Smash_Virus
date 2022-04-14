using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class White : Entity
{
    public Player player;
    public int move_index;
    public bool move_left;

    GameManager manager;
    Vector3 target_position;
    protected override void Awake()
    {
        base.Awake();
    }
    protected override void Start()
    {
        base.Start();

        move_left = move_index > 0;
        manager = GameManager.Get();

        onDestroy += () =>
        {
            manager.Createitem(transform.position);
            Destroy(gameObject);
        };
    }

    protected override void Update()
    {
        base.Update();

        if (!player) return;

        if (player.transform.position.x == transform.position.x)
        {
            if (move_left)
                move_index--;
            else
                move_index++;

            if (move_index == 0) move_left = false;
            else if (move_index == 4) move_left = true;
        }

        target_position = transform.position;
        target_position.x = manager.spawn_points[move_index].position.x;

        if (transform.position.x != target_position.x)
        {
            transform.position = Vector3.MoveTowards(transform.position, target_position, Time.deltaTime * 50);
        }
        else
        {
            transform.Translate(Vector3.back * move_speed * Time.deltaTime);
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Bullet") && other.TryGetComponent(out Bullet b))
        {
            if (b.bullet_type == BulletType.PLAYER)
            {
                OnHit(b.damage);
            }
        }
        else if (other.CompareTag("Player") && other.TryGetComponent(out Player p))
        {
            OnHit(p.damage);
        }
    }
}
