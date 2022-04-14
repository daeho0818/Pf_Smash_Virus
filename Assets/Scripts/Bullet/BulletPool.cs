using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletPool : MonoBehaviour
{
    private static BulletPool instance { get; set; }
    private Queue<Bullet> bullet_pool = new Queue<Bullet>();

    [SerializeField] Bullet bullet_prefab;

    [SerializeField] Material player_bullet_mat;
    [SerializeField] Material virus_bullet_mat;

    private void Awake()
    {
        instance = this;
    }
    public static BulletPool Get()
    {
        if (!instance)
            Debug.Assert(false);

        return instance;
    }

    private void Start()
    {
    }

    public Bullet GetBullet(Vector3 position, BulletType bullet_type)
    {
        Bullet bullet = null;
        if (bullet_pool.Count > 0)
        {
            bullet = bullet_pool.Dequeue();
            bullet.gameObject.SetActive(true);
        }
        else
        {
            bullet = Instantiate(bullet_prefab);
            bullet.transform.parent = transform;
        }

        bullet.transform.position = position;
        bullet.bullet_type = bullet_type;

        bullet.GetComponent<Renderer>().material = bullet_type == BulletType.PLAYER ? player_bullet_mat : virus_bullet_mat;

        return bullet;
    }

    public void ReturnBullet(Bullet bullet)
    {
        bullet.gameObject.SetActive(false);
        bullet_pool.Enqueue(bullet);
    }
}
