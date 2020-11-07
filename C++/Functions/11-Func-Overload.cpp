#include <iostream>
#include <iomanip>

inline int 		addNumbers(int, 	int);
inline double 	addNumbers(double, 	double);

int main(void) {
	std::cout << std::fixed << std::setprecision(2);
	std::cout << addNumbers(10, 20) << std::endl;
	std::cout << addNumbers(10.0, 20.0) << std::endl;

	return 0;

}

inline int 		addNumbers(int a, 	 int b) 	{ return a+b; }
inline double 	addNumbers(double a, double b) 	{ return a+b; }