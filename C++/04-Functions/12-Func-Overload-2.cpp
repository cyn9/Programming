#include <iostream>
#include <iomanip>

#include <string>
#include <vector>

inline void print(int);
inline void print(double);
inline void print(std::string);
inline void print(std::string, std::string);
void print(const std::vector <std::string>);

int main(void) {
	std::cout << std::fixed << std::setprecision(2);

	std::vector <std::string> myVec {"ABC", "DEF", "123"};

	char myArr[8] {"Ashley"};	// C-style strings (char-arrays) are also fine.
	std::string myStr {"Ashley"};

	print(5);
	print(5.0);
	// print("Ashley");
	// print(myStr);
	print(myArr);
	print("Ashley", "Danny");
	print(myVec);

	return 0;
}

inline void print(int num) 							{ std::cout << "Printing an int : " << num << std::endl; }
inline void print(double num) 						{ std::cout << "Printing a double : " << num << std::endl; }
inline void print(std::string str) 					{ std::cout << "Printing a string : " << str << std::endl; }
inline void print(std::string s1, std::string s2) 	{ std::cout << "Printing two strings : " << s1 << " and " << s2 << std::endl; }

void print(const std::vector <std::string> V) {
	for (auto e : V)
		std::cout << e << "\t";

	std::cout << std::endl;
}