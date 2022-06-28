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
    public Color whiteTimerColor;
    public Color redTimerColor;

    public string playerName;
    private int score;

    public string highScorePlayerName;
    public int highScore;

    private float timeLeft;
    private float warningTime = 10.0f;
    private float timeToAdd = 10.0f;

    private Text scoreText;
    private Text timerText;
    private Text finalScoreText;
    private Text highScoreGameOver;
    public Text highScoreStartScreen;

    private PlayerController playerController;

    public TMP_InputField playerNameInputField;

    public Canvas gameOverScreen;
    public Canvas scoreAndTime;


    void Start()
    {
        //initialize score and timer
        score = 0;
        timeLeft = 30;

        
        //get components from main scene when loaded
        if (SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Main Scene") || SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Main Scene Mobile"))
        {
            scoreText = GameObject.Find("Score Text").GetComponent<Text>();
            timerText = GameObject.Find("Timer Text").GetComponent<Text>();
            finalScoreText = GameObject.Find("Final Score Text").GetComponent<Text>();
            playerController = GameObject.Find("Player").GetComponent<PlayerController>();

            highScoreGameOver = GameObject.Find("Game Over High Score Text").GetComponent<Text>();

            gameOverScreen = GameObject.Find("Game Over Canvas").GetComponent<Canvas>();
            gameOverScreen.enabled = false;

            scoreAndTime = GameObject.Find("Score and Time Canvas").GetComponent<Canvas>();
            scoreAndTime.enabled = true;
        }

        //get components from start screen when loaded
        if (SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Start Screen") || SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Start Screen Mobile"))
        {
            highScoreStartScreen = GameObject.Find("Start High Score Text").GetComponent<Text>();
        }
    }

    
    void Update()
    {
        //start timer if main scene is loaded and change to game over screen when game ends
        if (SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Main Scene") || SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Main Scene Mobile"))
        {
            UpdateTimer();
            UpdateUI();
        }

        //update the high score and display it
        SetHighScore();
        DisplayHighScore();
    }

    //load main scene (for button functionality in starting or restarting game)
    public void LoadMainScene()
    {
        SceneManager.LoadScene(1);
    }
    
    //load main screen for mobile
    public void LoadMainSceneMobile()
    {
        SceneManager.LoadScene(3);
    }

    //load title screen for desktop (for button functionality in starting or restarting game)
    public void LoadTitleScreen()
    {
        SceneManager.LoadScene(0);
    }
    
    //load title screen for mobile
    public void LoadTitleScreenMobile()
    {
        SceneManager.LoadScene(2);
    }

    public void ShowKeyboard()
    {
        TouchScreenKeyboard.Open(nameof(TouchScreenKeyboardType.Default));
    }

    //get the input field component and set the current players name based on input value (stored when player clicks out of input field)
    public void SetPlayerName()
    {
        playerNameInputField = GameObject.Find("Name Input Field").GetComponent<TMP_InputField>();
        playerName = playerNameInputField.text;
        Debug.Log(playerName);
    }

    //add points to score and update score text during game and at game end
    public void UpdateScore()
    {
        score += 10;
        scoreText.text = $"{score}";
        finalScoreText.text = $"SCORE : {score}";
    }

    //reset high score (when reset button is pressed)
    public void ResetHighScore()
    {
        DataHandler.Instance.highScore = score;
        DataHandler.Instance.highScorePlayerName = null;

        Debug.Log("reset button pressed");

        DataHandler.Instance.SaveHighScore();
        DataHandler.Instance.LoadHighScore();
    }
    
    //set new high score when current score exceeds the stored high score value
    //store player name associated with new high score
    void SetHighScore()
    {
        if (score > DataHandler.Instance.highScore)
        {
            DataHandler.Instance.highScore = score;
            DataHandler.Instance.highScorePlayerName = playerName;
        }
    }

    //updates text display of high score value and high score player on start screen and main scene
    private void DisplayHighScore()
    {
        if (SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Start Screen") || SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Start Screen Mobile"))
        {
            highScoreStartScreen.text = $"HIGH SCORE : {DataHandler.Instance.highScorePlayerName} - {DataHandler.Instance.highScore}";
        }

        if (SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Main Scene") || SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Main Scene Mobile"))
        {
            highScoreGameOver.text = $"HIGH SCORE : {DataHandler.Instance.highScorePlayerName} - {DataHandler.Instance.highScore}";
        }
    }

    
    private void UpdateTimer()
    {
        Debug.Log($"Game manager game is over: {playerController.gameOver}");
        //counts down time in seconds when game is not over
        if(!playerController.gameOver)
        {
            timeLeft -= Time.deltaTime;
            timerText.text = $"{(int)(timeLeft)}";
            Debug.Log(timeLeft);
        }

        //sets timer text color to red when time is below the warning time
        if (timeLeft < warningTime)
        {
            timerText.color = redTimerColor;
        }

        //sets time text color to white when time is above the warning time
        if(timeLeft > warningTime)
        {
            timerText.color = whiteTimerColor;
        }

        //ends game when timer reaches zero
        if (timeLeft < 0)
        {
            playerController.EndGame();
        }
    }

    //adds time to timer (when time boost pickup is collected)
    public void AddTime()
    {
        timeLeft += timeToAdd;
    }

    //Controls UI in main scene
    private void UpdateUI()
    {
        //shows score and timer during game and hides game over screen
        if(!playerController.gameOver)
        {
            scoreAndTime.enabled = true;
            gameOverScreen.enabled = false;
        }

        //hides score and time when game is over and shows game over screen
        else
        {
            scoreAndTime.enabled = false;
            gameOverScreen.enabled = true;
            Debug.Log(gameOverScreen.enabled);
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
}
