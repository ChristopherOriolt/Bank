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
        const int SAVINGS_INTEREST = 2;
        const int CHECK_INTREST = 3;
        const int CHECK_CHARGE = 4;
        const int OVERDRAFT_PENALTY = 1; 
    
    public:
    /*
        Senior(string n, string ad, int ag, int tn, int cn) : 
        Customer(string n, string ad, int ag, int tn, int cn) {
            //I have no idea if the code above works
        }
        */

        string getType() {
            return "senior";
        }

        //finish methods for this

};

#endif