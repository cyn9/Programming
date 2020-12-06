#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

template<typename Container>
void print(const Container &);

struct Person {
    std::string name;
    int age;

    Person()                          : Person("N/A", 0)     {}
    Person(std::string name, int age) : name{name}, age{age} {}

    template<typename Container>
    friend std::ostream &operator<<(std::ostream &os, const Container& obj) {
        for (const auto &e : obj) {
            os << e.name << ", " << e.age << '\n';
        }

        os << "- - - - - - - - - - - - - - -" << '\n';

        return os;   
    }
};

int main() {

    // Vector of people
    std::vector<Person> V;

    V.emplace_back("John", 25);
    V.emplace_back("Joe", 30);
    V.emplace_back();
    std::cout << V;

    // Deque of people
    std::deque<Person> D;

    D.emplace_back("Neo", 28);
    D.emplace_back("Trinity", 27);
    D.emplace_front("Morpheus", 40);
    std::cout << D;

    // Rearrange a vector of integers into
    // a deque where even and odd numbers
    // are separated.
    std::vector<int> nums {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::deque<int> d {};

    for (const auto &e : nums) {
        (e % 2 == 0) ? d.push_front(e) : d.push_back(e);
    }

    print(nums);
    print(d);

    return 0;
}

template<typename Container>
void print(const Container &c) {
    for (const auto &e: c)
        std::cout << e << " ";
    
    std::cout << '\n';
}
