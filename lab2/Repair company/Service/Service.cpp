#include<iostream>
#include<string>
#include "Service.h"
using namespace std;
Service::Service(string ServiceType, double ServiceCost) : ServiceType(ServiceType), ServiceCost(ServiceCost), duration(0), materialsUsed("") {}
void Service::PerformingService() {
    cout << "Performing " << ServiceType << " service with the cost " << ServiceCost << endl;
}
void Service::setDuration(int duration) {
    this->duration = duration;
}
void Service::setMaterialsUsed(string materials) {
    materialsUsed = materials;
}
string Service::getServiceType() {
    return ServiceType;
}
double Service::getServiceCost() {
    return ServiceCost;
}
