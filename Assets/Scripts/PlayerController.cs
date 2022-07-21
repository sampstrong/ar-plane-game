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
    private Quaternion rotationRight;
    private Quaternion rotationLeft;


    private Transform _gamePlacement;
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

    private AudioSource quietAudioPlayer;
    private AudioSource loudAudioPlayer;
    public AudioClip goalSound;
    public AudioClip pickupSound;
    public AudioClip explosionSound;
    public AudioClip boostSound;
    
    private bool leftInput = false;
    private bool rightInput = false;
    private bool touchUsed = false;
    private bool arrowsUsed = false;
    


    // Start is called before the first frame update
    void Start()
    {
        //initialize player rotations based on world position
        baseRotation = transform.rotation;
        rotationRight = Quaternion.Euler(transform.eulerAngles.x, transform.eulerAngles.y, -30);
        rotationLeft = Quaternion.Euler(transform.eulerAngles.x, transform.eulerAngles.y, 30);

        //initialize game over as false to start game
        gameOver = true;

        //initialize power up state
        powerUpActive = false;

        //get power up components and set them to not be active at game start
        _gamePlacement = FindObjectOfType<ARCustomPlacement>().placedObject.transform;
        powerUpCollider = GetComponent<SphereCollider>();
        powerUpCollider.enabled = false;
        forceField = GameObject.Find("Force Field");
        forceField.SetActive(false);

        //get plane materials for use in changing them when power up is active
        planeMeshRenderer = GameObject.Find("Plane").GetComponent<MeshRenderer>();
        planeMeshRenderer.material = baseMaterial;

        missile01MeshRenderer = GameObject.Find("missile01").GetComponent<MeshRenderer>();
        missile02MeshRenderer = GameObject.Find("missile02").GetComponent<MeshRenderer>();
        missile03MeshRenderer = GameObject.Find("missile03").GetComponent<MeshRenderer>();
        missile04MeshRenderer = GameObject.Find("missile04").GetComponent<MeshRenderer>();
        wheel01MeshRenderer = GameObject.Find("wheel01").GetComponent<MeshRenderer>();
        wheel02MeshRenderer = GameObject.Find("wheel02").GetComponent<MeshRenderer>();
        wheel03MeshRenderer = GameObject.Find("wheel03").GetComponent<MeshRenderer>();

        //initialize star particles to be at the normal, slower speed
        slowParticles.SetActive(true);

        //get components for sound FX players
        quietAudioPlayer = GameObject.Find("Quiet Sound FX Player").GetComponent<AudioSource>();
        loudAudioPlayer = GameObject.Find("Loud Sound FX Player").GetComponent<AudioSource>();

        //get game manager script as reference
        gameManager = GameObject.Find("Game Manager").GetComponent<GameManager>();

        //get spawn manager as reference
        spawnManager = GameObject.Find("SpawnManager").GetComponent<SpawnManager>();

        
        if (SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Main Scene Mobile AR"))
        {
            horizontalSpeed *= gameManager.mobileMultiplier;
        }
        
        // Unity Event Subscriptions
        gameManager.onStartGame.AddListener(StartGame);
        
    }

    private void StartGame()
    {
        gameOver = false;
    }

    //update player movement  & location
    //update force field location to be the same as player
    void Update()
    {
        MovePlayer();
        RotatePlayer();
        UpdateForceFieldLocation();
        Debug.Log($"Game Over: {gameOver}");
    }

    //Use arrow keys to move the player left and right
    //will need to update to get touch input and use change in x position to use on phone with AR
    void MovePlayer()
    {
        horizontalInput = Input.GetAxis("Horizontal");
        float currentHorizontalInput = horizontalInput;
        float horizontalInputMultiplier = 37.5f;
        
        if (!gameOver)
        {
            if (SystemInfo.deviceType == DeviceType.Handheld) //mobile input system used
            {
                if (Input.touchCount > 0) 
                {
                    touchUsed = true;
                    Touch touch = Input.GetTouch(0);

                    float posXFromCenter = (touch.position.x - 540) / 540;

                    float horizontalInput;

                    if (posXFromCenter > 0.1f)
                    {
                        horizontalInput = Mathf.Lerp(currentHorizontalInput, 1, Time.deltaTime * horizontalInputMultiplier);
                        rightInput = true;
                        leftInput = false;
                    }
                    else if (posXFromCenter < -0.1f)
                    {
                        horizontalInput = Mathf.Lerp(currentHorizontalInput, -1, Time.deltaTime * horizontalInputMultiplier);
                        leftInput = true;
                        rightInput = false;
                    }
                    else
                    {
                        horizontalInput = 0;
                        rightInput = false;
                        leftInput = false;
                    }
                
                    //move player left and right based on touch input from center of screen
                    transform.Translate(transform.right * horizontalInput * Time.deltaTime * horizontalSpeed, Space.World);
                
                    //limits player movement on x and y axes
                    transform.localPosition = new Vector3(Mathf.Clamp(transform.localPosition.x, -xRange, xRange), yPosition, transform.localPosition.z);
                
                }
            }
            
            
            else //desktop input system used
            {
                if (Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.LeftArrow))
                {
                    arrowsUsed = true;
                }
                
                
                //move player left and right
                
                transform.Translate(transform.right * horizontalInput * Time.deltaTime * horizontalSpeed, Space.World);

                //limits player movement on x and y axes
                transform.localPosition = new Vector3(Mathf.Clamp(transform.localPosition.x, -xRange, xRange), yPosition, transform.localPosition.z);
            }
            
        }
    }

    //bank player rotation based on arrow input
    private void RotatePlayer()
    {
        
        
        if (!gameOver)
        {
            //sets current rotation
            currentRotation = transform.rotation;

            //smooth transition between current rotation and right side rotation angle
            if (Input.GetKey(KeyCode.RightArrow) || rightInput)
            {
                transform.rotation = Quaternion.Slerp(currentRotation, rotationRight, Time.deltaTime * rotationSpeed);
            }

            //smooth transition between current rotation and left side rotation angle
            if (Input.GetKey(KeyCode.LeftArrow) || leftInput)
            {
                transform.rotation = Quaternion.Slerp(currentRotation, rotationLeft, Time.deltaTime * rotationSpeed);
            }

            //rotates player back to flat when no arrow keys are pressed
            if (arrowsUsed && (!Input.GetKey(KeyCode.LeftArrow) && !Input.GetKey(KeyCode.RightArrow)) || (touchUsed && Input.touchCount < 1))
            {
                transform.rotation = Quaternion.Slerp(currentRotation, baseRotation, Time.deltaTime * rotationSpeed);
            }
        }
        
    }

    //Sets interactions when player collides with different game objects
    private void OnTriggerEnter(Collider other)
    {
        /* When the player collides with a goal:
         * - the goal game object is detroyed
         * - particles are instantiated at the location of the goal and played
         * - the goal sound oneshot is played
         * - the score is updated in the game manager
         */
        if (other.gameObject.CompareTag("Goal"))
        {
            ParticleSystem particles = Instantiate(goalParticles, other.transform.position, Quaternion.identity);
            particles.transform.parent = _gamePlacement;
            
            Destroy(other.gameObject);
            goalParticles.Play();
            gameManager.UpdateScore();

            quietAudioPlayer.PlayOneShot(goalSound);
        }

        /* When the player collides with a powerup:
         * - the powerup game object is detroyed
         * - particles are instantiated at the location of the powerup and played
         * - the pickup and boost oneshots are played
         * - power up is activated and a coroutine is started to control it's behavior
         */
        if (other.gameObject.CompareTag("PowerUp"))
        {
            Destroy(other.gameObject);
            ParticleSystem particles = Instantiate(powerUpParticles, other.transform.position, Quaternion.identity);
            particles.transform.parent = _gamePlacement;
            powerUpParticles.Play();
            
            powerUpActive = true;
            spawnManager.IncreaseSpawnRate();
            EnableForceField();
            EnablePowerUpParticles();

            StartCoroutine(PowerUpCountdownRoutine());
            StartCoroutine(PowerUpFlashOff1());

            quietAudioPlayer.PlayOneShot(pickupSound);
            loudAudioPlayer.PlayOneShot(boostSound);
        }

        /* When the player collides with a time boost:
         * - the time boost game object is detroyed
         * - particles are instantiated at the location of the time boost and played
         * - the pickup sound oneshot is played
         * - time is added to the timer
         */
        if (other.gameObject.CompareTag("TimeBoost"))
        {
            Destroy(other.gameObject);
            ParticleSystem particles = Instantiate(timeBoostParticles, other.transform.position, Quaternion.identity);
            particles.transform.parent = _gamePlacement;
            timeBoostParticles.Play();


            gameManager.AddTime();

            quietAudioPlayer.PlayOneShot(pickupSound);
        }

        /* When the player collides with an enemy:
         * - the player is detroyed and the game ends if the power up is not active
         * - the enemy game object is detroyed is the power up is active
         * - explosion particles are instantiated at the location of the enemy and played
         * - the explosion sound oneshot is played
         */
        if (other.gameObject.CompareTag("Enemy"))
        {
            loudAudioPlayer.PlayOneShot(explosionSound);
            ParticleSystem particles = Instantiate(enemyParticles, other.transform.position, Quaternion.identity);
            particles.transform.localScale *= gameManager.mobileMultiplier;
            particles.transform.parent = _gamePlacement;
            
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

    //Coroutine timer that disables powerup after a set amount of time
    IEnumerator PowerUpCountdownRoutine()
    {
        yield return new WaitForSeconds(5);
        powerUpActive = false;
        spawnManager.DecreaseSpawnRate();
        DisableForceField();
        DisablePowerUpParticles();
    }

    //Coroutines that create a flashing effect when power up is about to expire
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
    }

    IEnumerator PowerUpFlashOn6()
    {
        yield return new WaitForSeconds(0.25f);
        EnableForceField();
    }

    //Sets all child materials on plane game object to be the same as parent material
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

    //activates force field game object (when power up active)
    private void EnableForceField()
    {
        powerUpCollider.enabled = true;
        forceField.SetActive(true);
        planeMeshRenderer.material = glowMaterial;

        AssignAllPlaneMaterials();
    }

    //deactivates force field game object (when power up not active)
    private void DisableForceField()
    {
        powerUpCollider.enabled = false;
        forceField.SetActive(false);
        planeMeshRenderer.material = baseMaterial;

        AssignAllPlaneMaterials();
    }

    //updates force field location to be the same as player
    private void UpdateForceFieldLocation()
    {
        forceField.transform.position = gameObject.transform.position;
    }

    //makes star particles move fast (when power up active)
    private void EnablePowerUpParticles()
    {
        slowParticles.SetActive(false);
        fastParticles.SetActive(true);
    }

    //makes start particles move at regular speed (when power up is not active)
    private void DisablePowerUpParticles()
    {
        fastParticles.SetActive(false);
        slowParticles.SetActive(true);
    }

    //sets game over to true so any conditionals elsewhere update accordingly
    //Saves the current high score
    //disables the force field if it's active
    //pauses star particles
    public void EndGame()
    {
        Debug.Log("game ended");
        gameOver = true;
        Debug.Log($"game over: {gameOver}");

        DataHandler.Instance.SaveHighScore();

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



