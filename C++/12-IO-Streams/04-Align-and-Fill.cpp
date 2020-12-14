#include <iostream>
#include <iomanip>
#include <string>

int main() {
    double num {1234.5678};
    std::string str {"Hello, C++..."};

    std::cout << std::setfill('-') 
              << std::setw(12) << std::left << num
              << std::setfill('*')
              << std::setw(25) << std::right << str <<'\n';

    return 0;
}
