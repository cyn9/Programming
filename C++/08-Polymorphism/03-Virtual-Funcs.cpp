#include <iostream>
#include <vector>

class Base { public: virtual void print() const; virtual ~Base() {} };

class A : public Base   { public: virtual void print() const; virtual ~A() {} };
class B : public Base   { public: virtual void print() const; virtual ~B() {} };
class C : public Base   { public: virtual void print() const; virtual ~C() {} };
class D : public C      { public: virtual void print() const; virtual ~D() {} };

void Base::print()  const { std::cout << "Base class print()." << std::endl; }
void    A::print()  const { std::cout << "Derived A class print()." << std::endl; }
void    B::print()  const { std::cout << "Derived B class print()." << std::endl; }
void    C::print()  const { std::cout << "Derived C class print()." << std::endl; }
void    D::print()  const { std::cout << "Derived D class print()." << std::endl; }

int main() {

    Base* p = new Base();
    Base* p1 = new A();
    Base* p2 = new B();
    Base* p3 = new C();
    Base* p4 = new D();
    
    std::vector<Base *> V {p, p1, p2, p3, p4};

    for (auto &e: V)
        e->print();

    delete p;
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}
