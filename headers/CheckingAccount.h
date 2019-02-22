/////////////////////////////////////
// Data Structures Project 1
// Author: Christopher Oriolt
// 2/20/2019
/////////////////////////////////

#include "Account.h"
#include "Transaction.h"

#ifndef CheckingAccount_H_
#define CheckingAccount_H_

class CheckingAccount : public Account {
public:
    CheckingAccount(Customer* c, double b) : Account(c, b) {
        
    }

    void deposit(double amount) {
        Transaction t = Transaction(AccountNumber, "deposit", amount, "");
        t.processTrans();
        TransactionArray.push_back(t);
        Balance = Balance + amount;
    }

    void withdrawal(double amount) {
        Transaction t = Transaction(AccountNumber, "withdrawal", amount, "");
        t.processTrans();
        TransactionArray.push_back(t);
        Balance = Balance - amount;
    }

    void addInterest() {
        
    }
};

#endif