#include <iostream>
#include <memory>

class Test;
void Foo(std::shared_ptr<Test> ptr);

class Test {

    private:
        double data;

    public:
        Test()            : data {0.0f} {}
        Test(double data) : data {data} {}
        
        ~Test() {}

        void func() { std::cout << "Arbitrary test function Foo is called." << std::endl; }

};

int main() {
    
    std::shared_ptr<Test> p1 = std::make_shared<Test>(5.6);

    std::cout << "p1 is created:" << std::endl;
    std::cout << "Use count : " << p1.use_count() << std::endl;

    std::cout << "p1 is being fed to Foo() function:" << std::endl;
    Foo(p1);

    std::cout << "Foo() function is terminated:" << std::endl;
    std::cout << "Use count : " << p1.use_count() << std::endl;

    return 0;
}

void Foo(std::shared_ptr<Test> ptr) {
    std::cout << "Use count : " << ptr.use_count() << std::endl;
}
