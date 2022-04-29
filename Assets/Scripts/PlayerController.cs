using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour
{

    public bool gameOver;
    public bool powerUpActive;

    public Material baseMaterial;
    public Material glowMaterial;

    public ParticleSystem goalParticles;
    public ParticleSystem enemyParticles;
    public ParticleSystem powerUpParticles;
    public ParticleSystem timeBoostParticles;

    public GameObject boostParticle;

    public GameObject slowParticles;
    public GameObject fastParticles;

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

        slowParticles.SetActive(true);

    }

    // Update is called once per frame
    void Update()
    {
        MovePlayer();
        RotatePlayer();
        UpdateForceFieldLocation();
     
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


    

    //Destroy Gameobjects depending on what runs into what
    //end game if player runs into enemy
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Goal"))
        {

            Instantiate(goalParticles, other.transform.position, Quaternion.identity);
            //goalParticles.transform.position = other.transform.position;
            Destroy(other.gameObject);
            goalParticles.Play();
            gameManager.UpdateScore();
        }

        if (other.gameObject.CompareTag("PowerUp"))
        {
            Destroy(other.gameObject);
            Instantiate(powerUpParticles, other.transform.position, Quaternion.identity);
            powerUpParticles.Play();
            
            powerUpActive = true;
            spawnManager.IncreaseSpawnRate();
            EnableForceField();
            EnablePowerUpParticles();

            StartCoroutine(PowerUpCountdownRoutine());
            StartCoroutine(PowerUpFlashOff1());
            
            
        }

        if(other.gameObject.CompareTag("TimeBoost"))
        {
            Destroy(other.gameObject);
            Instantiate(timeBoostParticles, other.transform.position, Quaternion.identity);
            timeBoostParticles.Play();


            gameManager.AddTime();
        }

        if (other.gameObject.CompareTag("Enemy"))
        {
            Instantiate(enemyParticles, other.transform.position, Quaternion.identity);

            if (!powerUpActive)
            {
                Destroy(gameObject);
                Destroy(other.gameObject);
                EndGame();
            }
            else
            {
                //enemyParticles.transform.position = other.transform.position;
                Destroy(other.gameObject);
            }

            enemyParticles.Play();

        }

    }


    //Coroutine timer for how long powerup remains active
    IEnumerator PowerUpCountdownRoutine()
    {
        yield return new WaitForSeconds(5);
        powerUpActive = false;
        spawnManager.DecreaseSpawnRate();
        DisableForceField();
        DisablePowerUpParticles();

    }


    //Coroutines for creating flashing effect when forcefield is about to expire
    IEnumerator PowerUpFlashOff1()
    {
        yield return new WaitForSeconds(3.5f);
        DisableForceField();
        StartCoroutine(PowerUpFlashOn2());

    }

    IEnumerator PowerUpFlashOn2()
    {
        yield return new WaitForSeconds(0.25f);
        EnableForceField();
        StartCoroutine(PowerUpFlashOff3());
    }

    IEnumerator PowerUpFlashOff3()
    {
        yield return new WaitForSeconds(0.25f);
        DisableForceField();
        StartCoroutine(PowerUpFlashOn4());
;
    }

    IEnumerator PowerUpFlashOn4()
    {
        yield return new WaitForSeconds(0.25f);
        EnableForceField();
        StartCoroutine(PowerUpFlashOff5());

    }

    IEnumerator PowerUpFlashOff5()
    {
        yield return new WaitForSeconds(0.25f);
        DisableForceField();
        StartCoroutine(PowerUpFlashOn6());
        ;
    }

    IEnumerator PowerUpFlashOn6()
    {
        yield return new WaitForSeconds(0.25f);
        EnableForceField();
      
    }


    //Methods controlling force field behavior when a power up is enabled
    private void AssignAllPlaneMaterials()
    {
        missile01MeshRenderer.material = planeMeshRenderer.material;
        missile02MeshRenderer.material = planeMeshRenderer.material;
        missile03MeshRenderer.material = planeMeshRenderer.material;
        missile04MeshRenderer.material = planeMeshRenderer.material;
        wheel01MeshRenderer.material = planeMeshRenderer.material;
        wheel02MeshRenderer.material = planeMeshRenderer.material;
        wheel03MeshRenderer.material = planeMeshRenderer.material;
    }

    private void EnableForceField()
    {

        powerUpCollider.enabled = true;
        forceField.SetActive(true);
        planeMeshRenderer.material = glowMaterial;

        AssignAllPlaneMaterials();
    }

    private void DisableForceField()
    {
        powerUpCollider.enabled = false;
        forceField.SetActive(false);
        planeMeshRenderer.material = baseMaterial;

        AssignAllPlaneMaterials();
    }

    private void UpdateForceFieldLocation()
    {
        forceField.transform.position = gameObject.transform.position;
    }

    private void EnablePowerUpParticles()
    {
        slowParticles.SetActive(false);
        fastParticles.SetActive(true);
        //boostParticle.SetActive(true);
    }

    private void DisablePowerUpParticles()
    {
        fastParticles.SetActive(false);
        slowParticles.SetActive(true);
        //boostParticle.SetActive(false);
    }


    //setting booleans to control game behavior when game is over
    public void EndGame()
    {
        gameOver = true;

        if (SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Main Scene"))
        {
            gameOverScreen.enabled = true;
        }
    

        if(scoreAndTime.enabled == true)
        {
            scoreAndTime.enabled = false;
        }
        

        if(powerUpActive)
        {
            DisableForceField();
        }

        if (slowParticles.activeInHierarchy == true)
        {
            slowParticles.GetComponent<ParticleSystem>().Pause();
        }

        if(fastParticles.activeInHierarchy == true)
        {
            fastParticles.GetComponent<ParticleSystem>().Pause();
        }
        
    }

}



