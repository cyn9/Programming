#pragma once

#include <iostream>
#include <iomanip>
#include <string>

class Account {

    protected:
        std::string name;
        double balance;
    
    public:
        Account()                                   : name{"N/A"}, balance{0.0}     {}
        Account(std::string name)                   : name{name}, balance{0.0}      {}
        Account(std::string name, double balance)   : name{name}, balance{balance}  {}

        ~Account() {}

        virtual void getAccountInfo() const;
        virtual void makeDeposit(double amount);
        virtual void doWithdrawal(double amount);

        void setAccountName(std::string name);
        void setAccountBalance(double balance);

        std::string getAccountName() const;

        double getAccountBalance() const;

};
