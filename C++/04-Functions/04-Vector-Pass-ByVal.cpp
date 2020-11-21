#include <iostream>
#include <string>
#include <vector>

using namespace std;

inline void vectorPassByValFunc(vector <string>);
void printVector(const vector <string>);

int main(void) {
	vector <string> myVec {"Ashley", "Matt", "Sam"};

	cout << "Before : \t";
	printVector(myVec);

	vectorPassByValFunc(myVec);

	cout << "After  : \t";
	printVector(myVec);

	return 0;
}

inline void vectorPassByValFunc(vector <string> V) {
	V.clear();
}

void printVector(const vector <string> V) {
	for (auto e : V)
		cout << e << "  ";

	cout << endl;
}