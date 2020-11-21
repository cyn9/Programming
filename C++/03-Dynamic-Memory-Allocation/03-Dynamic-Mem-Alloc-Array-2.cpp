#include <iostream>

using namespace std;

int main() {
    double *dPtr {nullptr};
    size_t sz {10};
    
    dPtr = new double[sz];
    
    for (size_t i = 0; i < sz; i++) {
        *(dPtr + i) = i * 3;
        cout << *(dPtr + i) << "\tat\t" << dPtr + i << endl;
    }
    
    delete[] dPtr;
    
    return 0;
}
