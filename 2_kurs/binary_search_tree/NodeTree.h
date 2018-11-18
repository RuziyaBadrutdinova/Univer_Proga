#ifndef TREE_NODETREE_H
#define TREE_NODETREE_H


class NodeTree {
    int value;
    NodeTree *left;
    NodeTree *right;
public:
    NodeTree(int value);

    void setValue(int value);

    int getValue();

    void setLeft(NodeTree *left);

    NodeTree *getLeft();

    void setRight(NodeTree *right);

    NodeTree *getRight();

};


#endif //TREE_NODETREE_H
