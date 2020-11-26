#include <iostream>
#include <memory>

class B;

class A {

    public:
        A()  { std::cout << "Constructor A." << std::endl; }
        ~A() { std::cout << "Destructor A." << std::endl; }

        std::shared_ptr<B> bPtr;

        void setB(std::shared_ptr<B> &bPtr) { this->bPtr = bPtr; }

};

class B {

    public:
        B()  { std::cout << "Constructor B." << std::endl; }
        ~B() { std::cout << "Destructor B." << std::endl; }

        // Making this a weak pointer allows
        // to break circular reference and 
        // helps avoiding memory leak. In this
        // case A owns B.
        std::weak_ptr<A> aPtr;

        void setA(std::shared_ptr<A> &aPtr) { this->aPtr = aPtr; }

};

int main() {

    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();

    a->setB(b);
    b->setA(a);
    
    return 0;
}
