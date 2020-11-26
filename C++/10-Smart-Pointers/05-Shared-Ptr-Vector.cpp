#include <iostream>
#include <memory>
#include <vector>

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

    std::vector<std::shared_ptr<Test>> *V = new std::vector<std::shared_ptr<Test>>;
    V->reserve(2);

    std::shared_ptr<Test> p1 = std::make_shared<Test>(3.2);
    std::shared_ptr<Test> p2 {p1};

    // It's possible to push shared pointers
    // to vectors as copying works just fine.
    V->push_back(p1);
    V->push_back(p2);

    std::cout << "Size of V : " << V->size() << std::endl;

    for (const auto &e: *V) {
        e->Foo();
        std::cout << "Data : " << e->getData() << std::endl;
    }

    return 0;
}
