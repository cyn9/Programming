#include <iostream>

class Base {

public:
    void printMessage(void) const { std::cout << "Hello from the Base class." << std::endl; }

};

class Derived : public Base {

public:
    void printMessage(void) const { std::cout << "Hello from the Derived class." << std::endl; }

};

void showMessage(const Base &);

int main() {
    Base b1;
    Derived d1;

    showMessage(b1); // Invokes Base class printMessage().
    showMessage(d1); // Invokes Base class printMessage().

    // With dynamic memory allocation:

    Base* b2 = new Base();
    Base* d2 = new Derived();

    showMessage(*b2); // Invokes Base class printMessage().
    showMessage(*d2); // Invokes Base class printMessage().

    b2->printMessage(); // Invokes Base class printMessage().
    d2->printMessage(); // Invokes Base class printMessage().

    return 0;
}

void showMessage(const Base &obj) {
    obj.printMessage();
}
