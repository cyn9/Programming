/*
	Initialization: var_type * ptr_name {nullptr}
	--> Always initialize
	--> nullptr (C++11) ptr pointing nowhere
	--> & : Address operator (which is unary)
	--> * : Dereferencing operator (accessing the actual value)
	--> All pointers have the same size 
 */

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(void) {

	cout << fixed << setprecision(16);

	// Exercise 1:
	/*
	int num {10};

	cout << "Value of num is " << num << endl;
	cout << "Size of num is " << sizeof(num) << endl;
	cout << "Address of num is " << &num << endl;
	*/

	// Exercise 2:
	/*
	int *p; // p can hold values that are addresses of integers.

	cout << "Value of p is " << p << endl;
	cout << "Address of p is " << &p << endl;
	cout << "Size of p is " << sizeof(p) << endl;

	p = nullptr;
	cout << "Value of p is " << p << endl;
	*/

	// Exercise 3:
	/*
	int score {10};
	double temp {100.7};

	int * score_ptr = &score;
	double * temp_ptr = &temp;
	*/

	// Exercise 4: Dereferencing
	/*
	int score {100};
	int *scorePtr = &score;

	cout << *scorePtr << endl;

	*scorePtr = 80;

	cout << *scorePtr << endl;
	cout << score << endl;
	*/

	// Exercise 5: Vector Pointer
	vector<string> names {"Larry", "Moe", "Curly"};
	vector<string> *vecPtr = &names;

	cout << "First name in the list is " << (*vecPtr).at(0) << endl;
	cout << "First name in the list is " << vecPtr->at(0) << endl;

	// Looping vector ptr with range-based loop
	for (auto e : *vecPtr)
		cout << e << endl;

	cout << endl;
	
	return 0;
}