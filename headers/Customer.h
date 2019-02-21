/////////////////////////////////////
//Data Structures Project 1
//author: Jeremy Knight
//2/20/2019
////////////////////////////////

#include <iostream>
#include <string>
#ifndef Customer_H_
#define Customer_H_

using namespace std;

class Customer {
    private:
        string name;
        string address;
        int age;
        int telephone_number;
        int customer_number;
        
    
    public:
        Customer(string n, string ad, int ag, int tn, int cn) {
            name = n;
            address = ad;
            age = ag;
            telephone_number = tn;
            customer_number = cn;
        }

        string getName() {
            return name;
        }
        void setName(string n) {
            name = n;
        }
        string getAddress() {
            return address;
        }
        void setAddress(string a) {
            address = a;
        }
        int getAge() {
            return age;
        }
        void setAge(int a ) {
            age = a;
        }

        int getTelephoneNumber() {
            return telephone_number;
        }
        void setTelephoneNumber(int t) {
            telephone_number = t;
        }
        int getCustomerNumber() {
            return customer_number;
        }
        void setCustomerNumber(int c) {
            customer_number = c;
        }
        /*
        String to_string() {

        }
        */
        virtual string getType()=0;
    };

#endif