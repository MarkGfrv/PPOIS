#pragma once
#include "Service.h"
#include<iostream>
#include<string>
using namespace std;
class ConstructionService : public Service {
public:
	ConstructionService();
	void performSafetyInspection();
	void setWorkersCount(int count);
private:
	int workersCount;
};

