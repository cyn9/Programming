#include <iostream>
#include <vector>

class Base {

public:
    void print() const { std::cout << "Base class print()" << std::endl; }

};

class A : public Base {

public:
    void print() const { std::cout << "Derived A class print()" << std::endl; }

};

class B : public Base {

public:
    void print() const { std::cout << "Derived B class print()" << std::endl; }

};

class C : public Base {

public:
    void print() const { std::cout << "Derived C class print()" << std::endl; }

};

class D : public C {

public:
    void print() const { std::cout << "Derived D class print()" << std::endl; }

};

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
