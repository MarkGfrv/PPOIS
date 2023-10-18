#include<iostream>
#include<string>
#include "ConstructionService.h"
using namespace std;
ConstructionService::ConstructionService() : Service("Construction", 160.0) {}
void ConstructionService::performSafetyInspection() {
    cout << "Performing safety inspection at the construction site" << endl;
}
void ConstructionService::setWorkersCount(int count) {
    workersCount = count;
}
