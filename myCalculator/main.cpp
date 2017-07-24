#include <iostream>
#include "calculatorLib.h"

using namespace std;

int main() {

	cout << "Calculator" << endl;

	Calculator cal;
	cout << cal.increase(1) << endl;

	system("pause");
	return 0;
}