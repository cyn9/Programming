#include <iostream>

class Base {

public:
    Base()          { std::cout << "Base class ctor." << std::endl; }
    virtual ~Base() { std::cout << "Base class dtor." << std::endl; }

    virtual void Foo() const { std::cout << "Base class Foo" << std::endl; }

};

class A : public Base {

public:
    A()          { std::cout << "Derived A class ctor." << std::endl; }
    virtual ~A() { std::cout << "Derived A class dtor." << std::endl; }

    virtual void Foo() const override { std::cout << "Invoked Derived A class Foo." << std::endl; }

};

class B : public Base {

public:
    B()          { std::cout << "Derived B class ctor." << std::endl; }
    virtual ~B() { std::cout << "Derived B class dtor." << std::endl; }

    virtual void Foo() const override { std::cout << "Invoked Derived B class Foo." << std::endl; }

};

// Some function taking a reference as input.
// Binding dynamically using base class reference.
inline void func(Base &);

int main() {

    A a;
    B b;

    Base &refA = a; // Base class reference: refA
    Base &refB = b; // Base class reference: refA

    func(refA);
    func(refB);

    return 0;
}

inline void func(Base &src) { src.Foo(); }