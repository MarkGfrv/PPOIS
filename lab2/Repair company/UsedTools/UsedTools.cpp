#include<iostream>
#include<string>
#include "UsedTools.h"
using namespace std;
UsedTools::UsedTools(string nameofUsedTool) : nameofUsedTool(nameofUsedTool) {}

void UsedTools::useToolforService() {
    cout << "Currently using " << nameofUsedTool << " for the repair service" << endl;
}

void UsedTools::setCondition(string condition) {
    toolCondition = condition;
}
