#include <iostream>
#include <cstring>

// Syntax for overloading move assignment operation:
// Prototype:
// ClassName &operator=(ClassName &&);
// Implementation:
// ClassName &ClassName::operator=(ClassName &&source);

class MyString {

private:
    char *str;

public:
    MyString();
    MyString(const char *);
    MyString(MyString &&);
    ~MyString();

    MyString &operator=(MyString &&);

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

MyString::MyString(MyString &&source) : str{source.str} {
    source.str = nullptr;
}

MyString::~MyString() { delete [] str; }

// This is not deep copying.
// Steal the pointer from the RHS object, then null the RHS object.
MyString &MyString::operator=(MyString &&rhs) {
    if (this == &rhs)
        return *this;
    
    delete [] this->str;
    str = rhs.str;

    rhs.str = nullptr;
    
    return *this;

}

const char* MyString::getString() const {
    return this->str;
}

void MyString::printString() const {
    std::cout << getString() << std::endl;
}

int main() {

    MyString str1 {"Hello..."};
    str1 = MyString {"Hello, again."};

    str1 = "Farewell...";

    str1.printString();

    return 0;
}
