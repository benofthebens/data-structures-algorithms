//
// Created by benja on 19/03/2025.
//
#include "graph.h"

template<typename T>
Graph<T>::Graph() {
    this->node_list = new std::vector<Node<T>*>;
}

template<typename T>
Graph<T>::~Graph() {

}
template<typename T>
Node<T> *Graph<T>::get_node_at(int i) {
    return node_list->at(i);
}

template<typename T>
void Graph<T>::add_node(Node<T> *node) {
    node_list->push_back(node);
}

template class Graph<int>;


