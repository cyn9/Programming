#include <iostream>
#include <iomanip>

int main() {
    // No bool alpha, just showing 0 and 1.
    std::cout << "Boolean (5 == 5) : " << (5 == 5) << '\n';
    std::cout << "Boolean (5 == 10) : " << (5 == 10) << '\n';

    // Turn bool alpha on:
    std::cout << std::boolalpha;
    std::cout << "Boolean (5 == 5) : " << (5 == 5) << '\n';
    std::cout << "Boolean (5 == 10) : " << (5 == 10) << '\n';

    // Reset IOS flags:
    std::cout << std::resetiosflags(std::ios::boolalpha);
    std::cout << "Boolean (5 == 5) : " << (5 == 5) << '\n';
    std::cout << "Boolean (5 == 10) : " << (5 == 10) << '\n';

    return 0;
}
