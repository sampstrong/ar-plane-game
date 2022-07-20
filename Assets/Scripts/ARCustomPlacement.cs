using System.Collections;
using System.Collections.Generic;
using Niantic.ARDK.AR.ARSessionEventArgs;
using Niantic.ARDK.AR.HitTest;
using Niantic.ARDK.Extensions;
using Niantic.ARDK.Utilities;
using Niantic.ARDK.Utilities.Input.Legacy;
using Niantic.ARDKExamples.Helpers;
using UnityEngine;

public class ARCustomPlacement : ARCursorRenderer
{
    [SerializeField] private GameObject _placementObject;
    [SerializeField] private ARPlaneManager _arPlaneManager;
    [SerializeField] private Material _shadowMaterial;
    
    private bool _objectIsPlaced = false;
    private Vector3 _placementRotation;
    

    // Update is called once per frame
    void Update()
    {
        _placementRotation = new Vector3(0, Camera.transform.eulerAngles.y, 0);
        
        /*
        if (Input.touchCount > 0) //added code
        {
            
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Began)
            {
                PlaceObject();
            }
        }

        else if (Input.GetMouseButton(0)) //for mock scene debugging
        {
            PlaceObject();
        }
        */

        if (_objectIsPlaced) return;
        if (PlatformAgnosticInput.touchCount <= 0) return;
        if (PlatformAgnosticInput.touchCount > 0)
        {
            PlaceObject();
            _objectIsPlaced = true;
            spawnedCursorObject.SetActive(false);
            SwitchToShadows();
        }

    }
    
    private void PlaceObject()
    {
        Instantiate(_placementObject, spawnedCursorObject.transform.position, Quaternion.Euler(_placementRotation));
    }

    private void SwitchToShadows()
    {
        foreach (GameObject plane in _arPlaneManager._planeLookup.Values)
        {
            Renderer renderer = plane.GetComponentInChildren<MeshRenderer>();
            renderer.material = _shadowMaterial;
        }
    }
    
    
}
