// Some examples of auto keyword

#include <iostream>

int main() {
    // Const and variable from a const variable:
    // y is not a const. Qualifier of x is discarded
    // with the automatic type inference. If y is 
    // needed to be a const, it must be explicitly
    // declared.
    const int x {10};
    auto y = x;
    const auto z = x;

    // Use of auto with a reference:
    // Qualifier is not discarded with a reference.
    const int n {0};
    auto &nRef = n;

    // Const qualifier is not discarded when the
    // new variable is initialized with pointers.
    // aPtr is a pointer to a const int. There is no
    // need for * to specify that aPtr is a pointer.
    const int a {1};
    auto aPtr = &a;

    // Generating an initializer list with auto:
    // list is of std::initializer_list<T> with T
    // being an int.
    auto list = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    return 0;
}