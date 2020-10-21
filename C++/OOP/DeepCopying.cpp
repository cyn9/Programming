#include <iostream>

using namespace std;

class Deep {
	private:
		int *data;

	public:
		Deep(int d);
		Deep(const Deep &);
		~Deep();

		void setDataValue(int);
		int getDataValue(void);
};

// Constructor implementation
Deep::Deep(int d) {
	data = new int;
	*data = d;
}

// Deep copy constructor
Deep::Deep(const Deep &source) {
	data = new int;
	*data = *source.data;
	cout << "Copy constructor -- deep..." << endl;
}

// Destructor for deep copy object
Deep::~Deep() {
	delete data;
	cout << "Destructor freeing data." << endl;
}

void Deep::setDataValue(int val) { *data = val; }

int Deep::getDataValue() 		 { return *data; }

void displayDeep(Deep);

int main() {
	Deep obj1 {100};
	displayDeep(obj1);

	Deep obj2 {obj1};

	obj2.setDataValue(1000);

	//displayDeep(obj2);

	cout << endl;
	cout << "The value of data in obj1 is " << obj1.getDataValue() << endl;
	cout << "The value of data in obj2 is " << obj2.getDataValue() << endl;

	return 0;
}

void displayDeep(Deep o) {
	cout << o.getDataValue() << endl;
}