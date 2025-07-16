// VideoCaptureManager.cpp
// Implements the webcam handling logic declared in VideoCaptureManager.hpp.
//
// Responsibilities:
// - Initialize and configure the webcam (open device, set properties)
// - Capture frames from the webcam
// - Release the camera resource cleanly
// - Handle errors and resource management
//
// Implementation Steps:
// 1. Implement open() to initialize cv::VideoCapture
// 2. Implement getFrame() to retrieve frames
// 3. Implement release() to free resources
// 4. Implement isOpened() to check camera status
