#include <iostream>
#include <string>
#include <memory>

#include "Account.h"
#include "SavingsAccount.h"
#include "Checking.h"
#include "Trust.h"

int main() {

    std::unique_ptr<Account> acc1 = std::make_unique<Trust>("John Doe", 3000.00);
    acc1->getAccountInfo();

    return 0;
}
