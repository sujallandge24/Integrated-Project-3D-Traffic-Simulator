#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>
using namespace std;

class Vehicle {
protected:
    int id;
    float x, y;
    float speed;
    string type;
    bool active;

public:
    Vehicle(int id, float x, float y, float speed, const string& type);
    virtual ~Vehicle() = default;

    virtual void move() = 0;
    virtual void specialBehavior() = 0;
    virtual void display() const;

    int getId() const;
    float getX() const;
    float getY() const;
    float getSpeed() const;
    const string& getType() const;
    bool isActive() const;

    void setPosition(float newX, float newY);
    void setSpeed(float newSpeed);
    void setActive(bool status);
};

#endif
