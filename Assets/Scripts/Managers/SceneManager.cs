using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnitySceneManager = UnityEngine.SceneManagement.SceneManager;

public class SceneManager : MonoBehaviour
{
    static SceneManager instance { get; set; }

    GameManager manager;
    Player player;
    private void Awake()
    {
        instance = this;
    }

    public static SceneManager Get()
    {
        if (!instance)
            Debug.Assert(false);

        return instance;
    }
    private void Start()
    {
        UIManager.Get().ScreenFading(Color.black, 1, 0);

        if (UnitySceneManager.GetActiveScene().name.Contains("Ingame"))
            manager = GameManager.Get();

        player = FindObjectOfType<Player>();
    }
    public void ChangeScene(string scene_name)
    {
        UIManager.Get().ScreenFading(Color.black, 0, 1, false, 1, false, () => { UnitySceneManager.LoadScene(scene_name); });
    }

    bool invincibility = false;
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha1))
            ChangeScene("Ingame 1");
        else if (Input.GetKeyDown(KeyCode.Alpha2))
            ChangeScene("Ingame 2");
        else if (Input.GetKeyDown(KeyCode.Alpha3))
        {
            player.GetItem(0);
        }
        else if (Input.GetKeyDown(KeyCode.Alpha4))
        {
            player.Invincibility(9999, invincibility);
            invincibility = !invincibility;
        }
        else if (Input.GetKeyDown(KeyCode.Alpha5))
        {
            var entities = FindObjectsOfType<Entity>();
            foreach (var entity in entities)
            {
                entity.hp = 0;
            }
        }
        else if (Input.GetKeyDown(KeyCode.Alpha6))
        {
            player.OnHit(1);
        }
        else if (Input.GetKeyDown(KeyCode.Alpha7))
        {
            player.OnHit(-1);
        }
        else if (Input.GetKeyDown(KeyCode.Alpha8))
        {
            manager.SpawnWhite();
        }
        else if (Input.GetKeyDown(KeyCode.Alpha9))
        {
            manager.SpawnRed();
        }
    }
}
