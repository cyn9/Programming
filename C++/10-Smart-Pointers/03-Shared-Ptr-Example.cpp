#include <iostream>
#include <memory>

int main() {

    std::shared_ptr<int> ptr1 { new int{100} };

    // use_count() function is to return how many
    // pointers are in use to point to the same
    // heap element.
    std::cout << ptr1.use_count() << std::endl;

    // Shared pointers support copy or assignment
    // operations as well as move semantics.
    std::shared_ptr<int> ptr2 {ptr1};

    std::cout << ptr1.use_count() << std::endl;
    std::cout << ptr2.use_count() << std::endl;

    // Resets the ptr1 but ptr2 is still in use.
    ptr1.reset();

    std::cout << ptr1.use_count() << std::endl;
    std::cout << ptr2.use_count() << std::endl;

    return 0;
}
