/////////////////////////////////////
// Data Structures Project 1
// Author: Christopher Oriolt
// 2/20/2019
/////////////////////////////////

#include "Account.h"

#ifndef CheckingAccount_H_
#define CheckingAccount_H_

class CheckingAccount : public Account {
private:
    Customer * customer;
     double Balance = 0.00;
     int AccountNumber = 0;
     //Transaction[] TransactionArray;
 public:
    CheckingAccount(Customer c, double b) : Account(c, b) {
        
    }

    void deposit(double amount) {

    }

    void withdrawal(double amount) {

    }
    
    void addInterest() {

    }
};

#endif