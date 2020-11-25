#include <iostream>
#include <memory>
#include <vector>

class Test {

    private:
        int data;
    
    public:
        Test()          : Test {0}      { std::cout << "Base constructor." << std::endl; }
        Test(int data)  : data {data}   { std::cout << "Base overloaded constructor." << std::endl; }
                
        ~Test() { std::cout << "Base destructor." << std::endl; }

        void setData(int data)  { this->data = data; }
        int getData() const     { return this->data; }

};

int main() {

    std::vector < std::unique_ptr<Test> > V;
    V.reserve(7);

    for (size_t i = 0; i < V.capacity(); i++)
        V.push_back(std::make_unique<Test>(100*i));

    // Loop must use reference as unique pointers
    // cannot be copied. The best way is to use
    // const reference.
    for (const auto &e: V)
        std::cout << e->getData() << std::endl;

    return 0;
}
