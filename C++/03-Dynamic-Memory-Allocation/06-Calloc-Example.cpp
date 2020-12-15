#include <iostream>
#include <stdlib.h>

int main() {
    
    // (1) First argument is the number of elements
    //     that will be allocated.
    // (2) Also, with calloc(), the memory is already
    //     initialized to 0 whereas after using malloc
    //     the pointer points to a garbage value.
    int *p = static_cast<int *> (calloc(1, sizeof(int)));

    // Check the return type to see if it is failed to 
    // allocate memory.
    if (p == nullptr) {
        std::cout << "Failed to allocate memory." << '\n';
        return -1;
    }    

    std::cout << ">> Value of p : " << *p << '\n';

    *p = 5;
    std::cout << ">> Value of p : " << *p << '\n';

    free(p);
    p = nullptr;

    return 0;
}
