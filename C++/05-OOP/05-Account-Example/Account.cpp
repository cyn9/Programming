#include "Account.h"

void Account::getAccountInfo() const {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "[ Account : " << this->getAccountName() 
                                << ", Balance : $" << this->getAccountBalance() 
                                << ", Interest Rate : 0%" << " ]" << std::endl;
}

void Account::setAccountName(std::string name) {
    this->name = name;
}

void Account::setAccountBalance(double balance) {
    this->balance = balance;
}

std::string Account::getAccountName() const {
    return this->name;
}

double Account::getAccountBalance() const {
    return this->balance;
}

void Account::makeDeposit(double amount) {
    this->balance += amount;
}

void Account::doWithdrawal(double amount) {
    if (this->balance < amount) {
        std::cout << "Insufficient funds." << std::endl;
        return;
    }
    else {
        this->balance -= amount;
    }
}
