#include <iostream>
#include "cv.h"

using namespace std;
using namespace cv;

int main() {

	Mat A = (Mat_<double>(3, 1) << 1, 1, 1);
	Mat B = (Mat_<double>(1, 3) << 1, 1, 1);
	Mat C;
	C = A*B;

	cout << C << endl;

	system("pause");
	return 0;
}