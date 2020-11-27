#pragma once

#include "SavingsAccount.h"

class Trust : public SavingsAccount {

    protected:
        static int constexpr maxWithdrawalsPerYear = 3;
        static double constexpr bonus = 50.00;
        int numOfWithdrawals;

    public:
        Trust()                                   : SavingsAccount("", 0.0)       { numOfWithdrawals = 0; }
        Trust(std::string name)                   : SavingsAccount(name, 0.0)     { numOfWithdrawals = 0; }
        Trust(std::string name, double balance)   : SavingsAccount(name, balance) { numOfWithdrawals = 0; }

        ~Trust() {}

        void getAccountInfo() const override;
        void doWithdrawal(double amount) override;
        void makeDeposit(double amount) override;

        void setAccountName(std::string name);
        void setAccountBalance(double balance);

        std::string getAccountName() const;

        double getAccountBalance() const;

};
