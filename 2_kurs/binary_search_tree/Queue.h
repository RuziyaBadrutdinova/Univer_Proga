#ifndef TREE_QUEUE_H
#define TREE_QUEUE_H

#include "NodeQueue.h"
class Queue {
private:
    NodeQueue *tail;
    NodeQueue *head;
    int count;
public:
    Queue();
    bool isEmpty();
    void push(NodeTree *value);
    NodeTree *pop();
};
