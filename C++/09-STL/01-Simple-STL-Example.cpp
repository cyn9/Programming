#include <iostream>

#include <vector>
#include <algorithm>
#include <numeric>

void printVector(std::vector<int> &);

int main() {
    int sum {0};

    std::vector<int> V {1, 5, 3, 4, 8, 0};
    printVector(V);

    // Sort the vector V:
    std::sort(V.begin(), V.end());
    printVector(V);

    // Reverse the order of V:
    std::reverse(V.begin(), V.end());
    printVector(V);

    // Accumulate all the elements:
    sum = std::accumulate(V.begin(), V.end(), sum);
    std::cout << "Sum of all elements in V = " << sum << std::endl;

    return 0;    
}

void printVector(std::vector<int> &V) {
    for (auto e: V)
        std::cout << e << "  ";
    
    std::cout << std::endl;
}