#include <iostream>

int main() {

    // Creating a 2x3 array:
    // # of rows : 2
    // # of columns : 3
    int *row1 = new int[3];
    int *row2 = new int[3];

    int **arr = new int*[2];
    arr[0] = row1;
    arr[1] = row2;

    // Fill the elements of the array:
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = 3*i + 5*j;
        }
    }

    // Print the values:
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << '\n';
    }

    delete [] row1;
    delete [] row2;
    delete [] arr;

    row1 = nullptr;
    row2 = nullptr;
    arr = nullptr;

    return 0;
}
