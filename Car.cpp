#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(int id, float x, float y, float speed)
    : Vehicle(id, x, y, speed, "Car") {}

void Car::move() {
    x += speed;
    if (x > 800) x = -50;
}

void Car::specialBehavior() {
    cout << "Car " << id << " is honking!" << endl;
}
