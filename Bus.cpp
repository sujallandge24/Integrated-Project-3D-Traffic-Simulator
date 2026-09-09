// Bus.cpp
#include "Bus.h"
#include <iostream>
using namespace std;

Bus::Bus(int id, float x, float y, float speed)
    : Vehicle(id, x, y, speed, "Bus") {}

void Bus::move() {
    x += speed;   // Simple movement for now
    cout << "Bus " << id << " moved to (" << x << ", " << y << ")" << endl;
}