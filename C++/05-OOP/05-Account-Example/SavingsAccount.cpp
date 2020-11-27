#include "SavingsAccount.h"

std::ostream &operator<<(std::ostream &os, const SavingsAccount &obj) {
    os << "[ Savings Account : " << obj.getAccountName() 
                                 << ", Balance : $" << obj.getAccountBalance() 
                                 << ", Interest Rate : " << obj.interestRate
                                 << "% ]" << std::endl;

    return os;
}

void SavingsAccount::getAccountInfo() const {
    std::cout << "[ Savings Account : " << this->getAccountName() 
                                        << ", Balance : $" << this->getAccountBalance() 
                                        << ", Interest Rate : " << this->interestRate
                                        << "% ]" << std::endl;
}

void SavingsAccount::setAccountName(std::string name) {
    Account::setAccountName(name);
}

void SavingsAccount::setAccountBalance(double balance) {
    Account::setAccountBalance(balance);
}

std::string SavingsAccount::getAccountName() const {
    return Account::getAccountName();
}

double SavingsAccount::getAccountBalance() const {
    return Account::getAccountBalance();
}

void SavingsAccount::doWithdrawal(double amount) {
    Account::doWithdrawal(amount);
}

void SavingsAccount::makeDeposit(double amount) {
    Account::makeDeposit(amount += (amount * this->interestRate/100));
}
