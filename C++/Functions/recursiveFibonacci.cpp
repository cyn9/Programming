#include <iostream>
#include <chrono>

using namespace std;

unsigned long long fib(unsigned long long);

int main(void) {

	auto start = chrono::steady_clock::now();

	cout << "Fibonacci (42) = " << fib(42) << endl;

	auto end = chrono::steady_clock::now();

	cout << "Elapsed time : " 
		 << chrono::duration_cast<chrono::milliseconds> (end - start).count()
		 << " ms." << endl;

	return 0;
}

unsigned long long fib(unsigned long long n) {
	if 	 (n < 2)	return n;
	else			return fib(n-1) + fib(n-2);
}