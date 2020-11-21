#include <iostream>

using namespace std;

void printArray(const int [], size_t);
void setArray(int [], size_t, int);
void changeElement(int [], int, int);

int main(void) {

	int nums[] {1, 2, 3, 4, 5};
	size_t sz = sizeof(nums) / sizeof(nums[0]);

	cout << "Size of the array : " << sz << endl;

	cout << "Elements are : ";
	printArray(nums, sz);

	int nums2[] {100, 98, 90, 86, 84};
	size_t sz2 = sizeof(nums2) / sizeof(nums2[0]);
	printArray(nums2, sz2);

	setArray(nums2, sz2, 100);
	printArray(nums2, sz2);

	changeElement(nums2, 50000, 0);
	printArray(nums2, sz2);

	return 0;
}

void printArray(const int numbers[], size_t sz) {
	for (size_t i = 0; i < sz; i++)
		cout << numbers[i] << "  ";

	cout << endl;
}

void setArray(int numbers[], size_t sz, int value) {
	for (size_t i = 0; i < sz; i++)
		numbers[i] = value;
}

void changeElement(int numbers[], int value, int idx) {
	numbers[idx] = value;
}