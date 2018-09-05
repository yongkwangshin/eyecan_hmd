#ifndef CAMERA_H_
#define CAMERA_H_

#include<iostream>
#include<vector>
#include <sstream>
#include <string>
#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/opencv.hpp"
#include "opencv2/xfeatures2d.hpp"
#include <stdlib.h> 
#include <vector>
#include <cstdlib>

using namespace cv;

extern Mat dst;

void initCamera();
void updatePixel();

#endif
