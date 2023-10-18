#include<iostream>
#include<string>
#include "BillForServices.h"
using namespace std;
BillForServices::BillForServices(Customer& customer, Service& service, double TotalCost) : customer(customer), service(service), TotalCost(TotalCost) {}
void BillForServices::generateBill() {
    cout << "Total Bill for " << customer.getCustomerName() << ": " << service.getServiceType() << " - " << TotalCost << "$" << endl;
}
void BillForServices::setPaymentStatus(string status) {
    paymentStatus = status;
}
