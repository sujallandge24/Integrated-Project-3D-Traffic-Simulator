#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList() : head(nullptr), count(0) {}

LinkedList::~LinkedList() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp->data;
        delete temp;
    }
}

void LinkedList::insertAtEnd(Vehicle* v) {
    Node* newNode = new Node(v);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
    }
    count++;
}

void LinkedList::deleteFromFront() {
    if (head == nullptr) {
        cout << "Road is empty!\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    cout << "Vehicle ID " << temp->data->getId() << " left the road.\n";
    delete temp->data;
    delete temp;
    count--;
}

void LinkedList::display() const {
    if (head == nullptr) {
        cout << "Road is empty.\n";
        return;
    }
    cout << "Vehicles currently on road (Linked List): ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << "[" << temp->data->getId() << ":" << temp->data->getType() << "] ";
        temp = temp->next;
    }
    cout << " | Total: " << count << endl;
}

bool LinkedList::isEmpty() const { return head == nullptr; }
int LinkedList::size() const { return count; }

Vehicle* LinkedList::getFront() const {
    return head ? head->data : nullptr;
}

Vehicle* LinkedList::at(int i) const {
    Node* temp = head;
    while (temp != nullptr && i-- > 0) temp = temp->next;
    return temp ? temp->data : nullptr;
}

Vehicle* LinkedList::searchById(int id) const {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data->getId() == id)
            return temp->data;
        temp = temp->next;
    }
    return nullptr;
}
