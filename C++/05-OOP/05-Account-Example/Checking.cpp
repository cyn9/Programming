#include "Checking.h"

void Checking::getAccountInfo() const {
    std::cout << "[ Checking Account : " << this->getAccountName() 
                                         << ", Balance : $" << this->getAccountBalance() 
                                         << "]" << std::endl;
}

void Checking::setAccountName(std::string name) {
    Account::setAccountName(name);
}

void Checking::setAccountBalance(double balance) {
    Account::setAccountBalance(balance);
}

std::string Checking::getAccountName() const {
    return Account::getAccountName();
}

double Checking::getAccountBalance() const {
    return Account::getAccountBalance();
}

void Checking::doWithdrawal(double amount) {
    std::cout << "Checking withdrawal." << std::endl;
    Account::doWithdrawal(amount + withdrawFee);
}
