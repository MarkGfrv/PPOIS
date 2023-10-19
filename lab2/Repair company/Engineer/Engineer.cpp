#include "Engineer.h"
#include<iostream>
#include<string>
using namespace std;
Engineer::Engineer(string employeeName, int employeeID) : Employee(employeeName, employeeID) {}
void Engineer::perform_task() {
    cout << "Engineer is doing technical job" << endl;
}
void Engineer::setCertificationLevel(int level) {
    certificationLevel = level;
}
void Engineer::setSpecialization(string specialization) {
    this->specialization = specialization;
}
void Engineer::performQualityCheck() {
    cout << "Engineer " << employeeName << " is performing a quality check" << endl;
}
