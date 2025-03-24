#include "tree.h"
//
// Created by benja on 20/03/2025.
//
template<typename T>
Tree<T>::Tree() {
    this->graph = new Graph<Node<T>*>();
    this->root = nullptr;
}

template <typename T>
Tree<T>::~Tree() {
    delete graph;
    delete root;
}

template<typename T>
void Tree<T>::add(T parent_data, T data) {
    graph->add_node(new Node(data));
    if (root == nullptr) {
        root = graph->get_node_at(0)->get_data();
        return;
    }
    Node<T>* parent = graph->get_node(new Node(parent_data))->get_data();
    parent->add_edge(new Node(data));
}

template<typename T>
T Tree<T>::remove() {
}
template class Tree<int>;
