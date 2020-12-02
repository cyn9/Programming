#include <iostream>
#include <string>
#include <memory>

template<int N>
class Array {
    private:
        int size {N};
        int array[N];
    
    public:
        Array() = default;
        Array(int val) { for (auto &e: array)  e = val; }
        ~Array() {}

        // Overloading subscript operator:
        int &operator[](int index) { return array[index]; }

        // Overloading the stream extraction operator:
        friend std::ostream &operator<<(std::ostream &os, const Array<N> &obj) {
            os << "[ ";
            for (const auto &e: obj.array) {
                os << e << " ";
            }
            os << "]" << std::endl;
            return os;
        }

        void fill(int val) {
            for (auto &e: array)  e = val;
        }

        int getSize() const { return this->size; }
};

int main() {
    Array<3> myNums;
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
    Array<2> otherNums {1000};
    std::cout << otherNums;

    // Another implementation of a generic Array class
    // template with a unique pointer that points to 
    // the object where all elements are 500.
    auto p = std::make_unique<Array<5>>(500);
    std::cout << "Pointer p:" << std::endl;
    std::cout << *p;
    std::cout << "The size of *p is " << p->getSize() << "." << std::endl;

    return 0;
}
