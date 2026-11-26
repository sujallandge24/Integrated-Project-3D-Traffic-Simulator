#include "Bus.h"
#include <iostream>
using namespace std;

Bus::Bus(int id, float x, float y, float speed)
    : Vehicle(id, x, y, speed, "Bus") {}

void Bus::move() {
    x += speed;
    if (x > 800) x = -70;
}

void Bus::specialBehavior() {
    cout << "Bus " << id << " is picking up passengers!" << endl;
}
