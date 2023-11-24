#include<iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/video/tracki>

int main() {
    cv::VideoCapture cap(0); // Open the default camera (usually the webcam)

    if (!cap.isOpened()) {
        std::cerr << "Error: Cannot open the camera." << std::endl;
        return -1;
    }

    cv::CascadeClassifier hand_cascade;
    if (!hand_cascade.load("hand_cascade.xml")) { // Load a pre-trained hand cascade classifier
        std::cerr << "Error: Could not load hand cascade." << std::endl;
        return -1;
    }

    cv::Mat frame;
    while (true) {
        cap >> frame; // Capture a frame from the camera

        cv::Mat frame_gray;
        cv::cvtColor(frame, frame_gray, cv::COLOR_BGR2GRAY);

        std::vector<cv::Rect> hands;
        hand_cascade.detectMultiScale(frame_gray, hands, 1.1, 3, 0 | cv::CASCADE_SCALE_IMAGE, cv::Size(30, 30));

        for (const cv::Rect& hand : hands) {
            cv::rectangle(frame, hand, cv::Scalar(0, 255, 0), 2); // Draw a green rectangle around the detected hand
            // Add code to recognize specific gestures and control YouTube here
        }

        cv::imshow("Hand Gesture Control", frame);

        if (cv::waitKey(30) >= 0) {
            break;
        }
    }

    return 0;
}
