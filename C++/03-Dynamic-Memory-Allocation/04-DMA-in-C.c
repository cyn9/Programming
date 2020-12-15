#include <stdio.h>
#include <stdlib.h>

int main() {

    // Use of malloc():
    // malloc() returns a void pointer. It only 
    // allocates memory but does not initialize.
    int *p = malloc(sizeof(int));
    *p = 10;

    printf("%d \n", *p);
    free(p);

    // After freeing the memory, p still points
    // to an address which is invalid. In this case,
    // this pointer is called "dangling". That's
    // it is better to assing NULL to this pointer.
    p = NULL;
    
    return 0;
}
