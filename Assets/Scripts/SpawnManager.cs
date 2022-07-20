using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SpawnManager : MonoBehaviour
{
    public GameObject enemyPrefab;
    public GameObject goalPrefab;
    public GameObject powerupPrefab;
    public GameObject timeBoostPrefab;
    public GameObject[] cloudPrefab;

    private float spawnRange = 10.0f;
    private float ySpawn = 5.0f;
    private float zSpawn = 23.0f;
    private float cloudSpawnRange = 20.0f;
    private float cloudYSpawn = 0.0f;
    private float spawnPowerUpMultiplier = 2.5f;

    private PlayerController playerController;

    float enemySpawnDelay;
    float enemySpawnInterval;

    float goalSpawnDelay;
    float goalSpawnInterval;

    float powerupSpawnDelay;
    float powerupSpawnInterval;

    float timeBoostSpawnDelay;
    float timeBoostSpawnInterval;

    float cloudSpawnDelay;
    float cloudSpawnInterval;

    private AudioSource enemyAudioPlayer;
    public AudioClip missileLaunchSound;


    // Start is called before the first frame update
    void Start()
    {
        //get player controller reference
        playerController = GameObject.Find("Player").GetComponent<PlayerController>();

        //initialize spawn delay time
        //initialize spawn interval (in start because it will come up with new values each game)
        //maybe spawn interval should go in update to continually change?
        enemySpawnDelay = 1.0f;
        enemySpawnInterval = Random.Range(0.5f, 1.2f);

        goalSpawnDelay = 0.0f;
        goalSpawnInterval = Random.Range(0.3f, 0.7f);

        powerupSpawnDelay = 5.0f;
        powerupSpawnInterval = Random.Range(25.0f, 30.0f);

        timeBoostSpawnDelay = 15.0f;
        timeBoostSpawnInterval = Random.Range(10.0f, 20.0f);

        cloudSpawnDelay = 1.0f;
        cloudSpawnInterval = Random.Range(1.0f, 2.0f);

        
        if (SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Main Scene Mobile AR")) return;
        //repeat spawning based on methods below and variables for spawn delay and interval above
        InvokeRepeating("SpawnEnemy", enemySpawnDelay, enemySpawnInterval);
        InvokeRepeating("SpawnGoal", goalSpawnDelay, goalSpawnInterval);
        InvokeRepeating("SpawnPowerUp", powerupSpawnDelay, powerupSpawnInterval);
        InvokeRepeating("SpawnTimeBoost", timeBoostSpawnDelay, timeBoostSpawnInterval);
        InvokeRepeating("SpawnCloud", cloudSpawnDelay, cloudSpawnInterval);

        Debug.Log("Normal Spawn Rate Active");

        //reference audio player for enemy sound FX
        enemyAudioPlayer = GameObject.Find("Enemy Sound FX Player").GetComponent<AudioSource>();
    }

    //define a random spawn position on x axis for each time enemy is spawned
    //if the game isn't over, instantiate an enemy prefab and play the associated one shot sound
    void SpawnEnemy()
    {
        
        
        float enemyRandX = Random.Range(-spawnRange, spawnRange);
        Vector3 enemySpawnPos = new Vector3(enemyRandX, ySpawn, zSpawn);

        if (playerController.gameOver == false)
        {
            Instantiate(enemyPrefab, enemySpawnPos, enemyPrefab.transform.rotation);
            enemyAudioPlayer.PlayOneShot(missileLaunchSound);
        }
    }

    //define a random spawn position on x axis for each time goal is spawned
    //if the game isn't over, instantiate a goal prefab
    void SpawnGoal()
    {
        float goalRandX = Random.Range(-spawnRange, spawnRange);
        Vector3 goalSpawnPos = new Vector3(goalRandX, ySpawn, zSpawn);

        if(playerController.gameOver == false)
        {
            Instantiate(goalPrefab, goalSpawnPos, goalPrefab.transform.rotation);
        }
    }

    //define a random spawn position on x axis for each time powerup is spawned
    //if the game isn't over, instantiate a powerup prefab
    void SpawnPowerUp()
    {
        float powerupRandX = Random.Range(-spawnRange, spawnRange);
        Vector3 powerupSpawnPos = new Vector3(powerupRandX, ySpawn, zSpawn);

        if(playerController.gameOver == false)
        {
            Instantiate(powerupPrefab, powerupSpawnPos, powerupPrefab.transform.rotation);
        }
    }

    //define a random spawn position on x axis for each time a time boost is spawned
    //if the game isn't over, instantiate a time boost prefab
    void SpawnTimeBoost()
    {
        float timeBoostRandX = Random.Range(-spawnRange, spawnRange);
        Vector3 timeBoostSpawnPos = new Vector3(timeBoostRandX, ySpawn, zSpawn);

        if (playerController.gameOver == false)
        {
            Instantiate(timeBoostPrefab, timeBoostSpawnPos, timeBoostPrefab.transform.rotation);
        }
    }

    //define a random spawn position on x axis for each time cloud is spawned
    //randomize which cloud is spawned from cloud array
    //if the game isn't over, instantiate a cloud prefab
    void SpawnCloud()
    {
        float cloudRandX = Random.Range(-cloudSpawnRange, cloudSpawnRange);
        Vector3 cloudSpawnPos = new Vector3(cloudRandX, cloudYSpawn, zSpawn);

        int randCloudIndex = Random.Range(0, 4);

        if (playerController.gameOver == false)
        {
            Instantiate(cloudPrefab[randCloudIndex], cloudSpawnPos, cloudPrefab[randCloudIndex].transform.rotation);
        }
    }

    //cancel current repeating spawns and invoke new spawns with increased spawn rate (when power up is active)
    public void IncreaseSpawnRate()
    {
        CancelInvoke("SpawnEnemy");
        CancelInvoke("SpawnGoal");
        CancelInvoke("SpawnPowerUp");
        CancelInvoke("SpawnCloud");

        powerupSpawnDelay = 15.0f;

        InvokeRepeating("SpawnEnemy", enemySpawnDelay, (enemySpawnInterval / spawnPowerUpMultiplier));
        InvokeRepeating("SpawnGoal", goalSpawnDelay, (goalSpawnInterval / spawnPowerUpMultiplier));
        InvokeRepeating("SpawnPowerUp", powerupSpawnDelay, (powerupSpawnInterval));
        InvokeRepeating("SpawnTimeBoost", timeBoostSpawnDelay, (timeBoostSpawnInterval));
        InvokeRepeating("SpawnCloud", cloudSpawnDelay, (cloudSpawnInterval / spawnPowerUpMultiplier));

        Debug.Log("Increased Spawn Rate Active");
    }

    //cancel current repeating spawns and invoke new spawns with regular spawn rate (when power up is deactivated)
    public void DecreaseSpawnRate()
    {
        CancelInvoke("SpawnEnemy");
        CancelInvoke("SpawnGoal");
        CancelInvoke("SpawnPowerUp");
        CancelInvoke("SpawnCloud");

        InvokeRepeating("SpawnEnemy", enemySpawnDelay, enemySpawnInterval);
        InvokeRepeating("SpawnGoal", goalSpawnDelay, goalSpawnInterval);
        InvokeRepeating("SpawnPowerUp", powerupSpawnDelay, powerupSpawnInterval);
        InvokeRepeating("SpawnTimeBoost", timeBoostSpawnDelay, timeBoostSpawnInterval);
        InvokeRepeating("SpawnCloud", cloudSpawnDelay, cloudSpawnInterval);

        Debug.Log("Normal Spawn Rate Active");
    }

}
