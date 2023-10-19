#include<iostream>
#include<string>
#include "UsedTools.h"
using namespace std;
UsedTools::UsedTools(string nameofUsedTool) : nameOfUsedTool(nameofUsedTool) {}

void UsedTools::useToolforService() {
    cout << "Currently using " << nameOfUsedTool << " for the repair service" << endl;
}

void UsedTools::setCondition(string condition) {
    toolCondition = condition;
}
