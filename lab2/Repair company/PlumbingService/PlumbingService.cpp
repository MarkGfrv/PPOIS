#include<iostream>
#include<string>
#include "PlumbingService.h"
using namespace std;
PlumbingService::PlumbingService() : Service("Plumbing", 120.0) {}
void PlumbingService::inspectPlumbing() {
    cout << "Inspecting plumbing system before repair" << endl;
}
