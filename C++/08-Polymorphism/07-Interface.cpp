#include <iostream>

// Abstract class implementing an interface
// class called "Printable".
class Printable {

public:
    friend std::ostream &operator<<(std::ostream &, const Printable &);

    // Pure virtual function print().
    virtual void print(std::ostream &) const = 0;

};

std::ostream &operator<<(std::ostream &os, const Printable &obj) {
    obj.print(os);
    
    return os;
}

class Account : public Printable {

public:
    Account()           {}
    virtual ~Account()  {}

    virtual void withdraw() const;

    virtual void print(std::ostream &os) const override { os << "Account print."; }

};

class Savings : public Account {

public:
    Savings()           {}
    virtual ~Savings()  {}

    virtual void withdraw() const override;

    virtual void print(std::ostream &os) const override { os << "Savings print."; }

};

void Account::withdraw() const { std::cout << "Account withdraw() function." << std::endl; }
void Savings::withdraw() const { std::cout << "Savings withdraw() function." << std::endl; }

int main() {
    
    Account* a = new Account();
    Account* b = new Savings();

    std::cout << *a << std::endl;
    std::cout << *b << std::endl;

    delete a;
    delete b;

    return 0;
}
