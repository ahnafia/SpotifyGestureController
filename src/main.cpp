// main.cpp
// Entry point of the gesture controller program.
//
// Responsibilities:
// - Initialize webcam using VideoCaptureManager
// - Capture frames in a loop
// - Pass each frame through FrameProcessor for preprocessing
// - Feed the processed frame to GestureController for gesture recognition
// - Display the live video feed using cv::imshow
// - Handle quitting logic (e.g., Esc key)
// - Orchestrate the flow between all modules
//
// Implementation Steps:
// 1. Create instances of VideoCaptureManager, FrameProcessor, and GestureController
// 2. Open webcam and check for errors
// 3. Enter main loop:
//    a. Capture frame
//    b. Preprocess frame
//    c. Recognize gesture
//    d. Execute action
//    e. Display frame
//    f. Check for quit key
// 4. Release resources and exit cleanly
