// Queue.h
#ifndef QUEUE_H
#define QUEUE_H

#include "Vehicle.h"

#define MAX_SIZE 50

class Queue {
private:
    Vehicle* arr[MAX_SIZE];
    int front, rear, count;

public:
    Queue();
    bool isEmpty();
    bool isFull();
    void enqueue(Vehicle* v);
    Vehicle* dequeue();
    Vehicle* peek();
    void display();
};

#endif