#pragma once

class MyString {

private:
    char *str;

public:
    // Constructors:
    MyString();
    MyString(const char *);
    MyString(const MyString &source);
    
    ~MyString();

    // Getter methods:
    int getLength() const;
    const char* getString() const;

    void display()  const;

};