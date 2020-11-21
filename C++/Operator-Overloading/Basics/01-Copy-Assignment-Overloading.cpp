#include <iostream>
#include <cstring>

// Syntax for overloading copy assignment operation:
// Prototype:
// ClassName &operator=(const ClassName &);
// Implementation:
// ClassName &ClassName::operator=(const ClassName &source);

class MyString {

private:
    char *str;

public:
    MyString();
    MyString(const char *);
    MyString(const MyString &);
    ~MyString();

    MyString &operator=(const MyString &);

    const char* getString() const;
    void printString() const;

};

MyString::MyString() : str{nullptr} {}

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

MyString::~MyString() { delete [] str; }

// Deep copying
MyString &MyString::operator=(const MyString &source) {
    if (this == &source)
        return *this;
    
    delete [] str;

    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);

    return *this;
}

const char* MyString::getString() const {
    return this->str;
}

void MyString::printString() const {
    std::cout << getString() << std::endl;
}

int main() {

    MyString s1 {"Hello..."};
    MyString s2;

    s2 = s1;

    s2 = "Testing copy assignment overloading.";

    s1.printString();
    s2.printString();

    return 0;
}
