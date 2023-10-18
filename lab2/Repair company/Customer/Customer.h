#pragma once
#include<iostream>
#include<string>
using namespace std;
class Customer {
public:
	Customer(string Customer_name, string contactInformation);
	void placeOrder();
	void setAddress(string address);
	string getCustomerName();
private:
	string Customer_name;
	string contactInformation;
	string address;
};
