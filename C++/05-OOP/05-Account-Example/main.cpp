#include <iostream>
#include <string>
#include <memory>

#include "Account.h"
#include "SavingsAccount.h"
#include "Checking.h"

int main() {

    std::unique_ptr<Account> acc1 = std::make_unique<Checking>("John Doe", 3000.00);
    acc1->getAccountInfo();

    return 0;
}
