#include "MyString.h"

int main() {
    MyString s1 {"Hello"};
    MyString s2 {" C++."};

    MyString s3 = s1 + s2;
    s3.displayString();

    MyString s4 = {"This is another "};
    MyString s5 = s4 + "example.";
    s5.displayString();

    return 0;
}
