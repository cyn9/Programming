#include <iostream>
#include <string>
#include <memory>

#include "Account.h"
#include "SavingsAccount.h"
#include "Checking.h"
#include "Trust.h"

int main() {

    std::unique_ptr<Account> acc1 = std::make_unique<SavingsAccount>("John Doe", 3000.00);
    std::unique_ptr<Account> acc2 = std::make_unique<Checking>("Jane Doe", 2500.00);
    std::unique_ptr<Account> acc3 = std::make_unique<Trust>("Judy Doe", 3200.00);

    acc1->getAccountInfo();
    acc2->getAccountInfo();
    acc3->getAccountInfo();

    return 0;
}
