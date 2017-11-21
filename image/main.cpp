#include <iostream>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

int main()
{
    Mat img = imread("flowers.jpg");
    namedWindow("window",WINDOW_AUTOSIZE);
    imshow("window",img);
    waitKey(0);
    destroyWindow("window");
    return 0;
}
