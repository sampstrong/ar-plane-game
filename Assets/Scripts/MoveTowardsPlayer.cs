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
        transform.Translate(Vector3.forward * Time.deltaTime * -speed);

        if(playerController.powerUpActive)
        {
            speed = 65.0f;
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
}
