#include <iostream>

class Base {

public:
    Base() {}
    virtual ~Base() {}

    virtual void printMessage() const;

};

class Derived : public Base {

public:
    Derived() {}
    virtual ~Derived() {}

    // Simply add "override" specifier whenever
    // a derived class method overrides a method
    // from its base class.
    virtual void printMessage() const override;

};

void Base::printMessage() const {
    std::cout << "Hello from the Base class." << std::endl;
}

void Derived::printMessage() const {
    std::cout << "Hello from the Derived class." << std::endl;
}

int main() {

    Base* b = new Base();
    Base* d = new Derived();

    b->printMessage();
    d->printMessage();

    return 0;
}