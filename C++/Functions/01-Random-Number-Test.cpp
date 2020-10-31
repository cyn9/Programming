#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <time.h>

using namespace std;

static const int MIN_VAL = 1;
static const int MAX_VAL = 6;

inline void printVector(const vector<int> &);
vector<int> genRandVector(unsigned int);

int main(void) {
	unsigned int count {20};

	vector <int> myVec = genRandVector(count);

	cout << "RAND_MAX on my system is : " << RAND_MAX << endl;

	printVector(myVec);

	return 0;
}

inline void printVector(const vector<int> &V) {
	for (auto e : V)  cout << e << "  ";  cout << endl;
}

vector<int> genRandVector(unsigned int count) {
	vector <int> rndNumVec;
	
	srand(time(nullptr));

	for (unsigned i = 0; i < count; i++)
		rndNumVec.push_back(MIN_VAL + rand() % MAX_VAL);

	return rndNumVec;
}