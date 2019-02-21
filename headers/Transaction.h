/////////////////////////////////////
// Data Structures Project 1
// Author: Christopher Oriolt
// 2/20/2019
/////////////////////////////////

#include "Customer.h"
#include <string>
using namespace std;

#ifndef Transaction_H_
#define Transaction_H_

class Transaction {
private:
    int CustomerNumber = 0;
    string TransactionType;
    int Amount = 0;
    string Fees;
public:
    string processTrans(Customer) {
        
        return "Transaction successful";
    }
};

#endif