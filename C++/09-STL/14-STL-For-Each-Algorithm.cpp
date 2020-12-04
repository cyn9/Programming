#include <iostream>
#include <vector>
#include <algorithm>

// Three methods to use std::for_each():
// [METHOD 1] Functors.
// [METHOD 2] Function pointers.
// [METHOD 3] Lambda expressions.

// Use of functors:
struct SquareFunctor {
    // Overloading () operator:
    void operator()(int x) { std::cout << x*x << " "; }
};

// This is the function object.
SquareFunctor square;

// Regular function for taking square of 
// each element and printing every value:
void sqFoo(int x) {
    std::cout << x*x << " ";
}

int main() {

    // The use of functors:
    // Each element of the vector V will 
    // be squared using functors.
    std::vector<int> V {1, 2, 3, 4, 5, 6};

    std::for_each(V.begin(), V.end(), square);
    std::cout << "\n";

    // The use of function pointers:
    std::for_each(V.begin(), V.end(), sqFoo);
    std::cout << "\n";

    // The use of lambda expression:
    std::for_each(V.begin(), V.end(), [](int x) {
        std::cout << x*x << " ";
    });

    return 0;
}
