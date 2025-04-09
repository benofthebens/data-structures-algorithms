//
// Created by benja on 14/03/2025.
//
#include "node.h"
#include <iostream>

#include <vector>

template <typename T>
Node<T>::~Node() {
}

template <typename T>
T Node<T>::get_data() const {
    return data;
}

template <typename T>
std::vector<Node<T>*>* Node<T>::get_adj_nodes() const {
    return adj_nodes;
}

template<typename T>
void Node<T>::set_adj_nodes_size(const int n) {
    adj_nodes->resize(n, nullptr);
}

template<typename T>
void Node<T>::push(Node<T>* node) {
    adj_nodes->push_back(node);
}

template <typename T>
void Node<T>::assign(const int i, Node<T>* node) {
    adj_nodes->at(i) = node;
}

template <typename T>
bool Node<T>::operator==(const Node<T>& obj) const {
    return obj.get_data() == this->get_data();
}

template class Node<int>;
