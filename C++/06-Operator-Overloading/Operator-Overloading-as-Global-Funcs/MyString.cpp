#include "MyString.h"

MyString::MyString() : str{nullptr} {}

MyString::MyString(const char *s) : str{nullptr} {
    if (s == nullptr) {
        this->str = new char[1];
        *str = '\0';
    }
    else {
        this->str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

MyString::~MyString() { delete [] str; }

void MyString::displayString() const {
    std::cout << this->str << std::endl;
}

int MyString::getLength() const {
    return std::strlen(this->str);
}

const char* MyString::getString() const {
    return this->str;
}

// Equality operator:
bool operator==(const MyString &lhs, const MyString &rhs) {
    return ( std::strcmp(lhs.str, rhs.str) == 0 );
}

// (+) binary operator to concatenate two MyString objects:
MyString operator+(const MyString &lhs, const MyString &rhs) {
    char* buffer = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];

    std::strcat(buffer, lhs.str);
    std::strcat(buffer, rhs.str);

    MyString temp {buffer};
    delete [] buffer;

    return MyString {temp};
}

// (-) unary operator to make string lowercase:
MyString operator-(const MyString &obj) {
    char* temp = new char[std::strlen(obj.str) + 1];
    std::strcpy(temp, obj.str);

    for (auto i = 0; i < std::strlen(temp); i++)
        temp[i] = std::tolower(temp[i]);
    
    return MyString {temp};
}
