using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Virus_1 : Entity
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

            Rigidbody[] rigids = GetComponentsInChildren<Rigidbody>();
            foreach (var rigid in rigids)
            {
                rigid.useGravity = true;
                rigid.AddForce(new Vector3(Random.Range(-0.5f, 0.5f), Random.Range(-1.5f, 1.5f), Random.Range(-0.5f, 0.5f)) * 15, ForceMode.Impulse);
            }

            StartCoroutine(DestroyAnimation());
        };
    }

    protected override void Update()
    {
        base.Update();

        if (is_destroy) return;

        transform.position += (Vector3.back * move_speed * Time.deltaTime);
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
