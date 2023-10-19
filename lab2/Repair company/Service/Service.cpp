#include<iostream>
#include<string>
#include "Service.h"
using namespace std;
Service::Service(string serviceType, double serviceCost) : serviceType(serviceType), serviceCost(serviceCost), duration(0), materialsUsed("") {}
void Service::PerformingService() {
    cout << "Performing " << serviceType << " service with the cost " << serviceCost << endl;
}
void Service::setDuration(int duration) {
    this->duration = duration;
}
void Service::setMaterialsUsed(string materials) {
    materialsUsed = materials;
}
string Service::getServiceType() {
    return serviceType;
}
double Service::getServiceCost() {
    return serviceCost;
}
