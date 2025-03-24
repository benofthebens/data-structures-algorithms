//
// Created by benja on 20/03/2025.
//

#ifndef TREE_H
#define TREE_H
#include "graph.h"
template <typename T>
class Tree {
public:
    Tree();
    ~Tree();
    void add(T parent_data, T data);
    T remove();
    Node<T> *get(T data);
private:
    Node<T>* root;
};

#endif //TREE_H
