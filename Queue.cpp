#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue() : front(0), rear(-1), count(0) {
    for (int i = 0; i < MAX_SIZE; i++) arr[i] = nullptr;
}

Queue::~Queue() {}

bool Queue::isEmpty() const { return count == 0; }
bool Queue::isFull() const { return count == MAX_SIZE; }
int Queue::size() const { return count; }

void Queue::enqueue(Vehicle* v) {
    if (isFull()) {
        cout << "Toll Queue is FULL!\n";
        return;
    }
    rear = (rear + 1) % MAX_SIZE;
    arr[rear] = v;
    count++;
    cout << "Vehicle " << v->getId() << " entered the Toll Queue.\n";
}

Vehicle* Queue::dequeue() {
    if (isEmpty()) {
        cout << "Toll Queue is empty!\n";
        return nullptr;
    }
    Vehicle* v = arr[front];
    arr[front] = nullptr;
    front = (front + 1) % MAX_SIZE;
    count--;
    cout << "Vehicle " << v->getId() << " left the Toll Queue.\n";
    return v;
}

Vehicle* Queue::at(int i) const {
    if (i < 0 || i >= count) return nullptr;
    return arr[(front + i) % MAX_SIZE];
}

Vehicle* Queue::peek() const {
    if (isEmpty()) return nullptr;
    return arr[front];
}

void Queue::display() const {
    if (isEmpty()) {
        cout << "Toll Queue is empty.\n";
        return;
    }
    cout << "Toll Queue (Front -> Rear): ";
    int i = front;
    for (int c = 0; c < count; c++) {
        cout << "[" << arr[i]->getId() << ":" << arr[i]->getType() << "] ";
        i = (i + 1) % MAX_SIZE;
    }
    cout << " | Size: " << count << endl;
}
