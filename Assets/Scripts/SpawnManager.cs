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
    private float ySpawn = 5.0f;
    private float zSpawn = 23.0f;
    private float cloudYSpawn = 0.0f;

    private PlayerController playerController;


    // Start is called before the first frame update
    void Start()
    {
        float enemySpawnDelay = 1.0f;
        float enemySpawnInterval = Random.Range(1.0f, 2.0f);

        float goalSpawnDelay = 0.0f;
        float goalSpawnInterval = Random.Range(0.8f, 1.5f);

        float powerupSpawnDelay = 5.0f;
        float powerupSpawnInterval = Random.Range(5.0f, 10.0f);

        float cloudSpawnDelay = 1.0f;
        float cloudSpawnInterval = Random.Range(1.0f, 2.0f);

        InvokeRepeating("SpawnEnemy", enemySpawnDelay, enemySpawnInterval);

        InvokeRepeating("SpawnGoal", goalSpawnDelay, goalSpawnInterval);

        InvokeRepeating("SpawnPowerUp", powerupSpawnDelay, powerupSpawnInterval);

        InvokeRepeating("SpawnCloud", cloudSpawnDelay, cloudSpawnInterval);

        playerController = GameObject.Find("Plane").GetComponent<PlayerController>();
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
        float cloudRandX = Random.Range(-spawnRange, spawnRange);
        Vector3 cloudSpawnPos = new Vector3(cloudRandX, cloudYSpawn, zSpawn);

        int randCloudIndex = Random.Range(0, 4);


        if (playerController.gameOver == false)
        {
            Instantiate(cloudPrefab[randCloudIndex], cloudSpawnPos, cloudPrefab[randCloudIndex].transform.rotation);
        }
    }
}
