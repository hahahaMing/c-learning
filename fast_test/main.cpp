#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/calib3d/calib3d.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>
#include <fstream>
using namespace cv;
using namespace std;
int main() {
    ifstream fin("/home/ming/git/c-learning/fast_test/data/calibdata.txt"); /* 标定所用图像文件的路径 */
    string filename;
    while (getline(fin,filename)) {
        cout<<filename<<endl;
    }

    cout<<"00000000000000000000000000000000"<<endl;
    fin.close();
    ifstream fin2("/home/ming/git/c-learning/fast_test/data/calibdata.txt");
    while (getline(fin2,filename)) {
        cout<<filename<<endl;
    }

}