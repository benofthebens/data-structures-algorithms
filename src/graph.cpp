#include "graph.h"
#include "node.h"
#include <iostream>

template <typename T>
void Graph<T>::add(const T data) {
    if (hash_map.contains_key(data))
        return;
    hash_map.put(data, new Node<T>(data));
}

template <typename T>
void Graph<T>::remove(const T data) {
}

template <typename T>
void Graph<T>::add_edge(const T from, const T to) {
    if (!hash_map.contains_key(from) || !hash_map.contains_key(to))
        return;

    Node<T>* from_node = hash_map.value_of(from);
    Node<T>* to_node = hash_map.value_of(to);

    from_node->push(to_node);
}
template <typename T>
void Graph<T>::print() {
    Node<T>* node = hash_map.value_of(1);
    std::cout << node->get_adj_nodes()->at(0)->get_data() << std::endl;
}

template class Graph<int>;
