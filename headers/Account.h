/////////////////////////////////////
// Data Structures Project 1
// Author: Christopher Oriolt
// 2/20/2019
/////////////////////////////////

#include <iostream>
#include "Customer.h"
#include "Senior.h"
using namespace std;

#ifndef Account_H_
#define Account_H_

class Account {
protected:
	Customer * customer; 
	double Balance = 0.00;
	int AccountNumber = 0;
	//Transaction[] TransactionArray;
public:

	
	Account(Customer* c, double b) {
		customer = c;
		Balance = b;
	}

	double getBalance() {
		return Balance;
	} 

	Customer* getCustomer() {
		return customer;
	} 

	string toString() {
		string s = customer->getName() + " Balance: " + to_string(Balance) + " Account Number: " + to_string(AccountNumber);  
		
	}

	void setCustomer(Customer* c) {
		customer = c;
	}

	void SetBalance(double newBalance) {
		Balance = newBalance;
	}

	virtual void deposit(double amount)=0;
	virtual void withdrawal(double amount)=0;
	virtual void addInterest()=0;
};

#endif