#include <iostream>

#include "MyString.h"

int main() {
    MyString s1;
    MyString s2 {"Hello, C++."};
    MyString s3 {s2};

    s1.display();
    s2.display();
    s3.display();

    return 0;
}