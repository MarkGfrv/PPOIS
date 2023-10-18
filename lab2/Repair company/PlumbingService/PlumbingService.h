#pragma once
#include "Service.h"
#include<iostream>
#include<string>
using namespace std;
class PlumbingService : public Service {
public:
	PlumbingService();
	void inspectPlumbing();
};

