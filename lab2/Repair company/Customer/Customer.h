#pragma once
#include<iostream>
#include<string>
using namespace std;
class Customer {
public:
	Customer(string customerName, string contactInformation);
	void placeOrder();
	void setAddress(string address);
	string getCustomerName();
private:
	string customerName;
	string contactInformation;
	string address;
};
