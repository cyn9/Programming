#include <iostream>
#include <cstring>

#include "MyString.h"

// No-args constructor:
MyString::MyString() : str{nullptr} {
    this->str = new char[1];
    *str = '\0';
}

// Overloaded constructor for C-style string:
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

// Copy constructor:
MyString::MyString(const MyString &source) : str{nullptr} {
    this->str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

// Destructor:
MyString::~MyString() {
    delete[] this->str;
}

void MyString::display() const {
    std::cout << this->str << " : " << getLength() << "." << std::endl;
}

int MyString::getLength() const {
    return std::strlen(this->str);
}

const char* MyString::getString() const {
    return this->str;
}
