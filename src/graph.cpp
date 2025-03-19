//
// Created by benja on 19/03/2025.
//
#include "graph.h"
#include "linked_list.h"
template<typename T>
Graph<T>::Graph() {
    this->node_list = new LinkedList<T>();
}

template<typename T>
Graph<T>::~Graph() {
    delete node_list;
}
template<typename T>
Node<T> *Graph<T>::get_node_at(int i) {
    return node_list->get(i);
}

template<typename T>
void Graph<T>::add_node(T data) {
    node_list->insert(data);
}

template class Graph<Node<int>*>;


