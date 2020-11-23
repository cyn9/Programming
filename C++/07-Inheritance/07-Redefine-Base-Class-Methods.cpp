#include <iostream>

using std::cout;
using std::endl;

/* * * * * * * * *
 * Account class *
 * * * * * * * * */

class Account {

protected:
    double balance;

public:
    Account()               : balance{0.0}      {}
    Account(double balance) : balance{balance}  {}

    ~Account() {}

    friend std::ostream &operator<<(std::ostream &, const Account &);

    double getBalance() const { return this->balance; }

    void deposit(double);
    void withdraw(double);

};

void Account::deposit(double amount) {
    this->balance += amount;
}

void Account::withdraw(double amount) {
    if (amount > this->balance) {
        cout << "Trying to withdraw $" << amount << "..." << endl;
        cout << "Insufficient funds..." << endl;
    }
    else {
        cout << "Trying to withdraw $" << amount << "..." << endl;
        this->balance -= amount;
    }
}

std::ostream &operator<<(std::ostream &os, const Account &src) {
    os << "Balance : $" << src.getBalance() << endl;
    return os;
}

/* * * * * * * * * * * * *
 * Savings Account class *
 * * * * * * * * * * * * */

class SavingsAccount : public Account {

protected:
    double interestRate;

public:
    SavingsAccount()                                    : SavingsAccount{0.0, 0.0}                      {}
    SavingsAccount(double balance, double interestRate) : Account{balance}, interestRate{interestRate}  {}

    ~SavingsAccount() {}

    friend std::ostream &operator<<(std::ostream &, const SavingsAccount &);

    // Redefining deposit method.
    // Withdraw method is inherited.
    void deposit(double);

    double getInterestRate() const { return this->interestRate; }

};

void SavingsAccount::deposit(double amount) {
    cout << "Processing to deposit $" << amount << "..." << endl;
    
    Account::deposit(amount += (amount * this->interestRate/100));
}

std::ostream &operator<<(std::ostream &os, const SavingsAccount &src) {
    os << "Savings account balance : $" << src.getBalance() << ", Interest rate : " << src.getInterestRate() << "%." << endl;
    return os;
}

int main() {
    
    SavingsAccount* sa = new SavingsAccount(100.0, 5.0);
    cout << *sa;

    sa->deposit(100);
    cout << *sa;

    sa->withdraw(105);
    cout << *sa;

    sa->withdraw(200);
    cout << *sa;

    return 0;

}