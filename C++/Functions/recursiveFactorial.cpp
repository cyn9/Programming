#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long);

int main(void) {
	cout << "8 ! = " << factorial(8) << endl;

	return 0;
}

unsigned long long factorial(unsigned long long n) {
	if (n == 1)		return 1;
	else			return n * factorial(n-1);
}