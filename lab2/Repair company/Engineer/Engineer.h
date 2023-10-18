#pragma once
#include "Employee.h"
#include<iostream>
#include<string>
using namespace std;
class Engineer: public Employee {
public:
	Engineer(string Employee_name, int Employee_ID);
	void perform_task() override;
	void setCertificationLevel(int level);
	void setSpecialization(string specialization);
	void performQualityCheck();
private:
	int certificationLevel;
	string specialization;
};
