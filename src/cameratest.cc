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
using namespace std;

// image matrix for input

VideoCapture cap;
Mat dst;
Mat frame;
//vector<Point3f> pixelData; 

void initCamera() 
{  
  

	cap.open(0);// OR advance usage: select any API backend
	int deviceID = 0;             // 0 = open default camera
	int apiID = cv::CAP_ANY;      // 0 = autodetect default API
								  // open selected camera using selected API
	cap.open(deviceID + apiID);

	if (!cap.isOpened())
	{
		cerr << "ERROR! Unable to open camera\n";
	}
}

void updatePixel() { 

	for (;;)
	{
		// wait for a new frame from camera and store it into 'frame'
		cap.read(frame);
		// check if we succeeded
		if (frame.empty()) {
			cerr << "ERROR! blank frame grabbed\n";
			break;
		}

		resize(frame, dst, Size(320, 240), cv::INTER_LINEAR);

		// show live and wait for a key with timeout long enough to show images
		imshow("Live", dst);


		if (waitKey(5) >= 0)
			break;
	}

}
// 		if (frame.empty())
// 		{
// 			cerr << "ERROR! blank frame grab";
// 			break;
// 		}// show live and wait for a key with timeout long enough to show images

//         resize(frame,dst,Size(320,240),cv::INTER_LINEAR);
//         //Mat to vector
//         pixel.assign((float*)dst.datastart, (float*)dst.dataend);
// //vec(res.begin<float>(), res.end<float>());

//         cout << "pixel=";
//         for(int i=0;i<pixel.size();++i)
//             cout << (Point3f)pixel[i] << ";";
//             cout<< endl;
//         //imshow("Live", dst);
int main()
{
    return 0;
}
