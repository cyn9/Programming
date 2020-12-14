#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    size_t sz = sizeof(arr) / sizeof(arr[0]);

    int *begin = arr;
    int *end = &arr[sz];

    // Using the pointer arithmetic:
    while (begin != end) {
        std::cout << *begin << " ";
        
        begin++;
    }

    std::cout << '\n';

    // Using begin and end functions:
    auto first = std::begin(arr);
    auto last = std::end(arr);

    while (first != last) {
        std::cout << *first << " ";

        first++;
    }

    std::cout << '\n';

    return 0;
}