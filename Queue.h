#ifndef QUEUE_H
#define QUEUE_H

#include "Vehicle.h"

class Queue {
public:
    static const int MAX_SIZE = 30;

private:
    Vehicle* arr[MAX_SIZE];
    int front, rear, count;

public:
    Queue();
    ~Queue();

    bool isEmpty() const;
    bool isFull() const;
    void enqueue(Vehicle* v);
    Vehicle* dequeue();
    Vehicle* peek() const;
    void display() const;
    int size() const;
    Vehicle* at(int i) const;   // i-th vehicle from the front
};

#endif
