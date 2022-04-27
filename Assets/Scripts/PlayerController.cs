using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    
    public float horizontalInput;
    public float speed = 10.0f;
    public float xRange = 10.0f;
    public bool gameOver;

    private float rotationSpeed = 250.0f;
    private float yPosition = 5.0f;
    private float maxRotation = 30.0f;
    private float minRotation = -30.0f;
    private float rotationCorrectionSpeed = 4.0f;
    private Transform localTrans;
    private Quaternion baseRotation;
    private Quaternion currentRotation;
    private Quaternion rotationRight = Quaternion.Euler(0, 0, -30);
    private Quaternion rotationLeft = Quaternion.Euler(0, 0, 30);
    
    

    // Start is called before the first frame update
    void Start()
    {
        baseRotation = transform.rotation;

       


        gameOver = false;

        localTrans = GetComponent<Transform>();
        
    }

    // Update is called once per frame
    void Update()
    {
        MovePlayer();
        //LimitPlayerRotation();
        LimitPlayerMovement();

    }

    //Use arrow keys to move the player left and right
    //will need to update to get touch input and use change in x position to use on phone with AR
    void MovePlayer()
    {

        //move player left and right
        horizontalInput = Input.GetAxis("Horizontal");
        transform.Translate(Vector3.right * horizontalInput * Time.deltaTime * speed, Space.World);


        //rotates player based on keyboard input
        //gameObject.transform.Rotate(Vector3.forward * -horizontalInput * Time.deltaTime * rotationSpeed);

        currentRotation = transform.rotation;

        if (Input.GetKey(KeyCode.RightArrow))
        {
            transform.rotation = Quaternion.Slerp(currentRotation, rotationRight, Time.deltaTime * rotationCorrectionSpeed);
        }

        if (Input.GetKey(KeyCode.LeftArrow))
        {
            transform.rotation = Quaternion.Slerp(currentRotation, rotationLeft, Time.deltaTime * rotationCorrectionSpeed);
        }

        //rotates player back when no arrow keys are pressed
        if (!Input.GetKey(KeyCode.LeftArrow) && !Input.GetKey(KeyCode.RightArrow))
        {
            transform.rotation = Quaternion.Slerp(currentRotation, baseRotation, Time.deltaTime * rotationCorrectionSpeed);
        }
           
          

    }


    void LimitPlayerRotation()
    {


        Vector3 playerEulerAngles = localTrans.rotation.eulerAngles;

        playerEulerAngles.z = (playerEulerAngles.z > 180) ? playerEulerAngles.z - 360 : playerEulerAngles.z;
        playerEulerAngles.z = Mathf.Clamp(playerEulerAngles.z, minRotation, maxRotation);

        localTrans.rotation = Quaternion.Euler(playerEulerAngles);

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

        if (transform.position.y != yPosition)
        {
            transform.position = new Vector3(transform.position.x, yPosition, transform.position.z);

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



