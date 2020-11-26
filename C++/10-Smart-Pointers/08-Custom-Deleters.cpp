#include <iostream>
#include <memory>

class Test;

void deleterFunc(Test *);

class Test {

    private:
        int data;

    public:
        Test()         : data{0}    { std::cout << "Test constructor, data = " << this->getData() <<std::endl; }
        Test(int data) : data{data} { std::cout << "Test constructor, data = " << this->getData() <<std::endl; }
        ~Test() { std::cout << "Test destructor is called." << std::endl; }

        int getData() const { return this->data; }

};

int main() {

    // Custom deleter using a function:
    std::shared_ptr<Test> tPtr1 {new Test{10}, deleterFunc};
    
    // Custom deleter using lambdas:
    std::shared_ptr<Test> tPtr2 (new Test{10}, [] (Test *t) {
        std::cout << "Custom deleter function is called (lambda)." << std::endl;
        delete t;
    });

    return 0;
}

void deleterFunc(Test *t) {
    std::cout << "Custom deleter function is called (function)." << std::endl;
    
    delete t;
}
