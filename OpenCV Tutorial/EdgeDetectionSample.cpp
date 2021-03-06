//
//  EdgeDetectionSample.cpp
//  OpenCV Tutorial
//
//  Created by BloodAxe on 6/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "EdgeDetectionSample.h"

//! Gets a sample name
std::string EdgeDetectionSample::getName() const
{
  return "Edge detection";
}

std::string EdgeDetectionSample::getSampleIcon() const
{
  return "EdgeDetectionSampleIcon.png";
}

//! Returns a detailed sample description
std::string EdgeDetectionSample::getDescription() const
{
  return "Edge detection is a fundamental tool in image processing, machine vision and computer vision, particularly in the areas of feature detection and feature extraction, which aim at identifying points in a digital image at which the image brightness changes sharply or, more formally, has discontinuities. ";
}

//! Processes a frame and returns output image 
bool EdgeDetectionSample::processFrame(const cv::Mat& inputFrame, cv::Mat& outputFrame)
{
  cv::Mat gray;
  getGray(inputFrame, gray);
  
  cv::Mat edges;
  cv::Canny(gray, edges, 50, 150);
  
  cv::cvtColor(edges, outputFrame, CV_GRAY2BGRA);
  return true;
}