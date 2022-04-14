using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraManager : MonoBehaviour
{
    private static CameraManager instance { get; set; } = null;

    private new Camera camera;
    [SerializeField] Camera camera_1;
    [SerializeField] Camera camera_2;

    private void Awake()
    {
        instance = this;
    }
    public static CameraManager Get()
    {
        if (!instance)
            Debug.Assert(false);

        return instance;
    }

    private void Start()
    {
        camera = camera_1;
    }
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.V))
        {
            ChangeCameraView();
        }
    }
    public void ChangeCameraView()
    {
        camera.rect = new Rect(0.7f, 0.7f, 0.3f, 0.3f);
        camera.depth = 1;

        if (camera == camera_1) camera = camera_2;
        else camera = camera_1;

        camera.rect = new Rect(0, 0, 1f, 1f);
        camera.depth = -1;
    }

    public void SetTarget(Transform transform)
    {
        if (camera == camera_1)
            camera.transform.LookAt(transform);
    }

    Camera shake_camera;
    Coroutine camera_shake = null;
    Vector3 base_camera_position;
    public void CameraShake(float power, float time)
    {
        if (camera_shake != null)
        {
            shake_camera.transform.position = base_camera_position;
            StopCoroutine(camera_shake);
        }
        camera_shake = StartCoroutine(_CameraShake(power, time));
    }
    IEnumerator _CameraShake(float power, float time)
    {
        shake_camera = camera == camera_1 ? camera_1 : camera_2;

        base_camera_position = shake_camera.transform.position;

        Vector3 random_force;

        while (time > 0)
        {
            time -= Time.deltaTime;

            random_force = new Vector3(Random.Range(-1f, 1f) * power, Random.Range(-1f, 1f) * power, Random.Range(-1f, 1f) * power);
            shake_camera.transform.position += random_force;

            yield return null;

            shake_camera.transform.position -= random_force;
        }
    }
}
