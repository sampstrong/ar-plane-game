using System;
using System.Collections;
using System.Collections.Generic;
using Niantic.ARDK.AR.ARSessionEventArgs;
using Niantic.ARDK.AR.HitTest;
using Niantic.ARDK.Extensions;
using Niantic.ARDK.Utilities;
using Niantic.ARDK.Utilities.Input.Legacy;
using Niantic.ARDKExamples.Helpers;
using UnityEngine;
using UnityEngine.Events;

[RequireComponent(typeof(ARPlaneManager))]
[RequireComponent(typeof(ARCursorRenderer))]
public class ARCustomPlacement : MonoBehaviour
{
    [SerializeField] private GameObject _placementObject;
    [SerializeField] private Material _shadowMaterial;
    
    private ARPlaneManager _ARPlaneManager;
    private ARCursorRenderer _ARCursorRenderer;

    
    private bool _objectIsPlaced = false;
    private Vector3 _placementRotation;

    private PlanefindingGrid[] _planesInScene;

    public GameObject placedObject;
    
    public UnityEvent onObjectPlaced;

    private void Start()
    {
        _ARPlaneManager = GetComponent<ARPlaneManager>();
        _ARCursorRenderer = GetComponent<ARCursorRenderer>();
        
        onObjectPlaced.AddListener(SwitchToShadows);
        onObjectPlaced.AddListener(RemoveExtraPlanes);
    }

    // Update is called once per frame
    void Update()
    {
        if (!_ARCursorRenderer.spawnedCursorObject) return;
        
        _placementRotation = new Vector3(0, _ARCursorRenderer.Camera.transform.eulerAngles.y, 0);
        
        if (_objectIsPlaced) return;
        if (PlatformAgnosticInput.touchCount <= 0) return;
        if (PlatformAgnosticInput.touchCount > 0)
        {
            PlaceObject();
            
            _ARCursorRenderer.spawnedCursorObject.SetActive(false);
            _ARPlaneManager.enabled = false;
        }

    }
    
    private void PlaceObject()
    {
        placedObject = Instantiate(_placementObject, _ARCursorRenderer.spawnedCursorObject.transform.position, Quaternion.Euler(_placementRotation));
        _objectIsPlaced = true;
        onObjectPlaced.Invoke();
    }

    private void SwitchToShadows()
    {
        foreach (GameObject plane in _ARPlaneManager._planeLookup.Values)
        {
            Renderer renderer = plane.GetComponentInChildren<MeshRenderer>();
            renderer.material = _shadowMaterial;
        }
    }

    private void RemoveExtraPlanes()
    {
        _planesInScene = FindObjectsOfType<PlanefindingGrid>();
        float shortestDistance = float.PositiveInfinity;
        GameObject closestPlane = _planesInScene[0].gameObject;

        foreach (PlanefindingGrid plane in _planesInScene) // find closest plane
        {
            float distance = Vector3.Distance(plane.transform.position, placedObject.transform.position);
            
            if (distance < shortestDistance)
            {
                closestPlane = plane.gameObject;
                shortestDistance = distance;
            }
        }
        
        Debug.Log($"Closest Plane: {closestPlane.gameObject.name}");
        
        foreach (PlanefindingGrid plane in _planesInScene) // remove other planes from scene
        {
            if (plane.gameObject == closestPlane) continue;
            
            Destroy(plane.gameObject);
        }
    }

   
    
    
}
