#include <iostream>
#include <string>
#include <memory>

template<typename T, int N>
class Array {
    private:
        size_t size {N};
        T array[N];
    
    public:
        Array() = default;
        Array(T val) { for (auto &e: array)  e = val; }
        ~Array() {}

        // Overloading subscript operator:
        T &operator[](int index) { return array[index]; }

        // Overloading the stream extraction operator:
        friend std::ostream &operator<<(std::ostream &os, const Array<T, N> &obj) {
            os << "[ ";
            for (const auto &e: obj.array) {
                os << e << " ";
            }
            os << "]" << std::endl;
            return os;
        }

        void fill(T val) {
            for (auto &e: array)  e = val;
        }

        size_t getSize() const { return this->size; }
};

int main() {
    Array<short, 3> myNums;
    std::cout << "myNums:" << std::endl;
    std::cout << "The size of myNums is " << myNums.getSize() << "." << std::endl;
    std::cout << myNums; // This will print garbage values.

    myNums.fill(100);
    std::cout << "The size of myNums is " << myNums.getSize() << "." << std::endl;
    std::cout << myNums; // All elements are 100.

    // Changing each element separately if desired.
    myNums[0] = 200;
    myNums[2] = 300;
    std::cout << myNums;

    // Also, it's possible to use single-arg constructor
    // when creating an instance of Array<T>.
    std::cout << "otherNums:" << std::endl;
    Array<int, 2> otherNums {1000};
    std::cout << otherNums;

    // Another implementation of a generic Array class
    // template with a unique pointer that points to 
    // the object where all elements are 500.
    auto p = std::make_unique<Array<double, 5>>(500.0);
    std::cout << "Pointer p:" << std::endl;
    std::cout << *p;
    std::cout << "The size of *p is " << p->getSize() << "." << std::endl;

    Array<std::string, 5> strArray {std::string{"Hello, C++."}};
    std::cout << strArray;

    return 0;
}
