#include <iostream>
#include <iomanip>

int main() {
    double num {123456789.987654321};

    std::cout << std::scientific 
              << std::uppercase
              << std::showpos
              << std::setprecision(4);

    std::cout << num << '\n';

    return 0;
}
