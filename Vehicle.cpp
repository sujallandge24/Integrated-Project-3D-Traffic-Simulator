// Vehicle.cpp
#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle(int id, float x, float y, float speed, string type)
    : id(id), x(x), y(y), speed(speed), type(type) {}

void Vehicle::display() const {
    cout << "Vehicle ID: " << id << " | Type: " << type
         << " | Position: (" << x << ", " << y << ")" << endl;
}

int Vehicle::getId() const { return id; }
float Vehicle::getX() const { return x; }
float Vehicle::getY() const { return y; }
string Vehicle::getType() const { return type; }

void Vehicle::setPosition(float newX, float newY) {
    x = newX;
    y = newY;
}