//
// Created by benja on 19/03/2025.
//

#ifndef GRAPH_H
#define GRAPH_H
#include <vector>

#include "node.h"
#include "linked_list.h"

template <typename T>
class Graph {
public:
    Graph();
    ~Graph();
    Node<T> *get_node_at(int i);
    void add_node(T data);
    Node<T>* get_node(T data);
private:
    LinkedList<T>* node_list;
};
#endif //GRAPH_H
