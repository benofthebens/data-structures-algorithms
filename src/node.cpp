//
// Created by benja on 14/03/2025.
//
#include "node.h"


template <typename T>
Node<T>::Node(T const data) {
    this->pointers = new std::vector<Node*>;
    this->data = data;
}
template <typename T>
Node<T>::~Node() {
}

template <typename T>
void Node<T>::add_edge(Node<T> *node) {
    pointers->push_back(node);
}

template <typename T>
T Node<T>::get_data() {
    return data;
}

template <typename T>
Node<T> *Node<T>::get_pointer(int i) const {
    return pointers->at(i);
}

template <typename T>
void Node<T>::set_edge(int i, Node<T>* node) {
    pointers->at(0) = node;
}

template class Node<int>;