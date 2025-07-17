// FrameProcessor.hpp
// Purpose: Declares functions or a class for frame preprocessing operations.
// This module prepares frames for gesture recognition by applying necessary transformations.
//
// Responsibilities:
// - Resize frames to the required input shape for the model
// - Convert frames to grayscale or other formats as needed
// - Normalize pixel values
// - (Future) Add hand detection or ROI extraction logic
//
// Usage:
// 1. Pass raw frames from VideoCaptureManager to FrameProcessor
// 2. Use processFrame() to apply preprocessing steps
// 3. (Future) Use detectHand() or extractROI() for hand localization
//
// Methods to implement:
// - cv::Mat processFrame(const cv::Mat& input): Applies resizing, grayscale, normalization
// - (Future) cv::Rect detectHand(const cv::Mat& input): Detects hand region
// - (Future) cv::Mat extractROI(const cv::Mat& input, const cv::Rect& roi): Extracts region of interest
//
// Dependencies: OpenCV (cv::Mat, cv::resize, cv::cvtColor, etc.)

#pragma once
#include <opencv2/core.hpp>

// Applies resizing, grayscale conversion, and normalization to the input frame.
cv::Mat processFrame(const cv::Mat& input);

// Detects the hand region in the input frame and returns a bounding rectangle.
cv::Rect detectHand(const cv::Mat& input);

// Extracts the region of interest (ROI) from the input frame based on the given rectangle.
cv::Mat extractROI(const cv::Mat& input, const cv::Rect& roi);


