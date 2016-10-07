//////////////////////////////////////////////////////////////////////////////////////////////////////////
// OPEN CV - SMOOTHING IMAGES TUTORIAL

#include <iostream>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>



using namespace std;
using namespace cv;

int main(int c, char** v) {

    cout << "OpenCV Tutorial - Smoothing Images" << endl;


    Mat image = imread("1474605_10152119787690348_1306530646_n.jpg", IMREAD_COLOR);

    if (!image.data)
    {
        cout << "Could not find images." << endl;
        return -1;
    }


    namedWindow("Win1", WINDOW_AUTOSIZE);
    imshow("Win1", image);

    waitKey(0);




    return 0;
}