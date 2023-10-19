#include<iostream>
#include<string>
#include "Employee.h"
using namespace std;
Employee::Employee(string Employee_name, int Employee_ID) : employeeName(employeeName), employeeID(employeeID), salary(0.0) {}
void Employee::setSalary(double salary) {
    this->salary = salary;
}
