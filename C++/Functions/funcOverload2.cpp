#include <iostream>
#include <iomanip>

#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(const vector <string>);

int main(void) {
	cout << fixed << setprecision(2);

	vector <string> myVec {"ABC", "DEF", "123"};

	char myArr[8] {"Ashley"};	// C-style strings (char-arrays) are also fine.
	string myStr {"Ashley"}

	print(5);
	print(5.0);
	// print("Ashley");
	// print(myStr);
	print(myArr);
	print("Ashley", "Danny");
	print(myVec);

	return 0;
}

void print(int num) {
	cout << "Printing an int : " << num << endl;
}

void print(double num) {
	cout << "Printing a double : " << num << endl;
}

void print(string str) {
	cout << "Printing a string : " << str << endl;
}

void print(string s1, string s2) {
	cout << "Printing two strings : " << s1 << " and " << s2 << endl;
}

void print(const vector <string> V) {
	for (auto e : V)
		cout << e << "\t";

	cout << endl;
}