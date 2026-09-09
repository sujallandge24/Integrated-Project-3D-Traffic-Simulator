// Car.cpp
#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(int id, float x, float y, float speed)
    : Vehicle(id, x, y, speed, "Car") {}

void Car::move() {
    x += speed;   // Simple movement for now
    cout << "Car " << id << " moved to (" << x << ", " << y << ")" << endl;
}