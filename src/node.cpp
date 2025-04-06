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
void Node<T>::add_edge(T node, bool directed) {
    Node<T>* newNode = new Node<T>(node);
    if (node == 0)
        newNode = nullptr;

    pointers->push_back(newNode);

    if (!directed)
        newNode->add_edge(data, true);
}

template <typename T>
T Node<T>::get_data() const {
    return data;
}

template <typename T>
Node<T> *Node<T>::get_pointer(int i) const {
    return pointers->at(i);
}

template<typename T>
std::vector<Node<T> *> * Node<T>::get_all_pointers() {
    return pointers;
}
template <typename T>
void Node<T>::set_edge(int i, Node<T>* node) {
    pointers->at(i) = node;
}

template<typename T>
bool Node<T>::eq(const Node<T> *node) const {

    if (node == nullptr) return false;
    if (this == node) return true;
    if (this->get_data() == node->get_data()) return true;

    if constexpr (std::is_pointer_v<T>) {
        return this->get_data()->eq(node->get_data());
    }

    return false;
}

template class Node<int>;
template class Node<Node<int>*>;