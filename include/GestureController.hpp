// GestureController.hpp
// Purpose: Declares the logic for gesture recognition and action execution.
// This class interprets processed frames and triggers corresponding actions.
//
// Responsibilities:
// - Accept preprocessed frames
// - Interpret gestures using dummy logic (for now)
// - Execute actions (e.g., print message, simulate keystrokes)
// - (Future) Run TorchScript model inference using LibTorch
//
// Usage:
// 1. Pass preprocessed frames from FrameProcessor to GestureController
// 2. Use recognizeGesture() to interpret the gesture
// 3. Use executeAction() to perform the mapped action
//
// Methods to implement:
// - std::string recognizeGesture(const cv::Mat& processedFrame): Returns gesture label
// - void executeAction(const std::string& gesture): Executes action based on gesture
// - (Future) void loadModel(const std::string& modelPath): Loads TorchScript model
// - (Future) std::string inferGesture(const cv::Mat& processedFrame): Runs model inference
//
// Dependencies: OpenCV (cv::Mat), (Future) LibTorch
#pragma once
#include <string>
#include <opencv2/core.hpp>

// Returns the recognized gesture label from the processed frame.
std::string recognizeGesture(const cv::Mat& processedFrame);

// Executes an action based on the recognized gesture.
void executeAction(const std::string& gesture);

//Loads a TorchScript model for gesture recognition.
void loadModel(const std::string& modelPath);

// Runs model inference and returns the gesture label.
std::string inferGesture(const cv::Mat& processedFrame);



