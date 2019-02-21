/////////////////////////////////////
// Data Structures Project 1
// Author: Christopher Oriolt
// 2/20/2019
/////////////////////////////////

#include "Account.h"

double Account::getBalance()
{
	return Balance;
}

Customer* Account::getCustomer()
{
	return customer;
}

string Account::toString() // implement customer 
{
	string output = "hello";
	return output;
}

void Account::setCustomer(Customer)
{
	customer = customer;
}

void Account::SetBalance(double newBalance)
{
	Balance = newBalance;
}