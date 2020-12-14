#include <iostream>
#include <iomanip>

int main() {
    int number {255};

    // 0x for HEX
    // 0 for OCT
    std::cout << std::showbase << std::uppercase;
    std::cout << std::dec << number << '\n';
    std::cout << std::hex << number << '\n';
    std::cout << std::oct << number << '\n';

    int x {-50};
    int y {75};

    // showpos -> display + in front of the number
    std::cout << std::dec << '\n';
    std::cout << std::showpos;
    std::cout << x << '\n';
    std::cout << y << '\n';

    return 0;
}
