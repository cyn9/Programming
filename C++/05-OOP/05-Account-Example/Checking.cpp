#include "Checking.h"

void Checking::getAccountInfo() const {
    std::cout << "[" << this->numOfProcesses << "] "
                     << "[ Checking Account : " << this->getAccountName() 
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
    numOfProcesses++; 
    Account::doWithdrawal(amount + withdrawFee);
}

void Checking::makeDeposit(double amount) {
    numOfProcesses++; 
    Account::makeDeposit(amount);
}

