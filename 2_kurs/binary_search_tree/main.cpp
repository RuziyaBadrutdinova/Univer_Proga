#include <iostream>
#include "NodeTree.h"
#include "Tree.h"
#include "Queue.h"
using namespace std;
int main() {
    Tree *root = new Tree();

    cout << "Enter n number of nodes : ";
    int n, data;
    cin >> n;
    int *array= new int [n];
    for (int i = 0; i < n; i++){
        cout<<"enter value ";
        cin>>array [i];
    }

    NodeTree *newNode = new NodeTree(array[0]);
    for (int i = 1; i < n; i++) {
        root->insert(array[i], newNode);
    }
    root->setRoot(newNode);
    cout << "упорядоченное дерево" << endl;
    root->print(root->getRoot());
    cout << endl << "дерево " << endl;
    root->PRINT(0, root->getRoot());
    cout << endl;
    int number;
    cout << "введите элемент для проверки" << endl;
    cin >> number;
    cout << " есть ли элемент?" << endl << root->find(root->getRoot(), number);
    cout << endl << endl << endl;
    cout << "введите элемент для удаления" << endl;
    cin >> number;

    root->delete_elem(root->getRoot(), number);
    cout << "дерево после удаления элемента" << endl;
    root->PRINT(0, root->getRoot());
    cout<<endl;
    root->createQueue();

}
/*
 7
 4
 1
 2
 6
 9
 7
 8
 11
 12
 13
 10
 0
*/
