#include <iostream>
#include <vector>

using namespace std;

void printVector(const vector<string> &);
void changeElements(vector<string> &);

int main() {
    vector<string> vec {"Larry", "Moe", "Curly"};

	changeElements(vec);
    printVector(vec);

    return 0;
}

void printVector(const vector<string> &V) {
    for (auto const &e : V)
        cout << e << " ";
    
    cout << endl;
}

void changeElements(vector<string> &V) {
	for (auto &str : V)
		str = "Funny";
}