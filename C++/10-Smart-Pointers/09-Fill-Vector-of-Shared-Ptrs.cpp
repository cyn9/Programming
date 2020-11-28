#include <iostream>
#include <vector>
#include <memory>

// Program description:
// A unique pointer p_Vec consists of a vector of shared pointers
// to class Test. make() function creates and returns the unique
// pointer. Based on the num. of data points that user enters,
// fill() func. creates shared pointers and fills the vector with
// push_back. display() func. prints the data in the vector.

class Test;

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make();
void fill(std::vector<std::shared_ptr<Test>> &, int);
void display(const std::vector<std::shared_ptr<Test>> &);

class Test {
    private:
        int data;
    
    public:
        Test()          : data{0}    { std::cout << "Ctor called for (" << this->data << ")." << std::endl; }
        Test(int data)  : data{data} { std::cout << "Ctor called for (" << this->data << ")." << std::endl; }

        ~Test() { std::cout << "Dtor called for (" << this->data << ")." << std::endl; }

        int getData() const { return this->data; }
};

int main() {
    int num;

    std::unique_ptr<std::vector<std::shared_ptr<Test>>> p_Vec;
    p_Vec = make();

    std::cout << "Enter the number of data entry points : ";
    std::cin >> num;

    fill(*p_Vec, num);
    display(*p_Vec);

    return 0;
}

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make() {
    return std::make_unique<std::vector<std::shared_ptr<Test>>>();
}

void fill(std::vector<std::shared_ptr<Test>> &vec, int num) {
    int number {0};

    for (auto i = 0; i < num; i++) {
        std::cout << "Enter data point [" << (i+1) << "] : ";
        std::cin >> number;
        vec.push_back(std::make_shared<Test>(number));
    }
}

void display(const std::vector<std::shared_ptr<Test>> &vec) {
    std::cout << "Displaying vector data:" << std::endl;
    std::cout << "=======================" << std::endl;

    for (const auto &e: vec)
        std::cout << e->getData() << std::endl;

    std::cout << "=======================" << std::endl;
}
