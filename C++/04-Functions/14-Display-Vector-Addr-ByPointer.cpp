#include <iostream>
#include <vector>

using namespace std;

void display(const vector<string> *const);

int main() {
    
    vector<string> myVec {"Larry", "Moe", "Curly"};
    
    for (size_t i = 0; i < myVec.size(); i++)
        cout << &myVec.at(i) << endl;
    
    cout << endl;
    
    display(&myVec);
    
    return 0;
}

void display(const vector<string> *const V) {
    for (size_t i = 0; i < (*V).size(); i++)
        cout << &(*V).at(i) << endl;
}