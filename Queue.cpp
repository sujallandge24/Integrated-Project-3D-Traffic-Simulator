// Queue.cpp
#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue() {
    front = 0;
    rear = -1;
    count = 0;
}

bool Queue::isEmpty() {
    return count == 0;
}

bool Queue::isFull() {
    return count == MAX_SIZE;
}

void Queue::enqueue(Vehicle* v) {
    if (isFull()) {
        cout << "Queue is full!" << endl;
        return;
    }
    rear = (rear + 1) % MAX_SIZE;
    arr[rear] = v;
    count++;
}

Vehicle* Queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty!" << endl;
        return nullptr;
    }

    Vehicle* removed = arr[front];
    front = (front + 1) % MAX_SIZE;
    count--;

    if (isEmpty()) {
        front = 0;
        rear = -1;
    }

    return removed;
}

Vehicle* Queue::peek() {
    if (isEmpty()) return nullptr;
    return arr[front];
}

void Queue::display() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Vehicles in Queue: ";
    for (int i = 0, idx = front; i < count; i++) {
        cout << arr[idx]->getId() << " ";
        idx = (idx + 1) % MAX_SIZE;
    }
    cout << endl;
}