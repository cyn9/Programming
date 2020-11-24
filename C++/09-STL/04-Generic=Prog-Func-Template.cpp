#include <iostream>
#include <string>

template <typename T> T min(T, T);

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

int main() {

    Person p1 {"John Doe", 32};
    Person p2 {"Jane Doe", 27};

    std::cout << min(p1, p2).name << " is younger." << std::endl;

    return 0;
}

template <typename T>
T min(T a, T b) {
    return ((a < b) ? a : b);
}
