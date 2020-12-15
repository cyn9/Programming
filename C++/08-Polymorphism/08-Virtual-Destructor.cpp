#include <iostream>

class Base {
    public:
        Base()          { std::cout << "Base ctor" << '\n'; }
        virtual ~Base() { std::cout << "Base dtor" << '\n'; }

        // Without virtual destructor, upon deleting 
        // the pointer b, derived class destructor will
        // never be called. This causes a memory leak.

        // In other words, when deleting a child class object
        // through a pointer to the parent class, there is
        // an undefined behavior if the parent class has no
        // virtual destructor.
};

class Derived : public Base {
    public:
        Derived()  { std::cout << "Derived ctor" << '\n'; }
        ~Derived() { std::cout << "Derived dtor" << '\n'; }
};

int main() {
    Base *b = new Derived();
    delete b;

    return 0;
}