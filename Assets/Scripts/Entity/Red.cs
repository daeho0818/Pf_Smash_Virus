using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Red : Entity
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
            GameManager.Get().pain_guage += 5;
            Destroy(gameObject);
        };

        Destroy(gameObject, 3);
    }

    protected override void Update()
    {
        base.Update();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player") && other.TryGetComponent(out Player p))
        {
            OnHit(p.damage);
        }
        else if (other.CompareTag("Bullet") && other.TryGetComponent(out Bullet b))
        {
            if (b.bullet_type == BulletType.PLAYER)
            {
                Destroy(b.gameObject);
                OnHit(b.damage);
            }
        }
    }
}
