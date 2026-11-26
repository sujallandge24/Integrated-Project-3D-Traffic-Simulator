#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack() : top(-1) {
    for (int i = 0; i < MAX; i++) arr[i] = nullptr;
}

bool Stack::isEmpty() const { return top == -1; }
bool Stack::isFull() const { return top == MAX - 1; }

void Stack::push(Vehicle* v) {
    if (isFull()) {
        cout << "History Stack is full!\n";
        return;
    }
    arr[++top] = v;
}

Vehicle* Stack::pop() {
    if (isEmpty()) {
        cout << "History Stack is empty!\n";
        return nullptr;
    }
    return arr[top--];
}

int Stack::size() const { return top + 1; }

Vehicle* Stack::at(int i) const {
    if (i < 0 || i > top) return nullptr;
    return arr[top - i];
}

Vehicle* Stack::peek() const {
    if (isEmpty()) return nullptr;
    return arr[top];
}

void Stack::display() const {
    if (isEmpty()) {
        cout << "No history.\n";
        return;
    }
    cout << "Vehicle History (Stack - Top first): ";
    for (int i = top; i >= 0; i--)
        cout << "[" << arr[i]->getId() << "] ";
    cout << endl;
}
