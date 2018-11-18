#include "Queue.h"
#include <iostream>
using namespace std;
Queue::Queue() {
    this->tail = nullptr;
    this->count = 0;
}

void Queue::push(NodeTree *value) {
    NodeQueue *newNode = new NodeQueue(value);
    if (this->tail == nullptr) {
        this->tail = newNode;
        this->head = newNode;
    } else {
        newNode->setNext(this->tail);
        this->tail->setPrevious(newNode);
        this->tail = newNode;
    }
    this->count++;
}

NodeTree *Queue::pop() {

    if (this->count != 0) {
        NodeTree *valueFromQueue = this->head->getValue();
        NodeQueue *temp = this->head;
        this->head = this->head->getPrevious();
        delete (temp);
        count--;
        return valueFromQueue;
    } else {
        throw "Empty queue!";
    }
}
bool Queue::isEmpty() {
    return this->count == 0;
