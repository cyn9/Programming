/* 
 * * * * * * * * * * * * * *
 *	Letter Pyramid Program *
 * * * * * * * * * * * * * *
 */ 

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string str {};
	string temp {};
	int myFancyIncredibleCrazyNumber {};

	cout << "Please, enter a string : ";
	getline(cin, str);

	for (size_t i = 0; i < str.length(); i++) {
		int numOfChars = 2*i + 1;

		for (size_t n = str.length(); n > i; n--)	cout << " ";

		for (size_t j = 0; j <= i; j++)
			temp = str.substr(0, j+1);

		for (size_t k = 0; k < size_t(numOfChars); k++) {
			if (k < temp.length())
				cout << temp.at(k);
			else
				cout << temp.at(numOfChars-k-1); 
		}
		cout << endl;
	}

	return 0;
}