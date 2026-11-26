#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Vehicle.h"

struct Node {
    Vehicle* data;
    Node* next;
    Node(Vehicle* v) : data(v), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;
    int count;

public:
    LinkedList();
    ~LinkedList();

    void insertAtEnd(Vehicle* v);
    void deleteFromFront();
    void display() const;
    bool isEmpty() const;
    int size() const;
    Vehicle* getFront() const;
    Vehicle* searchById(int id) const;
    Vehicle* at(int i) const;   // i-th vehicle from the head
};

#endif
