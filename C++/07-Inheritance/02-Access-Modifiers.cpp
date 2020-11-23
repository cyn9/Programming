#include <iostream>

using std::cout;
using std::endl;

class Base {

public:
    int a;
    
    Base();
    ~Base();

    void display();

    int getA() const { return this->a; }
    int getB() const { return this->b; }
    int getC() const { return this->c; }

    void setA(int a) { this->a = a; }
    void setB(int b) { this->b = b; }
    void setC(int c) { this->c = c; }

protected:
    int b;

private:
    int c;

};

class Derived : public Base {
    
    // a is accessible.
    // b is protected.
    // c is not accessible.

public:
    Derived();
    ~Derived();

    void changeBaseMembers();
    void printBaseMembers();

};

Base::Base() : a{0}, b{0}, c{0} {}
Base::~Base()                   {}

Derived::Derived() {}
Derived::~Derived() {}

void Base::display() { cout << "a : " << a << ", b : " << b << ", c : " << c << endl; }

void Derived::changeBaseMembers()   { this->a = 5; this->b = 3; }
void Derived::printBaseMembers()    { cout << "a : " << a << ", b : " << b << endl; }

int main() {
    Base b;
    b.display();

    Derived d;
    d.printBaseMembers();
    d.changeBaseMembers();
    d.printBaseMembers();

    d.a = 10;       // This is OK.
    // d.b = 50;    // No access to protected members. Compiler error.
    // d.c = 100;   // No access to private members. Compiler error.

    d.printBaseMembers();

    d.display();    // Also possible to access Base class function 
                    // from a Derived class because display() is public.

    return 0;
}
