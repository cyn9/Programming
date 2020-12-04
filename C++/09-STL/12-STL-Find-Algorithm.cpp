#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    // Finding an element inside a vector:
    std::vector<int> V1 {1, 2, 3, 4, 5};
    int number {2};
    auto loc = std::find(V1.begin(), V1.end(), number);

    if (loc != V1.end())
        std::cout << "Found " << number << " at " << *loc << ".\n";
    else
        std::cout << "Not found...\n";

    return 0;
}
