#include <iostream>

using namespace std;

#define ll long long

int main(void) {
	ll n, total = 0, s = 0;
	cin >> n;

	ll nums[n-1];
	for (ll i = 0; i < n-1; i++) {
		cin >> nums[i];
		s += nums[i];
	}

	total = n*(n+1)/2;

	cout << total - s << endl;

	return 0;
}