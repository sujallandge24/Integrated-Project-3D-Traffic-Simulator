#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

class Bus : public Vehicle {
public:
    Bus(int id, float x, float y, float speed = 1.5f);
    void move() override;
    void specialBehavior() override;
};

#endif
