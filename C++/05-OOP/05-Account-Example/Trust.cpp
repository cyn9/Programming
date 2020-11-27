#include "Trust.h"

std::ostream &operator<<(std::ostream &os, const Trust &obj) {
    os << "[ Trust Account : " << obj.getAccountName() 
                               << ", Balance : $" << obj.getAccountBalance() 
                               << ", Interest Rate : " << obj.interestRate
                               << "% ]" << std::endl;

    return os;
}

void Trust::getAccountInfo() const {
    std::cout << "[ Trust Account : " << this->getAccountName() 
                                      << ", Balance : $" << this->getAccountBalance() 
                                      << ", Interest Rate : " << this->interestRate
                                      << "% ]" << std::endl;
}

void Trust::setAccountName(std::string name) {
    Account::setAccountName(name);
}

void Trust::setAccountBalance(double balance) {
    Account::setAccountBalance(balance);
}

std::string Trust::getAccountName() const {
    return Account::getAccountName();
}

double Trust::getAccountBalance() const {
    return Account::getAccountBalance();
}

void Trust::doWithdrawal(double amount) {
    if (this->numOfWithdrawals < 4 && amount <= this->getAccountBalance() * 0.20) {
        Account::doWithdrawal(amount);
        numOfWithdrawals++;
    }
    else {
        std::cout << "Withdrawal failed..." << std::endl;
        std::cout << "# of withdrawals : " << this->numOfWithdrawals << std::endl;
        std::cout << "Desired amount for withdrawal : " << amount << std::endl;
    }
}

void Trust::makeDeposit(double amount) {
    amount >= 5000 ? Account::makeDeposit(amount + this->bonus) 
                   : Account::makeDeposit(amount);
}
