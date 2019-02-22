/////////////////////////////////////
// Data Structures Project 1
// Author: Christopher Oriolt
// 2/20/2019
/////////////////////////////////

#include <iostream>
#include "Customer.h"
#include "Senior.h"
#include <vector>
#include "Transaction.h"
using namespace std;

#ifndef Account_H_
#define Account_H_

class Account {
protected:
	Customer * customer; 
	double Balance = 0.00;
	int AccountNumber = 0;
	vector<Transaction> TransactionArray;
	//Transaction[] TransactionArray;
public:

	
	Account(Customer* c, double b) {
		customer = c;
		Balance = b;
		AccountNumber = customer->getCustomerNumber();
		//AccountNumber = (rand() % 1000) + 1;
	}

	double getBalance() {
		return Balance;
	} 

	Customer* getCustomer() {
		return customer;
	} 

	string toString() {
		string s = customer->getName() + " Balance: " + to_string(Balance) + " Account Number: " + to_string(AccountNumber);  
		return s;
	}

	void setCustomer(Customer* c) {
		customer = c;
	}

	void SetBalance(double newBalance) {
		Balance = newBalance;
	}
	int getAccountNumber() {
		return AccountNumber;
	}

	virtual void deposit(double amount)=0;
	virtual void withdrawal(double amount)=0;
	virtual void addInterest()=0;
};

#endif