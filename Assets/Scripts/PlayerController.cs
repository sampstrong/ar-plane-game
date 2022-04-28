using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{

    public bool gameOver;
    public bool powerUpActive;

    public Material baseMaterial;
    public Material glowMaterial;

    private float horizontalInput;
    private float horizontalSpeed = 20.0f;
    private float xRange = 10.0f;

    private float yPosition = 5.0f;
    private float rotationSpeed = 7.0f;
    
    private Quaternion baseRotation;
    private Quaternion currentRotation;
    private Quaternion rotationRight = Quaternion.Euler(0, 0, -30);
    private Quaternion rotationLeft = Quaternion.Euler(0, 0, 30);

    private Canvas gameOverScreen;
    private Canvas scoreAndTime;

    private SphereCollider powerUpCollider;
    private GameManager gameManager;
    private GameObject forceField;
    private MeshRenderer planeMeshRenderer;
    private MeshRenderer missile01MeshRenderer;
    private MeshRenderer missile02MeshRenderer;
    private MeshRenderer missile03MeshRenderer;
    private MeshRenderer missile04MeshRenderer;
    private MeshRenderer wheel01MeshRenderer;
    private MeshRenderer wheel02MeshRenderer;
    private MeshRenderer wheel03MeshRenderer;

    private SpawnManager spawnManager;



    // Start is called before the first frame update
    void Start()
    {
        baseRotation = transform.rotation;

        gameOver = false;
        powerUpActive = false;

        powerUpCollider = GetComponent<SphereCollider>();
        powerUpCollider.enabled = false;

        gameOverScreen = GameObject.Find("Game Over Canvas").GetComponent<Canvas>();
        gameOverScreen.enabled = false;

        scoreAndTime = GameObject.Find("Score and Time Canvas").GetComponent<Canvas>();
        scoreAndTime.enabled = true;

        gameManager = GameObject.Find("Game Manager").GetComponent<GameManager>();

        

        forceField = GameObject.Find("Force Field");
        forceField.SetActive(false);

        planeMeshRenderer = GameObject.Find("Plane").GetComponent<MeshRenderer>();
        planeMeshRenderer.material = baseMaterial;

        missile01MeshRenderer = GameObject.Find("missile01").GetComponent<MeshRenderer>();
        missile02MeshRenderer = GameObject.Find("missile02").GetComponent<MeshRenderer>();
        missile03MeshRenderer = GameObject.Find("missile03").GetComponent<MeshRenderer>();
        missile04MeshRenderer = GameObject.Find("missile04").GetComponent<MeshRenderer>();
        wheel01MeshRenderer = GameObject.Find("wheel01").GetComponent<MeshRenderer>();
        wheel02MeshRenderer = GameObject.Find("wheel02").GetComponent<MeshRenderer>();
        wheel03MeshRenderer = GameObject.Find("wheel03").GetComponent<MeshRenderer>();

        spawnManager = GameObject.Find("SpawnManager").GetComponent<SpawnManager>();



    }

    // Update is called once per frame
    void Update()
    {
        MovePlayer();
        RotatePlayer();
        EnableForceField();
     
    }

    //Use arrow keys to move the player left and right
    //will need to update to get touch input and use change in x position to use on phone with AR
    void MovePlayer()
    {
        if (!gameOver)
        {
            //move player left and right
            horizontalInput = Input.GetAxis("Horizontal");
            transform.Translate(Vector3.right * horizontalInput * Time.deltaTime * horizontalSpeed, Space.World);

            //limits player movement on x and y axes
            transform.position = new Vector3(Mathf.Clamp(transform.position.x, -xRange, xRange), yPosition, transform.position.z);
        }
        
    }


   private void RotatePlayer()
    {

        if (!gameOver)
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
        
    }


    

    //Destroy Gameobjects depending on what reuns into what
    //end game if player runs into enemy
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Goal"))
        {
            Destroy(other.gameObject);
            gameManager.UpdateScore();
        }

        if (other.gameObject.CompareTag("PowerUp"))
        {
            Destroy(other.gameObject);
            
            powerUpActive = true;
            StartCoroutine(PowerUpCountdownRoutine());
            spawnManager.IncreaseSpawnRate();
        }

        if (other.gameObject.CompareTag("Enemy"))
        {
            if(!powerUpActive)
            {
                Destroy(gameObject);
                EndGame();
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
        spawnManager.DecreaseSpawnRate();
 
    }

    private void EnableForceField()
    {
        forceField.transform.position = gameObject.transform.position;

        missile01MeshRenderer.material = planeMeshRenderer.material;
        missile02MeshRenderer.material = planeMeshRenderer.material;
        missile03MeshRenderer.material = planeMeshRenderer.material;
        missile04MeshRenderer.material = planeMeshRenderer.material;
        wheel01MeshRenderer.material = planeMeshRenderer.material;
        wheel02MeshRenderer.material = planeMeshRenderer.material;
        wheel03MeshRenderer.material = planeMeshRenderer.material;

        if (powerUpActive)
        {
            powerUpCollider.enabled = true;
            forceField.SetActive(true);
            planeMeshRenderer.material = glowMaterial;
        }
        else
        {
            powerUpCollider.enabled = false;
            forceField.SetActive(false);
            planeMeshRenderer.material = baseMaterial;
            
        }
    }


    public void EndGame()
    {
        gameOver = true;
        gameOverScreen.enabled = true;
        scoreAndTime.enabled = false;
    }

}



