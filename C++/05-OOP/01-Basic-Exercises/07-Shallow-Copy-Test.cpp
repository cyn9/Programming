 #include <iostream>

using namespace std;

class Shallow {
	private:
		int *data;

	public:	
		Shallow(int d);				// Constructor
		Shallow(const Shallow &);	// Copy constructor	
		~Shallow();					// Destructor

		void setDataValue(int d) { *data = d; }
		int  getDataValue()		 { return *data; }
};

// Constructor implementation
Shallow::Shallow(int d) {
	data = new int;
	*data = d;
}

// Copy constructor implementation
Shallow::Shallow(const Shallow &source) {
	data = new int;
	*data = source.data;
	cout << "Copy constructor called." << endl;
}

// Destructor implementation
Shallow::~Shallow() { 
	delete data;
	cout << "Destructor called. Freeing data." << endl;
}

inline void displayShallow(Shallow);

int main() {
	Shallow obj1 {100};
	displayShallow(obj1);

	Shallow obj2 {obj1};
	obj2.setDataValue(1000);

	return 0;
}

inline void displayShallow(Shallow s) {
	cout << s.getDataValue() << endl;
}