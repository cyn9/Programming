#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Explicit type casting is needed to be able
    // to use malloc in C++ as it returns void*.
    int *p = static_cast<int *>(malloc(sizeof(int)));
    *p = 10;
    
    std::cout << *p;
    free(p);

    // Null the pointer after deallocation.
    p = nullptr;
    
    return 0;
}
