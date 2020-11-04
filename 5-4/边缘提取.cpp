#include<iostream>
#include<opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int  main()
{
	VideoCapture cap;
	cap.open(0);
	if (!cap.isOpened())
	{
		cout << "不能打开视频文件" << endl;
		return-1;

	}
	Mat frame;
	while (1)
	{
		cap.read(frame);
		Mat sobel_Mat;
		Sobel(frame, sobel_Mat, -1, 1, 0, 5);
		imshow("sobel_Mat", sobel_Mat);
		waitKey(30);
	}
}