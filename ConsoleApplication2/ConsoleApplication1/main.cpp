#include "opencv2/highgui/highgui.hpp" 
#include "opencv2/imgproc/imgproc.hpp" 
using namespace cv; 

int main( )
{ 
	//【1】载入原始图
	Mat srcImage=imread("1.jpg"); 

	//【2】显示原始图
	imshow( "均值滤波【原图】", srcImage ); 

	//【3】进行均值滤波操作
	Mat dstImage3, dstImage5, dstImage7;
	blur( srcImage, dstImage3, Size(3, 3));
	blur(srcImage, dstImage5, Size(5, 5));
	blur(srcImage, dstImage7, Size(7, 7));

	//【4】显示效果图
	imshow( "均值滤波【效果图3】" , dstImage3);
	imshow("均值滤波【效果图5】", dstImage5);
	imshow("均值滤波【效果图7】", dstImage7);

	waitKey( 0 );     
} 