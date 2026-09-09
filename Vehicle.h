// Vehicle.h
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle {
protected:
    int id;
    float x, y;          // Position
    float speed;
    string type;

public:
    Vehicle(int id, float x, float y, float speed, string type);
    virtual void move() = 0;           // Pure virtual function (Polymorphism)
    virtual void display() const;

    int getId() const;
    float getX() const;
    float getY() const;
    string getType() const;

    void setPosition(float newX, float newY);
};

#endif