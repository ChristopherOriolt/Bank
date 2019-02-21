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
private:
	Customer * customer; 
	double Balance = 0.00;
	int AccountNumber = 0;
	//Transaction[] TransactionArray;
public:

	/*
	Account(Customer c, double b) {
		customer = c;
	}
	*/

	double getBalance(); 
	Customer* getCustomer(); 
	string toString();
	void setCustomer(Customer);
	void SetBalance(double newBalance);
	virtual void deposit(double amount) const = 0;
	virtual void withdrawal(double amount) const = 0;
	virtual void addInterest() const = 0;
};

#endif