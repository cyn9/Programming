#include <iostream>
#include <iomanip>

class ArithmeticException    {};
class NegativeValueException {};

double average(int &, int &);

int main() {

    int km {};
    int lt {};
    double result {};

    std::cout << "Enter the distance (km) : ";
    std::cin >> km;

    std::cout << "Enter the amount (lt) : ";
    std::cin >> lt;

    try {
        result = average(km, lt);
        std::cout << "Usage is : " << result << " km/lt." << std::endl;
    }
    catch (const ArithmeticException &e) {
        std::cerr << "Cannot divide by zero." << std::endl;
    }
    catch (const NegativeValueException &e) {
        std::cerr << "Cannot have negative values." << std::endl;;
    }

    return 0;
}

double average(int &x, int &y) {
    if (y == 0) {
        // Amount of gas cannot be zero.
        throw ArithmeticException();
    }

    if (x < 0 || y < 0) {
        // Distance or amount of gas cannot be negative.
        throw NegativeValueException();
    }

    return static_cast<double>(x) / y;
}
