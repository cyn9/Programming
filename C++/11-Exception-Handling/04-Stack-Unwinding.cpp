#include <iostream>

// Make sure the destructors of objects are called or
// dynamically allocated variables are deleted after
// some exception is thrown in a function that was
// also called in another function. When it's not done,
// there might probably be some memory leak.

void a(void);
void b(void);
void c(void);

int main() {
    
    std::cout << "BEGIN: function main()." << std::endl;

    try {
        a();
    }
    catch(int &e) { std::cout << "Error detected in function c()." << std::endl; }

    std::cout << "  END: function main()." << std::endl;

    return 0;
}

void a(void) {
    std::cout << "BEGIN: function a()." << std::endl;
    b();
    // Below this line, the code will not execute.
    std::cout << "  END: function a()." << std::endl;
}

void b(void) {
    std::cout << "BEGIN: function b()." << std::endl;
    c();
    // Below this line, the code will not execute.
    std::cout << "  END: function b()." << std::endl;
}

void c(void) {
    std::cout << "BEGIN: function c()." << std::endl;
    throw 10;
    // Below this line, the code will not execute.
    std::cout << "  END: function c()." << std::endl;
}
