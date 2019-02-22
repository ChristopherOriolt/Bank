/////////////////////////////////////
// Data Structures Project 1
// Authosr: Christopher Oriolt & Jeremy Knight
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

    Transaction(int cn, string type, int a, string f) {
        CustomerNumber = cn;
        TransactionType = type;
        Amount = a;
        Fees = f;
    }

    void processTrans() {
        if(TransactionType == "withdrawal") {
            cout << Amount << " has been withdrawn from " << CustomerNumber << endl; 
        } else if (TransactionType == "deposit") {
            cout << Amount << " has been deposited into " << CustomerNumber << endl;
        } else {
            cout << "no such transaction type!" << endl;
        }

        //return "Transaction successful";
    }

    string to_string() {
        //finish later
        //return to_string(CustomerNumber) + " " + TransactionType + " ";
    }
};

#endif