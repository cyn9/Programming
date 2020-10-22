#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void) {
	int *arrayPtr {nullptr};
	int size {};

	cout << "Enter the array size : ";
	cin >> size;

	// Allocate array on the heap during the runtime.
	arrayPtr = new int[size];	// Allocate array on the heap.

	delete[] arrayPtr;

	return 0;
}