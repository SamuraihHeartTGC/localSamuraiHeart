#include "Debug.h"
#ifdef KeBi

#include <iostream>
#include <opencv2/opencv.hpp>


using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
    cout << "扣1复活科比:";
    Mat img;
    img = imread("kebi.jpg");
    if (img.empty())
    {
        cout << "请确认图像文件名是否正确" << endl;
        return -1;
    }
    int num;
    cin >> num;


    imshow("test", img);

    cout << "孩子们我回来啦~";
    waitKey(0);
    return 0;
}


#endif
