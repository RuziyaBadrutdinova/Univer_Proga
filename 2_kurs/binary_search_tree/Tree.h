#ifndef TREE_TREE_H
#define TREE_TREE_H

#include "NodeTree.h"
#include "Queue.h"
class Tree {
private:
    NodeTree *root = nullptr;
public:
    Tree();
    void setRoot(NodeTree *root);

    NodeTree *getRoot();

    void insert(int element, NodeTree *root);

    void print(NodeTree *root);

    bool find(NodeTree *first, int element);

    void PRINT(int level, NodeTree *root);

   // NodeTree *delete_element(NodeTree *root, int element);
   // void Delete_element (int element);
   void delete_elem(NodeTree *root, int element);

    void createQueue();

};


#endif //TREE_TREE_H
