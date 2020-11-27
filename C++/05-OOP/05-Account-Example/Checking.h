#pragma once

#include "Account.h"

class Checking : public Account {

    protected:
        static double constexpr withdrawFee = 1.50;
    
    public:
        Checking()                                   : Account("", 0.0)       {}
        Checking(std::string name)                   : Account(name, 0.0)     {}
        Checking(std::string name, double balance)   : Account(name, balance) {}

        ~Checking() {}

        void getAccountInfo() const override;
        void doWithdrawal(double amount) override;

        void setAccountName(std::string name);
        void setAccountBalance(double balance);

        std::string getAccountName() const;

        double getAccountBalance() const;

};
