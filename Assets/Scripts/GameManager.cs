using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using System;
using UnityEngine.UI;
using System.IO;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;

    public Color whiteTimerColor;
    public Color redTimerColor;

    public string playerName;
    private string highScorePlayerName;

    private int score;
    private int highScore;

    private float timeLeft;
    private float warningTime = 10.0f;
    private float timeToAdd = 10.0f;

    private Text scoreText;
    private Text timerText;
    private Text finalScoreText;
    private Text highScoreGameOver;
    private Text highScoreStartScreen;

    private PlayerController playerController;
    

    private bool mainSceneLoaded;

    


    

    

    
    void Start()
    {

        

        // This first line just makes sure the listener isn't added twice
        SceneManager.sceneLoaded -= OnSceneLoaded;

        // Whenever a scene is loaded call OnSceneLoaded
        SceneManager.sceneLoaded += OnSceneLoaded;

        mainSceneLoaded = false;

        LoadHighScore();

        highScoreStartScreen = GameObject.Find("High Score Text").GetComponent<Text>();
        
    }

    
    void Update()
    {
        if (mainSceneLoaded == true)
        {
            UpdateTimer();
            
        }

        UpdateHighScore();

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


    void UpdateHighScore()
    {
        if(SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Start Screen"))
        {
            highScoreStartScreen.text = $"HIGH SCORE : {highScorePlayerName} - {highScore}";
        }

        if(SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Main Scene"))
        {
            highScoreGameOver.text = $"HIGH SCORE : {highScorePlayerName} - {highScore}";
        }

        if (score > highScore)
        {
            Instance.highScore = score;
            Instance.highScorePlayerName = playerName;
        }

        //Debug.Log(highScore + highScorePlayerName);
    }


    public void ResetHighScore()
    {
        Instance.highScore = 0;
        SaveHighScore();
    }


    private void UpdateTimer()
    {
        if(!playerController.gameOver)
        {
            timeLeft -= Time.deltaTime;
            timerText.text = $"{Convert.ToInt32(timeLeft)}";
        }

        if (timeLeft < warningTime)
        {
            timerText.color = redTimerColor;

        }

        if(timeLeft > warningTime)
        {
            timerText.color = whiteTimerColor;
        }

        if (timeLeft < 0)
        {
            playerController.EndGame();
        }

    }

    public void AddTime()
    {
        timeLeft += timeToAdd;
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

            highScoreGameOver = GameObject.Find("High Score Text").GetComponent<Text>();

            mainSceneLoaded = true;
            

            score = 0;
            timeLeft = 30;
        }

        if (scene.name == "Start Screen")
        {
            highScoreStartScreen = GameObject.Find("High Score Text").GetComponent<Text>();
        }
    }

    [Serializable]
    class SaveData
    {
        public int highScore;
        public string highScorePlayerName;
    }

    public void SaveHighScore()
    {
        SaveData data = new SaveData();
        data.highScore = highScore;
        data.highScorePlayerName = highScorePlayerName;

        string json = JsonUtility.ToJson(data);

        File.WriteAllText(Application.persistentDataPath + "/savefile.json", json);
    }

    public void LoadHighScore()
    {
        string path = Application.persistentDataPath + "/savefile.json";
        if (File.Exists(path))
        {
            string json = File.ReadAllText(path);
            SaveData data = JsonUtility.FromJson<SaveData>(json);

            highScore = data.highScore;
            highScorePlayerName = data.highScorePlayerName;
        }
    }

}
