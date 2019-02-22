////////////////////////////
// Data Structures Project 1
// Authors: Jeremy Knight
// 2/21/2019
////////////////////////////////

#include <iostream>
#include "Senior.h"
#include "Account.h"
#include "SavingsAccount.h"
#include "Bank.h"

using namespace std;

int main() {
    Bank bank = Bank();
    bank.printAccounts();

    while(true) {
        int accNum = 0;
        cout << "enter a valid account number" << endl;
        cin >> accNum;
        for(int i = 0; i<bank.accountsSize(); i++) {
            if(accNum == bank.getAccount(i)->getAccountNumber()) {
                string type;
                cout << "do you want to withdraw or deposit? (type withdraw or deposit)" << endl;
                cin >> type;
                if(type == "withdraw" || type == "deposit") {
                    //go through deposit/withdraw phase
                    //eventually ask them stop or not? 
                    //if stop put break in while loop
                } else {
                    break;
                }

                
            }
        }
    }

    return 0;
}