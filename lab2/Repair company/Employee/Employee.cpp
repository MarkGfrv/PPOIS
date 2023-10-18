#include<iostream>
#include<string>
#include "Employee.h"
using namespace std;
Employee::Employee(string Employee_name, int Employee_ID) : Employee_name(Employee_name), Employee_ID(Employee_ID), salary(0.0) {}
void Employee::setSalary(double salary) {
    this->salary = salary;
}
