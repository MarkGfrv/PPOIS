#pragma once
#include "Customer.h"
#include "Service.h"
#include<iostream>
#include<string>
using namespace std;
class BillForServices {
public:
	BillForServices(Customer& customer, Service& service, double TotalCost);
	void generateBill();
	void setPaymentStatus(string status);
private:
	Customer& customer;
	Service& service;
	double TotalCost;
	string paymentStatus;
};
