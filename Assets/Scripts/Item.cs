using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item : MonoBehaviour
{
    private void Update()
    {
        transform.Translate(Vector3.back * 30 * Time.deltaTime);
    }
    private void OnTriggerEnter(Collider other)
    {
    }
}
