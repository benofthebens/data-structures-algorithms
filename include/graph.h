#ifndef GRAPH_H
#define GRAPH_H

#include "hash_map.h"
#include "node.h"

template <typename T>
class Graph {
private:
    HashMap<T, Node<T>*> hash_map;
public:
    Graph() = default;
    ~Graph() = default;
    void add(const T data);
    void remove(const T data);
    void add_edge(const T from, const T to);
    void print();
};
#endif