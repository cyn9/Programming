#include <iostream>
#include <vector>

using namespace std;

class Move {
	private:
		int *data;

	public:
		Move(int d);
		Move(const Move &);			// Copy constructor
		Move(Move &&) noexcept;		// Move constructor
		~Move();					// Destructor

		void setDataValue(int d)	{ *data = d; }
		int getDataValue(void)		{ return *data; }
};

// Constructor
Move::Move(int d) { 
	data = new int;
	*data = d;
	cout << "Constructor for: " << *data << endl;
}

// Copy constructor implementation
Move::Move(const Move &source) : Move(*source.data) {
	cout << "Copy constructor -- deep copy for: " << *data << endl;
}

// Move constructor implementation
Move::Move(Move &&source) noexcept : data {source.data} {
	source.data = nullptr;
	cout << "Move constructor called -- moving resource: " << *data << endl;
}

// Destructor
Move::~Move() {
	if (data != nullptr)
		cout << "Destructor freeing data for " << *data << endl;
	else
		cout << "Destructor freeing data for nullptr " << endl;

	delete data;
}

int main() {
	vector<Move> myVec;

	for (int i = 1; i <= 8; i++)
		myVec.push_back(Move{i*10});

	return 0;
}