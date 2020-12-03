#include <iostream>
#include <memory>

void swap(int *, int *);
void bubbleSort(int *, size_t);
void printArray(int *, size_t);

int main(){
    int array[] = {29, 28, 27, 26, 25, 24, 23, 22, 21, 20,
                   19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 
                    9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    size_t sz = sizeof(array) / sizeof(array[0]);

    // std::cout << ">> Run 0 : ";
    printArray(array, sz);
    
    bubbleSort(array, sz);
    printArray(array, sz);
    
    return 0;
}

void swap(int *a, int *b) {
    int* temp = new int(*a);
    *a = *b;
    *b = *temp;
    delete temp;
}

void bubbleSort(int *arr, size_t sz) {
    auto ptrCount = std::make_unique<int>(0);
    
    for (size_t i = 0; i < sz; i++) {
        for (size_t j = 0; j < sz-1; j++) {
            (*ptrCount)++;
            
            // if ((*ptrCount) < 10)
            //     std::cout << ">> Run " << *ptrCount << " : ";
            // else
            //     std::cout << ">> Run " << *ptrCount << " : ";                
            
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
            
            // printArray(arr, sz);
        }
    }
}

void printArray(int *arr, size_t sz) {
    for (size_t i = 0; i < sz; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
