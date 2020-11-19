#include <iostream>
#include <iomanip>

#include <string>

using namespace std;

class Account {
	private:
		string name;
		double balance;

	public:
		// Delegating constructor
		// This only works with initialization lists
		Account(string name, double balance) : name{name}, balance{balance} {}

		// Other constructors
		Account() 					: Account("N/A", 0.0) 		{}
		Account(string name) 		: Account(name, 0.0) 		{}
		Account(double balance) 	: Account("N/A", balance) 	{}

		// Class methods
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