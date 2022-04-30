using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PlayerInputManager : MonoBehaviour
{

    private TMP_InputField playerNameInputField;
    private GameManager gameManager;

    

    // Start is called before the first frame update
    void Start()
    {
        playerNameInputField = GameObject.Find("Name Input Field").GetComponent<TMP_InputField>();
        gameManager = GameObject.Find("Game Manager").GetComponent<GameManager>();

    }

    // Update is called once per frame
    void Update()
    {
        
    }


    public void GetPlayerNameInput()
    {
        gameManager.playerName = playerNameInputField.text;
        Debug.Log(gameManager.playerName);
    }
    
}
