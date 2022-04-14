using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum BulletType
{
    PLAYER,
    VIRUS
}
public class Bullet : MonoBehaviour
{
    public BulletType bullet_type;
    public Vector3 direction;
    public float move_speed;
    public float damage;
    [SerializeField] Vector3 base_scale;

    protected Bullet child;
    void OnEnable()
    {
        transform.localScale = base_scale;
    }

    void Update()
    {
        if (child)
        {
            child.BUpdate();
            return;
        }

        transform.Translate(move_speed * direction * Time.deltaTime);
    }

    protected virtual void BUpdate() { }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Stage Range"))
        {
            BulletPool.Get().ReturnBullet(this);
        }
    }
}
