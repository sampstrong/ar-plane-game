using System.Collections;
using System.Collections.Generic;
using Niantic.ARDK.AR.ARSessionEventArgs;
using Niantic.ARDK.AR.HitTest;
using Niantic.ARDK.Utilities;
using Niantic.ARDK.Utilities.Input.Legacy;
using Niantic.ARDKExamples.Helpers;
using UnityEngine;

public class ARCustomPlacement : ARCursorRenderer
{
    [SerializeField] private GameObject _placementObject;
    
    
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
        }

    }
    
    private void PlaceObject()
    {
        Instantiate(_placementObject, spawnedCursorObject.transform.position, Quaternion.Euler(_placementRotation));
    }
    
    protected override void _FrameUpdated(FrameUpdatedArgs args)
    {
        var camera = Camera;
        if (camera == null)
            return;

        var viewportWidth = camera.pixelWidth;
        var viewportHeight = camera.pixelHeight;

        // Hit testing for cursor in the middle of the screen
        var middle = new Vector2(viewportWidth / 2f, viewportHeight / 2f);

        var frame = args.Frame;
        // Perform a hit test and either estimate a horizontal plane, or use an existing plane and its
        // extents!
        var hitTestResults =
            frame.HitTest
            (
                viewportWidth,
                viewportHeight,
                middle,
                ARHitTestResultType.ExistingPlaneUsingExtent |
                ARHitTestResultType.EstimatedHorizontalPlane
            );

        if (hitTestResults.Count == 0)
            return;

        if (spawnedCursorObject == null)
            spawnedCursorObject = Instantiate(CursorObject, Vector2.one, Quaternion.identity);

        // Set the cursor object to the hit test result's position
        spawnedCursorObject.transform.position = hitTestResults[0].WorldTransform.ToPosition();

        // Orient the cursor object to look at the user, but remain flat on the "ground", aka
        // only rotate about the y-axis
        spawnedCursorObject.transform.LookAt
        (
            new Vector3
            (
                frame.Camera.Transform[0, 3],
                spawnedCursorObject.transform.position.y,
                frame.Camera.Transform[2, 3]
            )
        );
    }
}
