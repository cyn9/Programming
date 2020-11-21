#include <iostream>
#include <string>

#define ll long long

using namespace std;

bool isSorted(const ll *, int);
void printArray(const ll *, int);

int main(void) {

	int n;
	cin >> n;

	ll arr[n];
	int turns {0};

	for (auto i = 0; i < n; i++)
		cin >> arr[i];

	cout << boolalpha;
	
	for (int i = 1; i < n; i++) {
		if (arr[i] < arr[i-1]) {
			arr[i] += 1;
			turns += 1;
			i--;
		}
		else continue;
	}

	cout << turns << endl;

	return 0;
}

bool isSorted(const ll *arr, int size) {
	bool sorted = true;

	for (auto i = 1; i < size; i++) {
		if (arr[i] > arr[i-1])
			sorted = true;
		else {
			sorted = false;
			break;
		}
	}

	return sorted;
}

void printArray(const ll *arr, int size) {
	for (int i = 0; i < size; i++)
		cout << *(arr+i) << " ";

	cout << endl;
}