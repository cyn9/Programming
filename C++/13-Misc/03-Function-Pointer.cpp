#include <iostream>

void print(char, unsigned);

int main () {
    print('*', 10);

    // Creating a function pointer to print():
    void (*fn_ptr)(char, unsigned) = &print;

    // Invoking function with function pointer:
    // Method 1:
    (*fn_ptr)('!', 5);

    // Method 2:
    fn_ptr('#', 3);

    return 0;
}

void print(char ch, unsigned count) {
    for (unsigned i = 0; i < count; i++) {
        std::cout << ch;
    }

    std::cout << '\n';
}
