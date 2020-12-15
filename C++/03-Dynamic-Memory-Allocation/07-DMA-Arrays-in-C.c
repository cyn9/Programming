#include <stdio.h>
#include <stdlib.h>

int main() {

    // Create an array of 10 integers using malloc:
    size_t N = 10;
    int *arr1 = malloc(N * sizeof(int));

    // Initialize the elements of arr1:
    for (size_t i = 0; i < N; i++) {
        arr1[i] = i+1;
    }

    // Print the values:
    for (size_t i = 0; i < N; i++) {
        (i != N-1) ? printf("%d, ", arr1[i]) : printf("%d.", arr1[i]);
    }

    free(arr1);
    arr1 = NULL;
    printf("\n");

    // Create an array of 10 integers using calloc:
    int *arr2 = calloc(N, sizeof(int));

    // Print the values:
    for (size_t i = 0; i < N; i++) {
        (i != N-1) ? printf("%d, ", arr2[i]) : printf("%d.", arr2[i]);
    }

    free(arr2);
    arr2 = NULL;

    return 0;
}