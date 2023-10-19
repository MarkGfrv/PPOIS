#pragma once
#include "Employee.h"
#include<iostream>
#include<string>
using namespace std;
class Manager: public Employee {
public:
	Manager(string employeeName, int employeeID, string subdivision);
	void perform_task() override;
	void performMonthlyMeeting();
	void setProjectsManaged(int projects);
private:
	string subdivision;
	int projectsManaged;
};
