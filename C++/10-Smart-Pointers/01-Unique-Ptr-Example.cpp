#include <iostream>
#include <memory>

class Base {

    private:
        int data;
    
    public:
        Base()          : Base {0}      { std::cout << "Base constructor." << std::endl; }
        Base(int data)  : data {data}   { std::cout << "Base overloaded constructor." << std::endl; }
                
        ~Base() { std::cout << "Base destructor." << std::endl; }

        void setData(int data)  { this->data = data; }
        int getData() const     { return this->data; }

};

int main() {

    // Raw pointer:
    Base* b = new Base {100};
    // Use of raw pointers need manual "delete" 
    // for deallocation of memory before the
    // program ends. Otherwise, there would be
    // a memory leak.
    delete b;

    // Unique pointer:
    // (1) Automatic deletion of the pointers as
    //     the destructor of unique_ptr is called
    // (2) std::make_unique<T> is more efficient
    //     than using new keyword.
    // (3) Pointers are allocated on the stack.
    std::unique_ptr<Base> b1 = std::make_unique<Base>(100);

    // Without using std::make_unique<T>
    std::unique_ptr<Base> b2 { new Base {1000} };

    // Moving the ownership of an element using
    // std::move() function. New unique_ptr var.
    // will be pointing to the data whereas the 
    // old one will be nullptr.
    std::unique_ptr<Base> b3;
    b3 = std::move(b2);

    // Test if b2 is nullptr or not.
    if (!b2)    std::cout << "b2 is nullptr." << std::endl;
    else        std::cout << "b2 is not nullptr." << std::endl;

    return 0;
}
