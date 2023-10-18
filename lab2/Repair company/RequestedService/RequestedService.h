#pragma once
#include "Customer.h"
#include "Service.h"
#include "Employee.h"
#include<iostream>
#include<string>
using namespace std;
class RequestedService {
public:
	RequestedService(Customer& customer, Service& service, Employee& workingEmployee);
	void CompleteOrder();
	void setAppointmentDate(string date);
	void confirmAppointment();
private:
	Customer& customer;
	Service& service;
	Employee& workingEmployee;
	string appointmentDate;
	string Employee_name;
};


