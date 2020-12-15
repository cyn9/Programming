#include <iostream>

// Making the function name in C++ to have a C 
// linkage so that the client C code can link to
// use the function with an appropriate C header
// file containing the declaration of the function.

// With extern "C", the compiler will not mangle
// the name. Normally, C++ compiler mangles the 
// function name so that functions can be used with
// overloading, but C does not support overloading
// functions. Adding extern "C" linkage in C++, the
// C++ compiler does not mangle the function name
// that is used for linkage.
extern "C" {
    int printf(const char* format, ...);
    int scanf(const char* format, ...);
}

int printf(int x) {
    return x;
}

int main() {
    int number {};
    
    printf("Enter a number : ");
    scanf("%d", &number);

    printf("The number you entered : %d.\n", number);

    return 0;
}
