// new keyword --> allocate storage on the heap

#include <iostream>

using std::cout;
using std::endl;

int main(void) {

	int * iPtr {nullptr};
	iPtr = new int;				// Allocate an integer on the heap.

	cout << iPtr << endl;
	cout << *iPtr << endl;

	*iPtr = 100;

	cout << *iPtr << endl;

	delete iPtr;				// Frees the allocated storage.

	return 0;
}