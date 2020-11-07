#include <iostream>

using namespace std;

void printNumber(void);

int main(void) {
	printNumber();
	printNumber();

	return 0;
}

void printNumber() {
	static int runCount {0};
	static int num {5000};
	
	cout << "TEST RUN #" << runCount+1 << endl;
	cout << "Local static number is " << num << " (START)" << endl;
	num += 1000;
	cout << "Local static number is " << num << " (END)" << endl;

	runCount++;
}