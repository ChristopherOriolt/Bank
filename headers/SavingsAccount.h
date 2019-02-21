/////////////////////////////////////
// Data Structures Project 1
// Author: Christopher Oriolt
// 2/20/2019
/////////////////////////////////

//wil this commit?
#include "Account.h"

#ifndef SavingsAccount_H_
#define SavingsAccount_H_
class SavingsAccount : public Account {
public:
    SavingsAccount(Customer* c, double b) : Account(c, b) {
        
    }

    void deposit(double amount) {
        Balance = Balance + amount;
    }

    void withdrawal(double amount) {
        Balance = Balance - amount;
    }

    void addInterest() {
        
    }
};

#endif