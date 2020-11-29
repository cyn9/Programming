#include <iostream>
#include <memory>

class IllegalBalanceException : public std::exception {
    public:
        IllegalBalanceException() noexcept = default;
        ~IllegalBalanceException() = default;
        
        virtual const char* what() const noexcept {
            return "[ERROR] Balance cannot be less than 0.";
        }
};

class InsufficientFundsException : public std::exception {
    public:
        InsufficientFundsException() noexcept = default;
        ~InsufficientFundsException() = default;
        
        virtual const char* what() const noexcept {
            return "[ERROR] Insufficient funds.";
        }
};

class Account {
    protected:
        double balance;
    
    public:
        Account();
        Account(double balance);
        ~Account() {}
        
        virtual void withdraw(double amount);
        
        virtual double getBalance() const { return Account::balance; }
};

class Checking : public Account {
    public:
        Checking() : Account() {}
        Checking(double balance) : Account(balance) {}
        ~Checking() {}
        
        void withdraw(double amount) override;
        
        double getBalance() const override { return Account::getBalance(); }
    
};

Account::Account() : balance{0} {
}

Account::Account(double balance) : balance{balance} {
    if (balance < 0)
        throw IllegalBalanceException();
}

void Account::withdraw(double amount) {
    if (amount > this->balance)
        throw InsufficientFundsException();
    else
        this->balance -= amount;
}

void Checking::withdraw(double amount) {
    Account::withdraw(amount);
}

int main() {
    
    // Either try put a negative balance to the
    // checking account, or try to withdraw more
    // money than the current balance.
    try {
        auto ptr_Acc = std::make_unique<Checking>(500.0);
        std::cout << ptr_Acc->getBalance() << std::endl;
        
        ptr_Acc->withdraw(600.0);
        std::cout << ptr_Acc->getBalance() << std::endl;
    }
    catch(const IllegalBalanceException &e) {
        std::cerr << e.what() << std::endl;
    }
    catch(const InsufficientFundsException &e) {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}
