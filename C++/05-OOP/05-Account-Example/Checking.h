#pragma once

#include "Account.h"

class Checking : public Account {
    private:
        int numOfProcesses;

    protected:
        static double constexpr withdrawFee = 1.50;

        friend std::ostream &operator<<(std::ostream &os, const Checking &obj);
    
    public:
        Checking()                                   : Account("", 0.0)       { numOfProcesses = 0; }
        Checking(std::string name)                   : Account(name, 0.0)     { numOfProcesses = 0; }
        Checking(std::string name, double balance)   : Account(name, balance) { numOfProcesses = 0; }

        ~Checking() {}

        void getAccountInfo() const override;
        void makeDeposit(double amount) override;
        void doWithdrawal(double amount) override;

        void setAccountName(std::string name);
        void setAccountBalance(double balance);

        std::string getAccountName() const;

        double getAccountBalance() const;

};
