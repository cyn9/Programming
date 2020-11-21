#include <iostream>

#include "Vector2D.h"

int main() {
    Vector2D V1 {3, 4};
    V1.printVector();

    Vector2D V2 {2, 3};
    V2.printVector();

    Vector2D V3 = V1 - V2;
    V3.printVector();

    return 0;
}