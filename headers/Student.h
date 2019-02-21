/////////////////////////////////////
// Data Structures Project 1
// Author: Christopher Oriolt
// 2/20/2019
/////////////////////////////////

#include "Customer.h"

#ifndef Student_H_
#define Student_H_

class Student : public Customer {
private:
    const int SAVINGS_INTEREST = 4;
    const int CHECK_INTREST = 3;
    const int CHECK_CHARGE = 2;
    const int OVERDRAFT_PENALTY = 3;
public:
    Student(string n, string ad, int ag, int tn, int cn) : 
    Customer(n, ad, ag, tn, cn) {

    }

    string getType() {
        return "Student";
    }

    //finish methods
};

#endif