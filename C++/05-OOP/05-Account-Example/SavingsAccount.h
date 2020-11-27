#pragma once

#include "Account.h"

class SavingsAccount : public Account {

    protected:
        static constexpr double interestRate = 5.00;
    
    public:
        SavingsAccount()                                   : Account("", 0.0)       {}
        SavingsAccount(std::string name)                   : Account(name, 0.0)     {}
        SavingsAccount(std::string name, double balance)   : Account(name, balance) {}

        ~SavingsAccount() {}

        virtual void getAccountInfo() const override;
        virtual void doWithdrawal(double amount) override;
        virtual void makeDeposit(double amount) override;

        void setAccountName(std::string name);
        void setAccountBalance(double balance);

        std::string getAccountName() const;

        double getAccountBalance() const;

};
