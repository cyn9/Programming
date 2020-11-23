#include <iostream>

using std::cout;
using std::endl;

class Base {

private:
    int x;

public:
    Base()                  : x{0}      { cout << "Base no-args constructor." << endl; }
    Base(int x)             : x{x}      { cout << "Base overloaded constructor." << endl; }
    Base(const Base &src)   : x{src.x}  { cout << "Base copy constructor." << endl; }

    Base &operator=(const Base &);

    ~Base() { cout << "Base destructor." << endl; }

    void display() { cout << "x : " << this->x << endl; }

};

Base &Base::operator=(const Base &rhs) {
    cout << "Base class overloaded copy assignment operator." << endl;

    if (this == &rhs)
        return *this;
    
    this->x = rhs.x;

    return *this;    
}

class Derived : public Base {

private:
    int y;

public:
    Derived()                   : y{0}                  { cout << "Derived no-args constructor." << endl; }
    Derived(int y)              : Base {10}, y{y}       { cout << "Derived overloaded constructor." << endl; }
    Derived(const Derived &src) : Base {src}, y{src.y}  { cout << "Derived copy constructor." << endl; }

    // Copy constructor should include Base {src} in the
    // initializers lists in order to do proper slicing.
    // Then, when we copy Derived object, we can ensure
    // that the Base object is also copied.

    Derived &operator=(const Derived &);

    ~Derived() { cout << "Derived destructor." << endl; }

    void display() { Base::display(); cout << "y : " << this->y << endl; }

};

Derived &Derived::operator=(const Derived &rhs) {
    cout << "Derived class overloaded copy assignment operator." << endl;

    if (this == &rhs)
        return *this;
    
    Base::operator=(rhs);
    this->y = rhs.y;

    return *this;
}

int main() {

    // Base b1 {100};
    // Base b2 {b1};
    // b1 = b2;
    
    // b1.display();

    Derived d1 {5};
    d1.display();

    Derived d2 = d1;
    d2.display();

    return 0;
}