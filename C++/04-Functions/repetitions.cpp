#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string str;
	cin >> str;

	int len = str.length();
	int curr = 1;
	int rep = 0;

	for (int i = 1; i < len; i++) {
		if (str[i] != str[i-1]) {
			rep = max(rep, curr);
			curr = 0;
		}

		curr++;
	}

	cout << max(rep, curr) << endl;

	return 0;
}