#include <iostream>

using namespace std;

int main(void) {
	int num = 100;
	cout << num << endl;

	{
		num = 200;
		cout << num << endl;
	}

	num = 300;
	cout << num << endl;

	return 0;
}