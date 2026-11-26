#include "Vehicle.h"

Vehicle::Vehicle(int id, float x, float y, float speed, const string& type)
    : id(id), x(x), y(y), speed(speed), type(type), active(true) {}

void Vehicle::display() const {
    cout << "ID: " << id 
         << " | Type: " << type 
         << " | Pos: (" << x << ", " << y << ")" 
         << " | Speed: " << speed 
         << " | Active: " << (active ? "Yes" : "No") << endl;
}

int Vehicle::getId() const { return id; }
float Vehicle::getX() const { return x; }
float Vehicle::getY() const { return y; }
float Vehicle::getSpeed() const { return speed; }
const string& Vehicle::getType() const { return type; }
bool Vehicle::isActive() const { return active; }

void Vehicle::setPosition(float newX, float newY) { x = newX; y = newY; }
void Vehicle::setSpeed(float newSpeed) { speed = newSpeed; }
void Vehicle::setActive(bool status) { active = status; }
