using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public float horizontalInput;
    public float speed = 10.0f;
    public float xRange = 10.0f;
    public bool gameOver;

    private float rotateSpeed = 10.0f;

    

    // Start is called before the first frame update
    void Start()
    {
        gameOver = false;
        
    }

    // Update is called once per frame
    void Update()
    {
        MovePlayer();
        LimitPlayerMovement();

    }

    //Use arrow keys to move the player left and right
    //will need to update to get touch input and use change in x position to use on phone with AR
    void MovePlayer()
    {
        horizontalInput = Input.GetAxis("Horizontal");
        transform.Translate(Vector3.right * horizontalInput * Time.deltaTime * speed);

        if(Input.GetKeyDown(KeyCode.RightArrow))
        {
            gameObject.transform.Rotate(Vector3.forward * horizontalInput * Time.deltaTime * rotateSpeed);
        }
    }


    //Limit player movement along x-axis to prevent from moving too far left or right
    void LimitPlayerMovement()
    {
        if (transform.position.x < -xRange)
        {
            transform.position = new Vector3(-xRange, transform.position.y, transform.position.z);
        }

        if (transform.position.x > xRange)
        {
            transform.position = new Vector3(xRange, transform.position.y, transform.position.z);
        }
    }

    //Destroy Gameobjects depending on what reuns into what
    //end game if player runs into enemy
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Goal"))
        {
            Destroy(other.gameObject);
        }

        if (other.gameObject.CompareTag("PowerUp"))
        {
            Destroy(other.gameObject);
        }

        if (other.gameObject.CompareTag("Enemy"))
        {
            Destroy(gameObject);
            gameOver = true;
        }

    }

}



