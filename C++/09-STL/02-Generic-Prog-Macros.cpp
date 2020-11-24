#include <iostream>

#define MAX(a, b)   ((a > b) ? a : b)

int main() {

    std::cout << MAX(3, 4) << std::endl;
    std::cout << MAX(2, 2) << std::endl;
    std::cout << MAX(5.5, 1.3) << std::endl;
    std::cout << MAX('a', 'A') << std::endl;

    return 0;
}