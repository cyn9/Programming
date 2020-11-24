#include <iostream>
#include <string>

template <typename T> T min(T, T);
template <typename T1, typename T2> void Foo(T1, T2);

struct Person {
    std::string name;
    int age;

    // In order work with structs, compare 
    // operator "<" must be overloaded. When
    // two structs are compared this method
    // is called. If not implemented, compiler
    // cannot find a match for "operator<".
    bool operator<(const Person &rhs) const {
        return this->age < rhs.age;
    }

};

// Overloading "<<" stream operator in order
// to be able to use inside Foo() function
// that includes "cout <<".
std::ostream &operator<<(std::ostream &os, const Person &obj) {
    os << obj.name << " " << obj.age << std::endl;
    return os;
}

int main() {

    Person p1 {"John Doe", 32};
    Person p2 {"Jane Doe", 27};

    std::cout << min(p1, p2).name << " is younger." << std::endl;

    Foo(p1, p2);

    return 0;
}

template <typename T>
T min(T a, T b) {
    return ((a < b) ? a : b);
}

template <typename T1, typename T2>
void Foo(T1 a, T2 b) {
    std::cout << a << b << std::endl;
}
