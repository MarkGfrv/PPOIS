#pragma once
#include<iostream>
#include<string>
using namespace std;
class Service {
public:
	Service(string serviceType, double serviceCost);
	void PerformingService();
	void setDuration(int duration);
	void setMaterialsUsed(string materials);
	string getServiceType();
	double getServiceCost();
protected:
	string serviceType;
	double serviceCost;
	int duration;
	string materialsUsed;
};
