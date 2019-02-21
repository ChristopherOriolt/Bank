///////////////////////////////////
// Account header file
///////////////////////////////

#include <iostream>
using namespace std;

#ifndef Account_H_
#define Account_H_

class Account {
private:
	Customer * customer; 
	double Balance = 0.00;
	int AccountNumber;
	Transaction[] TransactionArray;
public:
	double getBalance(); 
	string getCustomer(); 
	string toString();
	void setCustomer(customer);
	void SetBalance(double newBalance);
};

#endif