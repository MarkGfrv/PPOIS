#pragma once
#include<iostream>
#include<string>
using namespace std;
class Employee {
public:
	Employee(string Employee_name, int Employee_ID);
	void setSalary(double salary);
	virtual void perform_task() = 0;
protected:
	string Employee_name;
	int Employee_ID;
	double salary;
};
