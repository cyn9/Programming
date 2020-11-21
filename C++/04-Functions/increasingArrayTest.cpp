#include <iostream>

#define ll long long

using namespace std;

int main(void) {
	int n, maxNum = 0;
	cin >> n;
	ll turns = 0;

	for (auto i = 0; i < n; i++) {
		int e;
		cin >> e;
		maxNum = max(e, maxNum);

		turns += maxNum - e;
	}

	cout << turns << endl;

	return 0;
}