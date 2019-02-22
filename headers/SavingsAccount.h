/////////////////////////////////////
// Data Structures Project 1
// Author: Christopher Oriolt
// 2/20/2019
/////////////////////////////////

//wil this commit?
#include "Account.h"
#include "Transaction.h"

#ifndef SavingsAccount_H_
#define SavingsAccount_H_
class SavingsAccount : public Account {
public:
    SavingsAccount(Customer* c, double b) : Account(c, b) {
        
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