//
// Created by benja on 14/03/2025.
//
#include "node.h"

#include <iostream>
#include <mutex>


template <typename T>
Node<T>::Node(T const data) {
    this->pointers = new std::vector<Node*>;
    this->data = data;
}
template <typename T>
Node<T>::~Node() {
}

template <typename T>
void Node<T>::add_edge(Node<T> *node, bool directed) {
    pointers->push_back(node);
    if (!directed)
        node->add_edge(this, true);
}

template <typename T>
T Node<T>::get_data() const {
    return data;
}

template <typename T>
Node<T> *Node<T>::get_pointer(int i) const {
    return pointers->at(i);
}

template <typename T>
void Node<T>::set_edge(int i, Node<T>* node) {
    pointers->at(i) = node;
}

template<typename T>
bool Node<T>::operator==(const Node<T>* node) const{
    std::cout << "AAA";
    return (node == this) || (this->get_data() == node->get_data());
}

template class Node<int>;
template class Node<Node<int>*>;