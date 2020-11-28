#include <iostream>
#include <iomanip>

double average(int &, int &);

int main() {

    int num1 {};
    int num2 {};
    double result {};

    std::cout << "Enter number 1 : ";
    std::cin >> num1;

    std::cout << "Enter number 2 : ";
    std::cin >> num2;

    try {
        result = average(num1, num2);
        std::cout << std::setprecision(3) << "Result : " << result << std::endl;
    }
    catch(int &ex) {
        std::cerr << "Cannot divide by zero." << std::endl;
    }

    return 0;
}

double average(int &x, int &y) {
    if (y == 0)
        throw 0;
    
    return static_cast<double>(x) / y;
}
