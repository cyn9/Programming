#include <iostream>

template <typename T> T max(T, T);
template <typename T1, typename T2> T2 max(T1, T2);
template <typename T1, typename T2> void Foo(T1, T2);

int main() {

    std::cout << max<int>(20, 30) << std::endl;
    std::cout << max(7.25, 2) << std::endl;

    return 0;
}

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T1, typename T2>
T2 max(T1 a, T2 b) {
    return (a > b) ? a : b;
}

template <typename T1, typename T2>
void Foo(T1 a, T2 b) {
    std::cout << a << "\t" << b << std::endl;
}
