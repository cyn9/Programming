#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

class Test;

void countTest(void);
void countIfTest(void);
void replaceTest(void);
void allOfTest(void);

template<typename Container>
void print(const Container &);

class Test {
    private:
        std::string text;
        int number;

    public:
        Test()                             : text{static_cast<std::string>("N/A")}, number{0} {}
        Test(std::string text, int number) : text{text}, number{number}                       {}
        ~Test() {}

        bool operator<(const Test& rhs) {
            return (this->number < rhs.number);
        }

        bool operator==(const Test& rhs) {
            return (this->text == rhs.text && this->number == rhs.number);
        }

        std::string getText()     const { return this->text; }
        constexpr int getNumber() const { return this->number; }

};

int main() {
    countTest();
    countIfTest();
    replaceTest();
    allOfTest();

    return 0;
}

// The use of std::count() function:
void countTest() {
    int number {};
    std::cout << "Enter a number > ";
    std::cin >> number;

    std::list<int> L {1, 2, 3, 4, 3, 5, 5, 3, 4, 6, 7, 8, 9, 9, 3, 3};
    print(L);

    int count = std::count(L.begin(), L.end(), number);
    std::cout << "Number of occurrences of " << number << " is " << count << ".\n";
}

// The use of std::count_if() function:
void countIfTest() {
    // Example of counting when an element
    // is an even number.
    std::vector<int> V {1, 2, 2, 3, 3, 3, 4, 5, 6, 6, 7, 8, 8, 9, 10, 10};
    print(V);

    int count = std::count_if(V.begin(), V.end(), [](auto x) {
        return (x % 2 == 0);
    });

    std::cout << "Number of even elements : " << count << ".\n";
    std::cout << "Number of odd elements : "  << V.size() - count << ".\n";
}

// The use of std::replace() function:
void replaceTest() {
    std::vector<int> V {1, 2, 2, 3, 3, 1, 4, 5, 1, 1, 2, 5, 1};
    print(V);

    // Replace all ones with zeros.
    std::replace(V.begin(), V.end(), 1, 0);
    print(V);
}

// The use of std::all_of() function:
void allOfTest() {
    std::vector<int> V {1, 2, 2, 3, 3, 1, 4, 5, 1, 1, 2, 5, 1, 11};

    // Check if all elements are less than 10.
    if (std::all_of(V.begin(), V.end(), [](auto x) { return (x < 10); }))
        std::cout << "All elements are less than 10.";
    else
        std::cout << "All elements are not less than 10.";
        
}

// Simple print() function that prints the
// elements inside of the container c.
template<typename Container>
void print(const Container &c) {
    for (auto it = c.begin(); it != c.end(); it++)
        std::cout << *it << " ";
    
    std::cout << "\n";
}
