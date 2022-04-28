using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using System;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;

    private int score;
    private float timeLeft;

    private TMP_Text scoreText;
    private TextMeshProUGUI timerText;
    private TextMeshProUGUI finalScoreText;

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
        scoreText.text = $"SCORE: {score}";
        finalScoreText.text = $"SCORE: {score}";
    }

    private void UpdateTimer()
    {
        timeLeft -= Time.deltaTime;
        timerText.text = $"TIME: {Convert.ToInt32(timeLeft)}";

        if(timeLeft < 0)
        {
            playerController.EndGame();
        }
    }


    void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if (scene.name == "Main Scene")
        {
            scoreText = GameObject.Find("Score Text").GetComponent<TextMeshProUGUI>();
            timerText = GameObject.Find("Timer Text").GetComponent<TextMeshProUGUI>();
            finalScoreText = GameObject.Find("Final Score Text").GetComponent<TextMeshProUGUI>();
            playerController = GameObject.Find("Player").GetComponent<PlayerController>();

            mainSceneLoaded = true;

            score = 0;
            timeLeft = 60;
        }
     
    }

    
}
