/////////////////////////////////////
// Data Structures Project 1
// Author: Christopher Oriolt
// 2/20/2019
/////////////////////////////////

#include "Senior.h"
#include "Adult.h"
#include "Student.h"
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include <vector>
using namespace std;

#ifndef Bank_H_
#define Bank_H_

class Bank {
private:
    vector<Account*> Accounts;
    Account* iterator(int a){
        for(int i = 0; i < Accounts.size(); i++){
            if(a == Accounts.at(i) -> getCustomer() -> getCustomerNumber){
                return Accounts.at(i);
            }
        }
        cout << "Account not found" << endl;
        return NULL;
    }
public:
    Bank(){
        Customer * person1 = new Senior("Bob", "Address", 71, 8053363, 111111);
        Customer * person2 = new Senior("Jack", "Address", 83, 1674655, 111112);
        Customer * person3 = new Student("kyle", "Address", 18, 3607784, 111113);
        Customer * person4 = new Student("Karen", "Address", 19, 3345589, 111114);
        Customer * person5 = new Adult("Ashley", "Address", 26, 3209951, 111115);
        Customer * person6 = new Adult("Mike", "Address", 33, 5506378, 111116);

        Account* sa1 = new SavingsAccount(person1, 200.10);
        Account* ch1 = new CheckingAccount(person2, 100);
        Account* sa2 = new SavingsAccount(person3, 1500.50);
        Account* ch2 = new CheckingAccount(person4, 550.20);
        Account* sa3 = new SavingsAccount(person5, 2000.25);
        Account* ch3 = new CheckingAccount(person6, 330);

        Accounts.push_back(sa1);
        Accounts.push_back(sa2);
        Accounts.push_back(sa3);
        Accounts.push_back(ch1);
        Accounts.push_back(ch2);
        Accounts.push_back(ch3);
    }

    void addAccount(Account*) {
        
    }   

    void makeDeposit(int a, double amount) {
        
    }

    void makeWithdrawal(int a, double amount) {
        
    }

    int getAccount(int) {

    }
};

#endif