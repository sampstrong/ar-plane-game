using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using System;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;

    public Color redTimerColor;

    private int score;
    private float timeLeft;
    private float warningTime = 10.0f;

    private Text scoreText;
    private Text timerText;
    private Text finalScoreText;

    private PlayerController playerController;

    private bool mainSceneLoaded;
    

    

    
    void Start()
    {

        

        // This first line just makes sure the listener isn't added twice
        SceneManager.sceneLoaded -= OnSceneLoaded;

        // Whenever a scene is loaded call OnSceneLoaded
        SceneManager.sceneLoaded += OnSceneLoaded;

        mainSceneLoaded = false;

        

    }

    
    void Update()
    {
        if (mainSceneLoaded == true)
        {
            UpdateTimer();
            
        }
        
    }


    private void Awake()
    {
        if (Instance != null)
        {
            Destroy(gameObject);
            return;
        }

        Instance = this;
        DontDestroyOnLoad(gameObject);

        

    }

    public void LoadMainScene()
    {
        SceneManager.LoadScene(1);
    }

    public void LoadTitleScreen()
    {
        SceneManager.LoadScene(0);
    }


    public void UpdateScore()
    {
        score += 10;
        scoreText.text = $"{score}";
        finalScoreText.text = $"SCORE : {score}";
    }

    private void UpdateTimer()
    {
        timeLeft -= Time.deltaTime;
        timerText.text = $"{Convert.ToInt32(timeLeft)}";

        if (timeLeft < warningTime)
        {
            timerText.color = redTimerColor;

        }

        if (timeLeft < 0)
        {
            playerController.EndGame();
        }

    }

   
    /*
     * attempt to make red text flash - doesn't sync well enough with count down
     * 
    IEnumerator FlashCountDown()
    {
        yield return new WaitForSeconds(20);

        StartCoroutine(FlashOff());
    }

    IEnumerator FlashOff()
    {
        yield return new WaitForSeconds(0.5f);
        timerText.enabled = false;

        if(!playerController.gameOver)
        {
            StartCoroutine(FlashOn());
        }
        
    }

    IEnumerator FlashOn()
    {
        yield return new WaitForSeconds(0.5f);
        timerText.enabled = true;

        if(!playerController.gameOver)
        {
            StartCoroutine(FlashOff());
        }
        
        
    }
    */

    void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if (scene.name == "Main Scene")
        {
            scoreText = GameObject.Find("Score Text").GetComponent<Text>();
            timerText = GameObject.Find("Timer Text").GetComponent<Text>();
            finalScoreText = GameObject.Find("Final Score Text").GetComponent<Text>();
            playerController = GameObject.Find("Player").GetComponent<PlayerController>();

            mainSceneLoaded = true;
            

            score = 0;
            timeLeft = 30;
        }
     
    }

    
}
