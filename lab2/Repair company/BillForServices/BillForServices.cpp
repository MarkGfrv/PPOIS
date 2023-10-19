#include<iostream>
#include<string>
#include "BillForServices.h"
using namespace std;
BillForServices::BillForServices(Customer& customer, Service& service, double totalCost) : customer(customer), service(service), totalCost(totalCost) {}
void BillForServices::generateBill() {
    cout << "Total Bill for " << customer.getCustomerName() << ": " << service.getServiceType() << " - " << totalCost << "$" << endl;
}
void BillForServices::setPaymentStatus(string status) {
    paymentStatus = status;
}
