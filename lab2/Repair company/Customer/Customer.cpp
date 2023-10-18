#include<iostream>
#include<string>
#include "Customer.h"
using namespace std;
Customer::Customer(string Customer_name, string contactInformation) : Customer_name(Customer_name), contactInformation(contactInformation) {}
void Customer::placeOrder() {
    cout << "Customer " << Customer_name << " has placed an order for repair services." << endl;
}
void Customer::setAddress(string address) {
    this->address = address;
}
string Customer::getCustomerName() {
    return Customer_name;
}
