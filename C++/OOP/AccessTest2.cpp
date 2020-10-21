#include <iostream>
#include <iomanip>

#include <string>

using namespace std;

class Account {
	private:
		string name;
		double balance;

	public:
		// Constructor initialization list:
		// Data members of the class are initialized
		// at the same time when the object has been
		// created.
		// *** Very efficient ***
		Account() 			 : name{"None"}, balance {0} { }
		Account(string name) : name{name}, balance{0.0} { }

		// Without initialization list:
		// First object is created. Then, the private
		// members of the class are created and set to
		// default data type values. Later, the class
		// constructor is called that changes the values
		// of private data members based on the constructor
		// parameters.
		// *** Not efficient ***
		Account(string name, int balance) {
			this->name = name;
			this->balance = balance;
		}

		void setName(string);
		void setBalance(double);

		string getName(void);
		double getBalance(void);
};

void Account::setName(string name) { this->name = name; }

void Account::setBalance(double balance) { this->balance = balance; }

string Account::getName(void) { return this->name; }

double Account::getBalance(void) { return this->balance; }

int main(void) {
	cout << fixed << setprecision(2);

	Account acc1;
	acc1.setName("John Doe");
	acc1.setBalance(1000.0);

	cout << "This is " << acc1.getName() << "'s Account" << endl;
	cout << "Current balance is " << acc1.getBalance() << "." << endl;

	cout << endl;

	Account *acc2 = new Account();
	acc2->setName("Jane Doe");
	acc2->setBalance(10000.0);

	cout << "This is " << acc2->getName() << "'s Account" << endl;
	cout << "Current balance is " << acc2->getBalance() << "." << endl;

	cout << endl;

	Account acc3("Johnny Dude", 500.0);

	cout << "This is " << acc3.getName() << "'s Account" << endl;
	cout << "Current balance is " << acc3.getBalance() << "." << endl;

	delete acc2;

	return 0;
}