#include <iostream>

#include "Rectangle.h"

int main() {
    Rectangle r1 {3, 4};
    r1.printRectangle();

    Rectangle r2 {2, 3};
    r2.printRectangle();

    Rectangle r3 = r1 - r2;
    r3.printRectangle();

    return 0;
}