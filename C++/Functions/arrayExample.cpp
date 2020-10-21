#include <iostream>

using namespace std;

void print(const int *, size_t);
int *applyAll(const int *const, size_t, const int *const, size_t);

int main(void) {
    int array1[] {1, 2, 3, 4, 5};
    int array2[] {10, 20, 30};

    const size_t size_1 = sizeof(array1) / sizeof(array1[0]);
    const size_t size_2 = sizeof(array2) / sizeof(array2[0]);

    cout << "Array 1  : ";
    print(array1, size_1);
    
	cout << "Array 2  : ";
    print(array2, size_2);

    constexpr size_t size_res = size_1 * size_2;
    int *results = new int[size_res];
    results = applyAll(array1, size_1, array2, size_2);

	cout << "Result   : ";
	print(results, size_res);

	delete[] results;

    return 0;
}

void print(const int *arr, size_t sz) {
	for (size_t i = 0; i < sz; i++)
		cout << *(arr+i) << " ";

	cout << endl;
}

int *applyAll(const int *const arr1, size_t sz1, const int *const arr2, size_t sz2) {
	int *newArr = new int[sz1 * sz2];
	int idx = 0;

	while (idx < sz1 * sz2) {
		for (size_t i = 0; i < sz2; i++) {
			for (size_t j = 0; j < sz1; j++) {
				*(newArr+idx) = arr1[j] * arr2[i];
				idx++;
			}
		}
	}

	return newArr;
}