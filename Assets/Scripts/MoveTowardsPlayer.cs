using System.Collections;
using System.Collections.Generic;
using Niantic.ARDKExamples.Helpers;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MoveTowardsPlayer : MonoBehaviour
{
    private PlayerController playerController;

    //as a public variable, the base speed value is set individually for each object in the inspector
    public float speed;

    private GameManager _gameManager;
    private Transform _gamePlacement;
    
    //set z position where objects will be destoyed
    private float zDestroy = -23.0f;
    
    
    void Start()
    {
        //get the player controller script as a reference
        
        _gameManager = FindObjectOfType<GameManager>();
        _gamePlacement = FindObjectOfType<ARCustomPlacement>().placedObject.transform;
        
        if (SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Main Scene Mobile AR"))
        {
            speed *= _gameManager.mobileMultiplier;
        }
        
        if (_gameManager.gameOver) return;
        playerController = GameObject.Find("Player").GetComponent<PlayerController>();
    }

    
    void Update()
    {
        //sets an increased speed for objects when power up is active
        
        IncreaseSpeedOnPowerUp();

        //destroy objects if their position is less than the zDestory variable
        
        if ( transform.localPosition.z < zDestroy)
        {
            Destroy(gameObject);
        }
        

        //set speed of objects to zer when game is over (essentially pause the game)
        if (_gameManager.gameOver == true)
        {
            speed = 0;
        }
        
        //move all objects towards player
        Move();
    }

    private void IncreaseSpeedOnPowerUp()
    {
        if (!playerController) return;
        if (playerController.powerUpActive)
        {
            if (gameObject.CompareTag("PowerUpParticles"))
            {
                speed = 10.0f;
            }
            else
            {
                speed = 55.0f;
            }

            if (SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Main Scene Mobile AR"))
            {
                speed *= _gameManager.mobileMultiplier;
            }
        }
    }

    //move objects forward based on speed variable and time passed
    public void Move()
    {
        transform.Translate(Vector3.forward * Time.deltaTime * -speed, Space.Self);
    }
    
}
