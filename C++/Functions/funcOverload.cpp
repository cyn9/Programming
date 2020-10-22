#include <iostream>
#include <iomanip>

using namespace std;

inline int 		addNumbers(int, 	int);
inline double 	addNumbers(double, 	double);

int main(void) {
	cout << fixed << setprecision(2);
	cout << addNumbers(10, 20) << endl;
	cout << addNumbers(10.0, 20.0) << endl;

	return 0;

}

inline int 		addNumbers(int a, 	 int b) 	{ return a+b; }
inline double 	addNumbers(double a, double b) 	{ return a+b; }