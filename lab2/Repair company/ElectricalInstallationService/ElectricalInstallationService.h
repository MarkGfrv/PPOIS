#pragma once
#include "Service.h"
#include<iostream>
#include<string>
using namespace std;
class ElectricInstallationWork : public Service {
public:
	ElectricInstallationWork();
	void performWiringInspection();
	void setVoltage(int voltage);
	void setCircuitCapacity(string capacity);
private:
	int voltage;
	string circuitCapacity;
};

