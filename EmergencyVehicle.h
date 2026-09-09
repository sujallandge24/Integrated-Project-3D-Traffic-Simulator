// EmergencyVehicle.h
#ifndef EMERGENCY_VEHICLE_H
#define EMERGENCY_VEHICLE_H

#include "Vehicle.h"

class EmergencyVehicle : public Vehicle {
public:
    EmergencyVehicle(int id, float x, float y, float speed = 3.0f);
    void move() override;
};

#endif