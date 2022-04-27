using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    
    private float horizontalInput;
    private float horizontalSpeed = 20.0f;
    private float xRange = 10.0f;
    public bool gameOver;
    public bool powerUpActive;
    

    
    private float yPosition = 5.0f;
    
    private float rotationSpeed = 7.0f;
    
    private Quaternion baseRotation;
    private Quaternion currentRotation;
    private Quaternion rotationRight = Quaternion.Euler(0, 0, -30);
    private Quaternion rotationLeft = Quaternion.Euler(0, 0, 30);

    private BoxCollider powerUpCollider;
    
    
    

    // Start is called before the first frame update
    void Start()
    {
        baseRotation = transform.rotation;

        gameOver = false;
        powerUpActive = false;

        powerUpCollider = GetComponent<BoxCollider>();
        
    }

    // Update is called once per frame
    void Update()
    {
        MovePlayer();
        RotatePlayer();
        

    }

    //Use arrow keys to move the player left and right
    //will need to update to get touch input and use change in x position to use on phone with AR
    void MovePlayer()
    {

        //move player left and right
        horizontalInput = Input.GetAxis("Horizontal");
        transform.Translate(Vector3.right * horizontalInput * Time.deltaTime * horizontalSpeed, Space.World);


        //limits player movement on x and y axes
        transform.position = new Vector3(Mathf.Clamp(transform.position.x, -xRange, xRange), yPosition, transform.position.z);

    }


   private void RotatePlayer()
    {
        //sets current rotation
        currentRotation = transform.rotation;


        //smooth transition between base position and rotated right
        if (Input.GetKey(KeyCode.RightArrow))
        {
            transform.rotation = Quaternion.Slerp(currentRotation, rotationRight, Time.deltaTime * rotationSpeed);
        }


        //smooth transition between base position and rotated left
        if (Input.GetKey(KeyCode.LeftArrow))
        {
            transform.rotation = Quaternion.Slerp(currentRotation, rotationLeft, Time.deltaTime * rotationSpeed);
        }

        //rotates player back when no arrow keys are pressed
        if (!Input.GetKey(KeyCode.LeftArrow) && !Input.GetKey(KeyCode.RightArrow))
        {
            transform.rotation = Quaternion.Slerp(currentRotation, baseRotation, Time.deltaTime * rotationSpeed);
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
            powerUpCollider.enabled = true;
            powerUpActive = true;
            StartCoroutine(PowerUpCountdownRoutine());
            
        }

        if (other.gameObject.CompareTag("Enemy"))
        {
            if(!powerUpActive)
            {
                Destroy(gameObject);
                gameOver = true;
            }
            else
            {
                Destroy(other.gameObject);

            }
            
        }

    }


    //Coroutine timer for how long powerup remains active
    IEnumerator PowerUpCountdownRoutine()
    {
        yield return new WaitForSeconds(4);
        powerUpActive = false;
        powerUpCollider.enabled = false;


    }

}



