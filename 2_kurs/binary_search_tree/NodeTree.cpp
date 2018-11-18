#include "NodeTree.h"
NodeTree ::NodeTree(int value) {
    this->value = value;
    this->left = nullptr;
    this->right = nullptr;
}

void NodeTree ::setValue(int value) {
    this->value = value;
}
int NodeTree ::getValue() {
    return this->value;
}
void NodeTree ::setLeft(NodeTree *left) {
    this -> left = left;
}
NodeTree *NodeTree ::getLeft() {
    return this->left;
}
void NodeTree ::setRight(NodeTree *right) {
    this -> right = right;
}
NodeTree *NodeTree ::getRight() {
    return  this -> right;
}
