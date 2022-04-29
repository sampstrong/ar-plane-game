using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{
    public GameObject enemyPrefab;
    public GameObject goalPrefab;
    public GameObject powerupPrefab;
    public GameObject[] cloudPrefab;

    private float spawnRange = 10.0f;
    private float cloudSpawnRange = 20.0f;
    private float ySpawn = 5.0f;
    private float zSpawn = 23.0f;
    private float cloudYSpawn = 0.0f;
    public float spawnPowerUpMultiplier = 3.0f;

    private PlayerController playerController;

    float enemySpawnDelay;
    float enemySpawnInterval;

    float goalSpawnDelay;
    float goalSpawnInterval;

    float powerupSpawnDelay;
    float powerupSpawnInterval;

    float cloudSpawnDelay;
    float cloudSpawnInterval;


    // Start is called before the first frame update
    void Start()
    {
        playerController = GameObject.Find("Player").GetComponent<PlayerController>();

        enemySpawnDelay = 1.0f;
        enemySpawnInterval = Random.Range(0.5f, 1.2f);

        goalSpawnDelay = 0.0f;
        goalSpawnInterval = Random.Range(0.3f, 0.7f);

        powerupSpawnDelay = 5.0f;
        powerupSpawnInterval = Random.Range(18.0f, 25.0f);

        cloudSpawnDelay = 1.0f;
        cloudSpawnInterval = Random.Range(1.0f, 2.0f);



        InvokeRepeating("SpawnEnemy", enemySpawnDelay, enemySpawnInterval);

        InvokeRepeating("SpawnGoal", goalSpawnDelay, goalSpawnInterval);

        InvokeRepeating("SpawnPowerUp", powerupSpawnDelay, powerupSpawnInterval);

        InvokeRepeating("SpawnCloud", cloudSpawnDelay, cloudSpawnInterval);

        Debug.Log("Normal Spawn Rate Active");

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void SpawnEnemy()
    {

        float enemyRandX = Random.Range(-spawnRange, spawnRange);
        Vector3 enemySpawnPos = new Vector3(enemyRandX, ySpawn, zSpawn);


        if (playerController.gameOver == false)
        {
            Instantiate(enemyPrefab, enemySpawnPos, enemyPrefab.transform.rotation);
        }
    }


    void SpawnGoal()
    {

        float goalRandX = Random.Range(-spawnRange, spawnRange);
        Vector3 goalSpawnPos = new Vector3(goalRandX, ySpawn, zSpawn);


        if(playerController.gameOver == false)
        {
            Instantiate(goalPrefab, goalSpawnPos, goalPrefab.transform.rotation);
        }
    }

    void SpawnPowerUp()
    {

        float powerupRandX = Random.Range(-spawnRange, spawnRange);
        Vector3 powerupSpawnPos = new Vector3(powerupRandX, ySpawn, zSpawn);

        
        if(playerController.gameOver == false)
        {
            Instantiate(powerupPrefab, powerupSpawnPos, powerupPrefab.transform.rotation);
        }
    }

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

    public void IncreaseSpawnRate()
    {
        CancelInvoke("SpawnEnemy");
        CancelInvoke("SpawnGoal");
        CancelInvoke("SpawnPowerUp");
        CancelInvoke("SpawnCloud");

        InvokeRepeating("SpawnEnemy", enemySpawnDelay, (enemySpawnInterval / spawnPowerUpMultiplier));

        InvokeRepeating("SpawnGoal", goalSpawnDelay, (goalSpawnInterval / spawnPowerUpMultiplier));

        InvokeRepeating("SpawnPowerUp", powerupSpawnDelay, (powerupSpawnInterval / spawnPowerUpMultiplier));

        InvokeRepeating("SpawnCloud", cloudSpawnDelay, (cloudSpawnInterval / spawnPowerUpMultiplier));


        Debug.Log("Increased Spawn Rate Active");
    }

    public void DecreaseSpawnRate()
    {
        CancelInvoke("SpawnEnemy");
        CancelInvoke("SpawnGoal");
        CancelInvoke("SpawnPowerUp");
        CancelInvoke("SpawnCloud");

        InvokeRepeating("SpawnEnemy", enemySpawnDelay, enemySpawnInterval);

        InvokeRepeating("SpawnGoal", goalSpawnDelay, goalSpawnInterval);

        InvokeRepeating("SpawnPowerUp", powerupSpawnDelay, powerupSpawnInterval);

        InvokeRepeating("SpawnCloud", cloudSpawnDelay, cloudSpawnInterval);

        Debug.Log("Normal Spawn Rate Active");
    }

}
