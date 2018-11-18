#ifndef TREE_NODEQUEUE_H
#define TREE_NODEQUEUE_H

#include "NodeTree.h"
class NodeQueue {
private:
    NodeTree *value;
    NodeQueue *next;
    NodeQueue *previous;
public:
public:
    NodeQueue(NodeTree *value);

    NodeTree* getValue();

    void setNext(NodeQueue *next);

    NodeQueue *getNext();

    void setPrevious(NodeQueue *previous);

    NodeQueue *getPrevious();
};

#endif //TREE_NODEQUEUE_H
