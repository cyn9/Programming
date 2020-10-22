#include <iostream>
#include <iomanip>

using namespace std;

inline double calculateCost(double, double taxRate = 0.06, double shipping = 3.50);

int main(void) {
	double cost = calculateCost(100.0, 0.08, 4.25);

	cout << fixed << setprecision(2);
	cout << cost << endl;

	cost = calculateCost(100.0, 0.08);

	cout << cost << endl;

	cost = calculateCost(200.0);

	cout << cost << endl;

	return 0;
}

inline double calculateCost(double baseCost, double taxRate, double shipping) {
	return baseCost += (baseCost*taxRate) + shipping;
}