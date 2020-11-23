#include <iostream>

using std::cout;
using std::endl;

class Base {

private:
    int x;

public:
    Base()      : x{0} { cout << "Base no-args constructor." << endl; }
    Base(int x) : x{x} { cout << "Base overloaded constructor." << endl; }
    
    ~Base() { cout << "Base destructor." << endl; }

    void print() { cout << "x : " << x << endl; }

};

class Derived : public Base {

private:
    int y;

public:
    Derived()       : Base{0},   y{0}     { cout << "Derived no-args constructor." << endl; }
    Derived(int y)  : Base{2*y}, y{y}     { cout << "Derived overloaded constructor." << endl; }

    ~Derived() { cout << "Derived destructor." << endl; }

    void print() { Base::print(); cout << "y : " << y << endl; }

};


int main() {

    Derived* d = new Derived(10);
    d->print();

    delete d;

    return 0;

}