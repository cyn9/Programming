#include <iostream>

template<typename T1, typename T2>
struct Pair_t {
    T1 x;
    T2 y;
};

template<typename T1, typename T2>
void print(Pair_t<T1, T2> *p) {
    std::cout << "x : " << p->x << ", y : " << p->y << "." << std::endl;
}

int main() {

    Pair_t<int, int>            p1 {5, 3};
    Pair_t<int, double>         p2 {4, 6.6};
    Pair_t<float, std::string>  p3 {3.05f, "Hello, C++."};

    print(&p1);
    print(&p2);
    print(&p3);

    return 0;
}
