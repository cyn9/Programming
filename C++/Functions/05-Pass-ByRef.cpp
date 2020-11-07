// Pass by ref is different than pass by pointer
// There is no --pass by ref-- concept in C.

#include <iostream>

using namespace std;

inline void scaleNumber(int &, int);

int main(void) {
	int number = 10;
	int scaleFactor = 5;

	scaleNumber(number, scaleFactor);
	cout << number << endl;

	return 0;
}

inline void scaleNumber(int &num, int k) { 
	num *= k;
}