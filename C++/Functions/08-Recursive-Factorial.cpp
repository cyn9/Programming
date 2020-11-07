#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long);

int main(void) {
	int num {0};
	cout << "Enter a number : ";
	cin >> num;
	
	cout << num << " != " << factorial(num) << endl;

	return 0;
}

unsigned long long factorial(unsigned long long n) {
	if (n == 1)		return 1;
	else			return n * factorial(n-1);
}