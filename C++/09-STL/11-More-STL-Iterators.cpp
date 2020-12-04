#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

void display(const std::vector<int> &);
void display(const std::vector<int> &V, std::vector<int>::iterator, std::vector<int>::iterator);
void printList(const std::list<std::string> &);
void iterateMap(const std::map<std::string, std::string> &);
void zero(std::vector<int> &);

int main() {

    // Iterating vector and zeroing all elements:
    std::vector<int> V {1, 2, 3, 4, 5};
    display(V);
    
    zero(V);
    display(V);

    // Constant iterator example:
    // Only iteration is allowed. It is not
    // possible to iterate over the collection
    // and make some changes.
    std::vector<int> W {1, 2, 3, 4, 5, 6};
    std::vector<int>::const_iterator it {W.cbegin()};
    // or use auto
    // auto it = W.cbegin();
    display(W);

    // List example: const reverse iterator
    // std::list is usually implemented as 
    // doubly-linked list.
    std::list<std::string> names {"John", "Jess", "Jordan"};
    printList(names);

    // Map example:
    // Map >> {key, value} pair.
    std::map<std::string, std::string> compLangs {
        { "John"    , "C/C++" },
        { "Jess"    , "Java"  },
        { "Jordan"  , "Rust"  }
    };
    iterateMap(compLangs);

    // Iterate over a subset of a container:
    std::vector<int> Z {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto x = Z.begin() + 3;
    auto y = Z.end() - 4;
    display(Z, x, y);

    return 0;
}

void display(const std::vector<int> &V) {
    std::cout << "[ ";

    for (auto it = V.begin(); it != V.end(); it++)
        std::cout << *it << " ";
    
    std::cout << "]\n";
}

// Overloading display() function
void display(const std::vector<int> &V, std::vector<int>::iterator start, 
                                        std::vector<int>::iterator finish) {
    std::cout << "[ ";

    for (auto it = start; it != finish; it++)
        std::cout << *it << " ";
    
    std::cout << "]\n";                                        
}

void zero(std::vector<int> &V) {
    for (auto it = V.begin(); it != V.end(); it++)
        *it = 0;
}

void printList(const std::list<std::string> &L) {
    std::cout << "[ ";

    for (auto it = L.crbegin(); it != L.crend(); it++)
        std::cout << *it << " ";
    
    std::cout << "]\n";    
}

void iterateMap(const std::map<std::string, std::string> &M) {
    auto it = M.begin();

    while (it != M.end()) {
        std::cout << ">> " << it->first << " likes "
                          << it->second << ".\n";
        it++;
    }
}
