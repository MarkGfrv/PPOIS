#include "Manager.h"
#include<iostream>
#include<string>
using namespace std;
Manager::Manager(string employeeName, int employeeID, string subdivision) : Employee(employeeName, employeeID), subdivision(subdivision) {}
void Manager::perform_task() {
    cout << "Manager " << employeeName << " is working in the " << subdivision << " subdivision" << endl;
}
void Manager::performMonthlyMeeting() {
    cout << "Manager " << employeeName << " conducts a monthly meeting" << endl;
}
void Manager::setProjectsManaged(int projects) {
    projectsManaged = projects;
}
