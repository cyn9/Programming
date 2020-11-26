#include <iostream>
#include <memory>

class Test {

    private:
        double data;

    public:
        Test()            : data {0.0f} {}
        Test(double data) : data {data} {}
        
        ~Test() {}

        void Foo() { std::cout << "Arbitrary test function Foo is called." << std::endl; }
        void setData(double data) { this->data = data; }

        double getData() const { return this->data; }

};

int main() {

    std::shared_ptr<Test> pTest = std::make_shared<Test>(10.0);

    std::cout << "Number of shared pointers : " << pTest.use_count() << std::endl;
    
    pTest->Foo();
    std::cout << pTest->getData() << std::endl;

    std::shared_ptr<Test> p2 {pTest};
    std::cout << p2->getData() << std::endl;

    std::cout << "Number of shared pointers : " << pTest.use_count() << std::endl;
    
    return 0;

}
