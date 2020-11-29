#include <iostream>
#include <memory>
#include <exception>

class IllegalNumberException : public std::exception {
    public:
        IllegalNumberException() noexcept = default;
        ~IllegalNumberException() = default;

        virtual const char* what() const noexcept {
            return "[ERROR] Data must be a positive number.";
        }
};

class Test {
    private:
        int data;

    public:
        Test();
        Test(int data);
        ~Test() = default;

        int getData() const;
        void print() const;
};

Test::Test() : data{0} {}
Test::Test(int data) : data {data} {
    if (data <= 0)
        throw IllegalNumberException{};
}

int Test::getData() const {
    return this->data;
}

void Test::print() const {
    std::cout << "Data = " << this->getData() << "." << std::endl;
}

int main() {

    try {
        auto tPtr = std::make_unique<Test>(0);
        tPtr->print();
    }
    catch(const IllegalNumberException &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
