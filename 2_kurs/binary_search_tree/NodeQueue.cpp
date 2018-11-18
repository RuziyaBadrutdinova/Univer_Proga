#include "NodeQueue.h"
NodeQueue::NodeQueue(NodeTree *value) {
    this->value = value;
    this->next = nullptr;
}

NodeTree* NodeQueue::getValue() {
    return this->value;
}


void NodeQueue::setNext(NodeQueue *next) {
    this->next = next;
}

NodeQueue *NodeQueue::getNext() {
    return this->next;
}

void NodeQueue::setPrevious(NodeQueue *previous) {
    this->previous = previous;
}

NodeQueue *NodeQueue::getPrevious() {
    return this->previous;
}
