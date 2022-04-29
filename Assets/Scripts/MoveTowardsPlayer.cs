using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveTowardsPlayer : MonoBehaviour
{
    public float speed;

    private float zDestroy = -23.0f;
    private PlayerController playerController;
    

    // Start is called before the first frame update
    void Start()
    {
        playerController = GameObject.Find("Player").GetComponent<PlayerController>();

        
    }

    // Update is called once per frame
    void Update()
    {
        Move();

        if(playerController.powerUpActive)
        {
            speed = 55.0f;
        }

        if ( transform.position.z < zDestroy)
        {
            Destroy(gameObject);
        }

        if (playerController.gameOver == true)
        {
            speed = 0;
        }

    }

    public void Move()
    {
        transform.Translate(Vector3.forward * Time.deltaTime * -speed);
    }
}
