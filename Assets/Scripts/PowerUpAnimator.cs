using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PowerUpAnimator : MonoBehaviour
{
    private float rotateSpeed = 60.0f;

    //rotates gameobject based on specified rotation speed
    void Update()
    {
        transform.Rotate(Vector3.up * Time.deltaTime * rotateSpeed);
    }
}
