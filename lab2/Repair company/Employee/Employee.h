#pragma once
#include<iostream>
#include<string>
using namespace std;
class Employee {
public:
	Employee(string employeeName, int employeeID);
	void setSalary(double salary);
	virtual void perform_task() = 0;
protected:
	string employeeName;
	int employeeID;
	double salary;
};
