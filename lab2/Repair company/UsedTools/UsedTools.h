#pragma once
#include<iostream>
#include<string>
using namespace std;
class UsedTools {
public:
	UsedTools(string nameOfUsedTool);
	void useToolforService();
	void setCondition(string condition);
private:
	string nameOfUsedTool;
	string toolCondition;
};
