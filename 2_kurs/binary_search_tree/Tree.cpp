#include "Tree.h"
#include <iostream>

using namespace std;
Tree ::Tree () {
    this ->root = nullptr;
}
void Tree ::setRoot(NodeTree *root) {
    this->root = root;
}

NodeTree * Tree::getRoot() {
    return this->root;
}

void Tree ::insert (int element, NodeTree *root){
    if (root == NULL) {

        root=new NodeTree(element);

    } else if (root->getValue() >= element) {
        if (root ->getLeft() != NULL) {
            insert(element, root->getLeft());
        }
        else{
            NodeTree *newNode = new NodeTree(element);
            root ->setLeft(newNode);
        }
    }
    else {
        if (root ->getRight() != NULL) {
            insert(element, root->getRight());
        }
        else{
            NodeTree *newNode = new NodeTree(element);
            root ->setRight(newNode);
        }
    }
}

void Tree :: print (NodeTree *root){
    if (root != NULL){
        print (root->getLeft());
        cout<<root->getValue()<<" ";
        print(root->getRight());
    }
}
bool Tree :: find(NodeTree *root, int element){

    if ( root != NULL && element == root -> getValue()) {
        return true;
    }
    while(root != NULL && element != root ->getValue()){
        if (element <= root->getValue()){
            root = root ->getLeft();
            find (root,element);
        }
        else{
            root = root -> getRight();
            find (root, element);
        }
    }
    if (root != NULL && root -> getValue() == element)
        return true;
    else return false;
}

void Tree ::PRINT(int level, NodeTree *root) {
    if(root != NULL){
        PRINT(level + 1, root->getLeft());
        for ( int i = 0; i < level; i ++ )
            cout<<"  ";
        cout<<root->getValue()<<endl;

        PRINT(level + 1, root->getRight());
    }
}

void Tree ::delete_elem(NodeTree *first, int element) {
    if (first == nullptr) {
        return;
    }


    if (first ->getValue() == element){
        NodeTree *t = first ->getRight();
        NodeTree *vrem = t;
        while (vrem ->getLeft())
            vrem = vrem ->getLeft();
        vrem->setLeft(first->getLeft());
        this->root = t;
        return;
    }

    NodeTree *temp = first;
    NodeTree *root;
    NodeTree *previous = NULL;

    while (temp != NULL && element != temp->getValue()) {
        if (element <= temp->getValue()) {
            previous = temp;
            temp = temp->getLeft();
        } else {
            previous = temp;
            temp = temp->getRight();
        }
    }
    if (temp != NULL && temp->getValue() == element) {
        root = temp;
        if (previous->getLeft() == temp) {
            root = previous;
            root->setLeft(temp->getRight());
            root = root->getLeft();
            if (root != NULL) {
                while (root->getLeft() != NULL)
                    root = root->getLeft();
                root->setLeft(temp->getLeft());
            }
        } else {
            root = previous;
            root->setRight(temp->getRight());
            root = root->getRight();
            if (root != NULL) {
                while (root->getLeft() != NULL)
                    root = root->getLeft();
                root->setLeft(temp->getLeft());
            }
        }
    }

}

void Tree::createQueue() {
    Queue *ochered = new Queue;
    ochered->push(this->root);
    while (!ochered->isEmpty()) {
        Queue *queue = new Queue();
        while (!ochered->isEmpty()){
            NodeTree* temp =ochered ->pop();
            cout<<temp ->getValue()<< ' ';
            if (temp->getLeft() != nullptr) {
                queue->push(temp->getLeft());
            }
            if (temp->getRight() != nullptr) {
                queue->push(temp->getRight());
            }
        }
        delete ochered;
        ochered = queue;
        cout<<endl;

    }
}
