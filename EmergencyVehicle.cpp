// EmergencyVehicle.cpp
#include "EmergencyVehicle.h"
#include <iostream>
using namespace std;

EmergencyVehicle::EmergencyVehicle(int id, float x, float y, float speed)
    : Vehicle(id, x, y, speed, "Emergency") {}

void EmergencyVehicle::move() {
    x += speed * 1.5f;   // Emergency vehicles move faster
    cout << "Emergency Vehicle " << id << " moved to (" << x << ", " << y << ")" << endl;
}