/////////////////////////////////////
//Data Structures Project 1
//author: Jeremy Knight
//2/20/2019
////////////////////////////////

#include <iostream>
#include <string>
#include "Customer.h"
#ifndef Senior_H_
#define Senior_H_

using namespace std;

class Senior : public Customer {
    private:
        Const int SAVINGS_INTEREST = 
        Const int CHECK_INTREST =
        Const int CHECK_CHARGE =
        Const int OVERDRAFT_PENALTY = 
    
    public:
        Senior(string n, string ad, int ag, int tn, int cn) : 
        Customer(string n, string ad, int ag, int tn, int cn) {
            //I have no idea if the code above works
        }

        string getType() {
            return "senior";
        }

};

#endif