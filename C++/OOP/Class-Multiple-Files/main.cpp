#include <iostream>
#include "test.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    int number {};

    cout << "Enter a number : ";
    cin >> number;

    Test t;

    cout << number << "^2 = " << t.findSquare(number) << endl;
    cout << number << "^3 = " << t.findCube(number) << endl;

    return 0;
}