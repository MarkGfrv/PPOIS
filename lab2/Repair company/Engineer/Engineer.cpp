#include "Engineer.h"
#include<iostream>
#include<string>
using namespace std;
Engineer::Engineer(string Employee_name, int Employee_ID) : Employee(Employee_name, Employee_ID) {}
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
    cout << "Engineer " << Employee_name << " is performing a quality check" << endl;
}
