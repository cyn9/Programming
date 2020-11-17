#include <iostream>
#include "test.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    int number {};
    int k {};

    cout << "Enter a number : ";
    cin >> number;

    cout << "Enter a scaler : ";
    cin >> k;

    Test* t;

    cout << number << "x" << k << " = " << t->scale(number, k) << endl;
    cout << number << "^2 = " << t->findSquare(number) << endl;
    cout << number << "^3 = " << t->findCube(number) << endl;

    return 0;
}