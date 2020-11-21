#include <iostream>

using namespace std;

void doubleNum(int *);

int main(void) {

	int number {5};
	int *nPtr = &number;
	doubleNum(nPtr);

	cout << number << endl;

	return 0;
}

void doubleNum(int *num) {
	*num *= 2;
}