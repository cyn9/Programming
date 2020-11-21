#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};
    
    cout << "Size of int ptr is " << sizeof(p1) << endl;
    cout << "Size of double ptr is " << sizeof(p2) << endl;
    cout << "Size of unsigned long long ptr is " << sizeof(p3) << endl;
    cout << "Size of vector ptr is " << sizeof(p4) << endl;
    cout << "Size of string ptr is " << sizeof(p5) << endl;
    
    return 0;
}
