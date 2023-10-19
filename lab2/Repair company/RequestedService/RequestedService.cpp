#include<iostream>
#include<string>
#include "RequestedService.h"
using namespace std;
RequestedService::RequestedService(Customer& customer, Service& service, Employee& workingEmployee) : customer(customer), service(service), workingEmployee(workingEmployee) {}
void RequestedService::CompleteOrder() {
    cout << "Order completed by " << employeeName << endl;
}
void RequestedService::setAppointmentDate(string date) {
    appointmentDate = date;
}
void RequestedService::confirmAppointment() {
    cout << "Appointment confirmed for " << appointmentDate << endl;
}
