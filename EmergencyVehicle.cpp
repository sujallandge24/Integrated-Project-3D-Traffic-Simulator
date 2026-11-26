#include "EmergencyVehicle.h"
#include <iostream>
using namespace std;

EmergencyVehicle::EmergencyVehicle(int id, float x, float y, float speed)
    : Vehicle(id, x, y, speed, "Emergency") {}

void EmergencyVehicle::move() {
    x += speed * 1.5f;
    if (x > 800) x = -60;
}

void EmergencyVehicle::specialBehavior() {
    cout << "Emergency Vehicle " << id << " is using SIREN!" << endl;
}
