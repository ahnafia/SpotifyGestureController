// VideoCaptureManager.hpp
// Purpose: Encapsulates and manages webcam capture using OpenCV's cv::VideoCapture.
// This class abstracts away direct usage of cv::VideoCapture to keep main code clean and modular.
//
// Responsibilities:
// - Initialize and configure the webcam
// - Capture frames from the webcam
// - Release the camera resource cleanly
// - Provide an interface for frame retrieval
//
// Usage:
// 1. Create an instance of VideoCaptureManager
// 2. Call open() to initialize the webcam
// 3. Use getFrame() to capture frames in a loop
// 4. Call release() when done
//
// Methods to implement:
// - bool open(int cameraIndex = 0): Opens the webcam
// - bool getFrame(cv::Mat& frame): Captures a frame
// - void release(): Releases the webcam resource
// - bool isOpened() const: Checks if webcam is open
//
// Dependencies: OpenCV (cv::VideoCapture, cv::Mat)


#pragma once
#include <opencv2/core.hpp>

// Opens the webcam with the specified camera index (default is 0).
bool open(int cameraIndex = 0);

// Captures a frame from the webcam and stores it in the provided cv::Mat reference.
// Returns true if the frame was successfully captured.
bool getFrame(cv::Mat& frame);

// Releases the webcam resource.
void release();

// Returns true if the webcam is currently open.
bool isOpened();

