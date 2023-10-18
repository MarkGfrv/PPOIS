#pragma once
#include<iostream>
#include<string>
using namespace std;
class Service {
public:
	Service(string ServiceType, double ServiceCost);
	void PerformingService();
	void setDuration(int duration);
	void setMaterialsUsed(string materials);
	string getServiceType();
	double getServiceCost();
protected:
	string ServiceType;
	double ServiceCost;
	int duration;
	string materialsUsed;
};
