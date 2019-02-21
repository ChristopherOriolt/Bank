/////////////////////////////////////
// Data Structures Project 1
// Author: Christopher Oriolt
// 2/20/2019
/////////////////////////////////

#include "Customer.h"

#ifndef Adult_H_
#define Adult_H_

class Adult : public Customer {
private:
    const int SAVINGS_INTEREST = 3;
    const int CHECK_INTREST = 2;
    const int CHECK_CHARGE = 5;
    const int OVERDRAFT_PENALTY = 4;
public:
    Adult(string n, string ad, int ag, int tn, int cn) :
    Customer(n, ad, ag, tn, cn) {

    }

    string getType() {
        return "Adult";
    }

    //finish methods
};

#endif