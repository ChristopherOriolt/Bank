////////////////////////////
// Data Structures Project 1
// Authors: Jeremy Knight
// 2/21/2019
////////////////////////////////

#include <iostream>
#include "Senior.h"
#include "Account.h"
#include "SavingsAccount.h"

using namespace std;

int main() {
    Customer * person1 = new Senior("bob", "this is an address", 29, 8053363, 111111);
    SavingsAccount sa = SavingsAccount(person1, 221.10);
    cout << "customer name: " << sa.getCustomer()->getName() << endl;
    cout << "balance: " << sa.getBalance() << endl;
    sa.withdrawal(2.20);
    cout << "balance after withdrawal: " << sa.getBalance() << endl;
    
}