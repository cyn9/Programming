#include <iostream>
#include <vector>
#include <set>

int main() {
    std::vector<char> V1 {'A', 'B', 'C', 'D'};

    // Basic instantiation:
    // std::vector<char>::iterator it1 = V1.begin();
    // Or use auto:
    // auto it1 = V1.begin();

    for (auto it = V1.begin(); it != V1.end(); it++)
        std::cout << *it << " ";

    std::cout << std::endl;
    std::set<int> V2 {2, 4, 5, 3, 6, 7, 1, 0, 9, 8};
    
    for (auto it = V2.begin(); it != V2.end(); it++)
        std::cout << *it << " ";     

    std::cout << "\n";

    // Reverse iterator:
    std::vector<int> V3 {1, 2, 3};
    auto rev_it = std::reverse_iterator {V3.rbegin()};
    
    while (rev_it != V3.rend()) {
        std::cout << *rev_it << " ";
        rev_it++;
    }

    return 0;
}
