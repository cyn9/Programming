#include <iostream>

using std::cout;
using std::endl;

class Base {

public:
    Base()  { cout << "Base class constructor called." << endl; }
    ~Base() { cout << "Base class destructor called." << endl;  }

};

class Derived : public Base {

public:
    Derived()  { cout << "Derived class constructor called." << endl; }
    ~Derived() { cout << "Derived class destructor called." << endl;  }

};

int main() {

    Base* b = new Base();
    delete b;

    cout << "- - - - - - - - - - - - - - - - - - - - " << endl;

    Derived* d = new Derived();
    delete d;

    return 0;
}