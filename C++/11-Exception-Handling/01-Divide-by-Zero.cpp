#include <iostream>
#include <exception>

int main() {

    double num1 {};
    double num2 {};
    double result {};

    std::cout << "Enter number 1 : ";
    std::cin >> num1;

    std::cout << "Enter number 2 : ";
    std::cin >> num2;

    try {
        if (num2 == 0) throw 0;

        result = num1 / num2;
        std::cout << "Result : " << result << std::endl;
    } 
    catch(int &ex) {
        std::cerr << "Cannot divide by zero." << std::endl;
    }

    return 0;
}
