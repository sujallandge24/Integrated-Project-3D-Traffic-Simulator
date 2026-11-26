#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(int id, float x, float y, float speed = 2.0f);
    void move() override;
    void specialBehavior() override;
};

#endif
