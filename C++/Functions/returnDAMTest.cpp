#include <iostream>

using namespace std;

int * createArray(size_t, int = 0);

void printArray(const int *, size_t);

int main() {

	size_t size = 20;
	int * arrayPtr = createArray(size);

	printArray(arrayPtr, size);

	cout << endl;

	delete[] arrayPtr;

	return 0;
}

int * createArray(size_t sz, int initVal) {
	int * newStorage = new int[sz];

	for (size_t i = 0; i < sz; i++)
		*newStorage++ = initVal;
		//*(newStorage + i) = initVal;

	return newStorage;
}

void printArray(const int *arr, size_t size) {
	for (size_t i = 0; i < size; i++)
		cout << *(arr++) << " ";
}