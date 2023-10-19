#include<iostream>
#include<string>
#include "Customer.h"
using namespace std;
Customer::Customer(string customerName, string contactInformation) : customerName(customerName), contactInformation(contactInformation) {}
void Customer::placeOrder() {
    cout << "Customer " << customerName << " has placed an order for repair services." << endl;
}
void Customer::setAddress(string address) {
    this->address = address;
}
string Customer::getCustomerName() {
    return customerName;
}
