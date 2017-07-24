#include <iostream>
#include "../processorDLL/processorDLL.h"

using namespace std;

int main() {
	char word[6] = "Hello";
	Processor process;
	cout << word << " has " << process.length(word) << " letters." << endl;

	system("pause");
	return 0;
}