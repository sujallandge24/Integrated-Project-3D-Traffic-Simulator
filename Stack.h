#ifndef STACK_H
#define STACK_H

#include "Vehicle.h"

class Stack {
public:
    static const int MAX = 20;

private:
    Vehicle* arr[MAX];
    int top;

public:
    Stack();
    bool isEmpty() const;
    bool isFull() const;
    void push(Vehicle* v);
    Vehicle* pop();
    Vehicle* peek() const;
    void display() const;
    int size() const;
    Vehicle* at(int i) const;   // i-th vehicle from the top
};

#endif
