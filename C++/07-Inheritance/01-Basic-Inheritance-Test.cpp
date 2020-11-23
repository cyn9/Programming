#include <iostream>
#include <string>

using std::cout;
using std::endl;

// Base class: Account
class Account {

public:
    double balance;
    std::string accName;

    Account()  : balance{0.0}, accName{"N/A"}   { cout << "Account constructor called. " << endl; }
    ~Account()                                  { cout << "Account destructor called. " << endl; }

    void deposit(double amount);
    void withdraw(double amount);

};

void Account::deposit(double amount)    { cout << "Amount deposited (from Account) : " << amount << endl; }
void Account::withdraw(double amount)   { cout << "Amount withdrawn (from Account) : " << amount << endl << endl; }

class SavingsAccount : public Account {

public:
    double interestRate;

    SavingsAccount()  : interestRate{0.0}   { cout << "SavingsAccount constructor called. " << endl; }
    ~SavingsAccount()                       { cout << "SavingsAccount destructor called. " << endl; }

    void deposit(double amount);
    void withdraw(double amount);

};

void SavingsAccount::deposit(double amount)    { cout << "Amount deposited (from SavingsAccount) : " << amount << endl; }
void SavingsAccount::withdraw(double amount)   { cout << "Amount withdrawn (from SavingsAccount) : " << amount << endl << endl; }

int main() {

    Account acc1;
    acc1.deposit(500);
    acc1.withdraw(200);

    Account *acc2 = new Account();
    acc2->deposit(2000);
    acc2->withdraw(600);

    SavingsAccount acc3;
    acc3.deposit(400);
    acc3.withdraw(300);

    SavingsAccount *acc4 = new SavingsAccount();
    acc4->deposit(1000);
    acc4->withdraw(100);

    Account *acc5 = new SavingsAccount();
    acc5->deposit(500);
    acc5->withdraw(250);

    delete acc2, acc4, acc5;

    return 0;

}
