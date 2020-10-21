/* Character Functions
	For C-style strings:
	#include <cctype>	-->		function_name(char)
	#include <cstring>	-->		copy, concat, compare, ...
	#include <cstdlib>	-->		convert string to integer, float, ...
*/

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main(void) {

	/*
	char str[80];

	strcpy(str, "Hello ");
	strcat(str, "there");

	cout << strlen(str) << endl;

	cout << boolalpha;
	cout << ((strcmp(str, "Hello there.") != 0) ? "Not equal." : "Equal.") << endl;
	*/

	/*
	char firstName[20] {};
	char lastName[20] {};
	char fullName[40] {};

	size_t len {0};

	cout << "Enter your first name >> ";
	cin >> firstName;
	len += strlen(firstName);

	cout << "Enter your last name >> ";
	cin >> lastName;
	len += strlen(lastName);

	cout << "Your first name is " << firstName << "." << endl;
	cout << "Your last name is " << lastName << "." << endl;

	strcpy(fullName, firstName);
	strcat(fullName, " ");
	strcat(fullName, lastName);

	cout << "Your full name is " << fullName << "." << endl;
	cout << "Your full name has " << len << " characters." << endl;
	*/

	/*
	char fullName[40] {};
	cout << "Enter your full name >> ";
	cin.getline(fullName, 40); // Get the whole line.

	cout << "Your full name is " << fullName << "." << endl;
	
	for (size_t i = 0; i < strlen(fullName); i++)
		if (isalpha(fullName[i]))
			fullName[i] = toupper(fullName[i]);

	cout << "Your full name is " << fullName << "." << endl;
	*/

	return 0;
}