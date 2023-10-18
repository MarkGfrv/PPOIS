#include "Manager.h"
#include<iostream>
#include<string>
using namespace std;
Manager::Manager(string Employee_name, int Employee_ID, string subdivision) : Employee(Employee_name, Employee_ID), subdivision(subdivision) {}
void Manager::perform_task() {
    cout << "Manager " << Employee_name << " is working in the " << subdivision << " subdivision" << endl;
}
void Manager::performMonthlyMeeting() {
    cout << "Manager " << Employee_name << " conducts a monthly meeting" << endl;
}
void Manager::setProjectsManaged(int projects) {
    projectsManaged = projects;
}
