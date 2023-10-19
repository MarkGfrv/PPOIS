#include<iostream>
#include<string>
#include "Employee.h"
using namespace std;
Employee::Employee(string employeeName, int employeeID) : employeeName(employeeName), employeeID(employeeID), salary(0.0) {}
void Employee::setSalary(double salary) {
    this->salary = salary;
}
