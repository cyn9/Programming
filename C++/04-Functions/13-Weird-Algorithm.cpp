#include <iostream>

using namespace std;

#define ll long long

int main(void) {
	ll n;
	cout << "Enter a number: ";
	cin >> n;
	
	cout << n;

	while (n > 1) {
		if (n%2 == 0)	n /= 2;
		else			n = 3*n + 1;

		cout << " " << n;
	}

	cout << endl;

	return 0;
}