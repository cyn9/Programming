#include <iostream>

using namespace std;

void swapPassByRef(int &, int &);
void swapPassByPtr(int *, int *);

int main(void) {
	int num1 {10};
	int num2 {50};

	cout << endl;

	cout << "PASS BY REF:" << endl;
	cout << "Before swapping: " << endl;
	cout << "num1 = " << num1 << " num2 = " << num2 << endl;
	swapPassByRef(num1, num2);
	cout << "After swapping: " << endl;
	cout << "num1 = " << num1 << " num2 = " << num2 << endl;

	cout << endl;

	// Reset the values.
	num1 = 10;
	num2 = 50;

	cout << "PASS BY PTR:" << endl;
	cout << "Before swapping: " << endl;
	cout << "num1 = " << num1 << " num2 = " << num2 << endl;
	swapPassByPtr(&num1, &num2);
	cout << "After swapping: " << endl;
	cout << "num1 = " << num1 << " num2 = " << num2 << endl;

	cout << endl;

	return 0;
}

void swapPassByRef(int &num1, int &num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

void swapPassByPtr(int *num1, int *num2) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}