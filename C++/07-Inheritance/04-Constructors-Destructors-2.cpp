#include <iostream>

using std::cout;
using std::endl;

class Base {

private:
    int num;

public:
    Base()        : num {0}     { cout << "Base class no-args constructor called." << endl; }
    Base(int num) : num {num}   { cout << "Base class overloaded constructor called." << endl; }

    ~Base() { cout << "Base class destructor called." << endl;  }

    void display() { cout << "num : " << this->num << endl; }

};

class Derived : public Base {

    // using Base::Base;
    // When overloaded constructor is commented out,
    // the constructor in Base class that matches the
    // to the Derived class will be called.
    // This does not take care of value variable, hence,
    // "value" will have a garbage value in the derived
    // object.

private:
    int value;

public:
    Derived()          : value {10}     { cout << "Derived class no-args constructor called." << endl; }
    Derived(int value) : value {value}  { cout << "Derived class overloaded constructor called." << endl; }

    ~Derived() { cout << "Derived class destructor called." << endl; }

    void display() { cout << "value : " << this->value << endl; }

};

int main() {
    Derived* d = new Derived(500);
    d->display();
    
    return 0;
}
