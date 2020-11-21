#include <iostream>
#include <cstring>
#include <string>

class MyString {

private:
    char *str;

public:
    MyString();
    MyString(const char *);
    MyString(const MyString &) = default;
    MyString(MyString &&) = default;
    ~MyString();

    MyString &operator=(const MyString &) = default;
    MyString &operator=(MyString &&) = default;

    // Gives the ability to declare operators globally.
    friend bool operator==(const MyString &, const MyString &);
    friend MyString operator+(const MyString &, const MyString &);
    friend MyString operator-(const MyString &);

    void displayString() const;

    int getLength() const;
    const char* getString() const;

};
