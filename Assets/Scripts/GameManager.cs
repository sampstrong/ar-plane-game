using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using System;
using UnityEngine.UI;
using System.IO;
using System.Runtime.InteropServices.WindowsRuntime;
using Niantic.ARDK.Extensions;
using UnityEngine.Events;

public class GameManager : MonoBehaviour
{
    //public string highScorePlayerName;
    //public int highScore;
    
    
    // Game Mechanics
    [HideInInspector] public float mobileMultiplier = 0.02f;
    [HideInInspector] public string playerName;
    [HideInInspector] public bool gameOver = true;
    private int score;
    private float timeLeft;
    private float warningTime = 10.0f;
    private float timeToAdd = 10.0f;
    

    [Header("Main Scene UI")]
    [SerializeField] private Text scoreText;
    [SerializeField] private Text timerText;
    [SerializeField] private Text finalScoreText;
    [SerializeField] private Text highScoreGameOver;
    [SerializeField] private Canvas gameOverScreen;
    [SerializeField] private Canvas _ARStartCanvas;
    public Canvas scoreAndTime;
    
    private Color whiteTimerColor = Color.white;
    private Color redTimerColor = Color.red;

    [Header("Start Screen UI")]
    [SerializeField] private Text highScoreStartScreen;
    public TMP_InputField playerNameInputField;

    [Header("Component References")]
    [SerializeField] private ARCustomPlacement _ARCustomPlacement;
    private PlayerController playerController;

    [Header("Events")]
    public UnityEvent onStartGame;
    public UnityEvent onRestart;

    void Start()
    {
        DisplayHighScore();

        //get components from start screen when loaded
        if (SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Start Screen") || SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Start Screen Mobile AR"))
        {
            highScoreStartScreen = GameObject.Find("Start High Score Text").GetComponent<Text>();
        }
        
        // Unity Event Subscriptions
        if (!_ARCustomPlacement) return;
        _ARCustomPlacement.onObjectPlaced.AddListener(ToggleARStartGameCanvas);
        
        onStartGame.AddListener(InitializeNumbers);
        onStartGame.AddListener(ToggleARStartGameCanvas);
        onStartGame.AddListener(ToggleScoreAndTime);
        
        onRestart.AddListener(InitializeNumbers);
        onRestart.AddListener(ToggleGameOverScreen);
        onRestart.AddListener(ToggleScoreAndTime);
        
        
        gameOver = true;
    }

    
    void Update()
    {
        Debug.Log($"High Score: {DataHandler.Instance.highScore}");
        Debug.Log($"Game Over: {gameOver}");
        if (timerText == null) return;
        if (gameOver) return;
        UpdateTimer();
        
        

        //update the high score and display it
        SetHighScore();
        DisplayHighScore();
    }

    // load main scene (for button functionality in starting or restarting game)
    public void LoadMainScene()
    {
        SceneManager.LoadScene(1);
    }
    

    //load title screen for desktop (for button functionality in starting or restarting game)
    public void LoadTitleScreen()
    {
        SceneManager.LoadScene(0);
    }
    

    public void StartGame()
    {
        onStartGame.Invoke();
        gameOver = false;
        
        playerController = FindObjectOfType<PlayerController>();
        playerController.onGameOver.AddListener(EndGame);
        
        Debug.Log($"Player Controller is on {playerController.gameObject.name}");
        
        playerController.onGameOver.AddListener(ToggleGameOverScreen);
        playerController.onGameOver.AddListener(ToggleScoreAndTime);
        playerController.onGameOver.AddListener(EventTest);
        playerController.onGameOver.AddListener(SetHighScore);
        playerController.onGameOver.AddListener(DisplayHighScore);
    }

    private void EndGame()
    {
        gameOver = true;
    }

    private void EventTest()
    {
        Debug.Log("Event is working");
    }

    public void RestartGame()
    {
        playerController.gameObject.SetActive(true);
        onRestart.Invoke();
        gameOver = false;
    }

    private void ToggleARStartGameCanvas()
    {
        Debug.Log("Start Game Canvas Toggled");
        if (_ARStartCanvas.gameObject.activeInHierarchy)
        {
            _ARStartCanvas.gameObject.SetActive(false);
        }
        else
        {
            _ARStartCanvas.gameObject.SetActive(true);
        }
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

    private void InitializeNumbers()
    {
        timeLeft = 30;
        timerText.text = $"{(int)(timeLeft)}";
        
        score = 0;
        scoreText.text = $"{score}";
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
        
        Debug.Log("Data Handler Found");
        if (score > DataHandler.Instance.highScore)
        {
            DataHandler.Instance.highScore = score;
            DataHandler.Instance.highScorePlayerName = playerName;
            Debug.Log("New High Score Set");
        }
    }

    //updates text display of high score value and high score player on start screen and main scene
    private void DisplayHighScore()
    {
        if (SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Start Screen") || SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Start Screen Mobile AR"))
        {
            highScoreStartScreen.text = $"HIGH SCORE : {DataHandler.Instance.highScorePlayerName} - {DataHandler.Instance.highScore}";
        }

        if (SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Main Scene") || SceneManager.GetActiveScene() == SceneManager.GetSceneByName("Main Scene Mobile AR"))
        {
            highScoreGameOver.text = $"HIGH SCORE : {DataHandler.Instance.highScorePlayerName} - {DataHandler.Instance.highScore}";
        }
    }

    
    private void UpdateTimer()
    {
        
        //counts down time in seconds when game is not over
        timeLeft -= Time.deltaTime;
        timerText.text = $"{(int)(timeLeft)}";
        

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
            if (!playerController) return;
            playerController.EndGame();
        }
    }

    //adds time to timer (when time boost pickup is collected)
    public void AddTime()
    {
        timeLeft += timeToAdd;
    }

    //Controls UI in main scene
    

    private void ToggleGameOverScreen()
    {
        Debug.Log("Game Over Canvas Toggled");
        if (gameOverScreen.gameObject.activeInHierarchy)
        {
            gameOverScreen.gameObject.SetActive(false);
        }
        else
        {
            gameOverScreen.gameObject.SetActive(true);
        }
    }

    private void ToggleScoreAndTime()
    {
        if (scoreAndTime.gameObject.activeInHierarchy)
        {
            scoreAndTime.gameObject.SetActive(false);
        }
        else
        {
            scoreAndTime.gameObject.SetActive(true);
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
