﻿//---------------------------------【头文件、命名空间包含部分】----------------------------
//		描述：包含程序所使用的头文件和命名空间
//-------------------------------------------------------------------------------------------------
#include <opencv2\opencv.hpp>  
using namespace cv;  

//-----------------------------------【main( )函数】--------------------------------------------
//		描述：控制台应用程序的入口函数，我们的程序从这里开始
//-------------------------------------------------------------------------------------------------
int main( )  
{  
	//【1】读入视频
	VideoCapture capture("1.avi");

	//【2】循环显示每一帧
	while(1)  
	{  
		Mat frame;//定义一个Mat变量，用于存储每一帧的图像
		capture>>frame;  //读取当前帧

		//若视频播放完成，退出循环
		if (frame.empty())
		{
			break;
		}

		imshow("读取视频",frame);  //显示当前帧
		waitKey(30);  //延时30ms
	}  
	return 0;     
}  