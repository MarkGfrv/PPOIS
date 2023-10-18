#pragma once
#include<iostream>
#include<string>
using namespace std;
class UsedTools {
public:
	UsedTools(string nameofUsedTool);
	void useToolforService();
	void setCondition(string condition);
private:
	string nameofUsedTool;
	string toolCondition;
};

