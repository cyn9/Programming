#include <iostream>
#include <cstring>
#include <string>

using std::cout;
using std::endl;

class MyString {

private:
    char *str;

public:
    MyString();
    MyString(const char *);
    MyString(MyString &&);
    ~MyString();

    MyString &operator=(MyString &&);

    MyString operator-() const;

    const char* getString() const;
    void printString() const;

};

// No-args constructor:
MyString::MyString() : str{nullptr} { cout << "No-args constructor called." << endl; }

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

    cout << "Overloaded constructor called for C-style string." << endl;
}

MyString::MyString(MyString &&source) : str{source.str} {
    source.str = nullptr;

    cout << "Move constructor called." << endl;
}

MyString::~MyString() { 
    delete [] str; 
    cout << "Destructor called." << endl; 
}

// Use of unary (-) operator to make the string lowercase.
MyString MyString::operator-() const {
    cout << "Overloaded constructor called for operator-()." << endl;

    char* temp = new char[std::strlen(str) + 1];
    std::strcpy(temp, str);

    for (auto i = 0; i < std::strlen(temp); i++)
        temp[i] = std::tolower(temp[i]);
    
    return MyString {temp};
}

// This is not deep copying.
// Steal the pointer from the RHS object, then null the RHS object.
MyString &MyString::operator=(MyString &&rhs) {
    if (this == &rhs)
        return *this;
    
    delete [] this->str;
    str = rhs.str;

    rhs.str = nullptr;

    cout << "Move constructor called." << endl;
    
    return *this;

}

const char* MyString::getString() const {
    return this->str;
}

void MyString::printString() const {
    std::cout << getString() << std::endl;
}

int main() {
    MyString str1 {"JOHN DOE"};
    MyString str2 = -str1;

    str1.printString();
    str2.printString();

    return 0;
}