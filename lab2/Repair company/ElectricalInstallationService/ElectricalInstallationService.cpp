#include<iostream>
#include<string>
#include "ElectricalInstallationService.h"
using namespace std;
ElectricInstallationWork::ElectricInstallationWork() : Service("Electric installation", 150.0) {}
void ElectricInstallationWork::performWiringInspection() {
    cout << "Conducting wiring inspection for electrical installation" << endl;
}
void ElectricInstallationWork::setVoltage(int voltage) {
    this->voltage = voltage;
}
void ElectricInstallationWork::setCircuitCapacity(string capacity) {
    circuitCapacity = capacity;
}
