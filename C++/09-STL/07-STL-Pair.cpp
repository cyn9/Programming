#include <iostream>
#include <utility>
#include <vector>

int main() {
    std::pair<int, double>        p1 {5, 3.45};
    std::pair<std::string, float> p2 {"Hello, C++", 3.45f};
    std::pair<int, int>           p3 {10, 20};

    std::cout << "<" << p1.first << ", " << p1.second << ">" << std::endl;
    std::cout << "<" << p2.first << ", " << p2.second << ">" << std::endl;
    std::cout << "<" << p3.first << ", " << p3.second << ">" << std::endl;

    return 0;
}