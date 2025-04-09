//
// Created by benja on 14/03/2025.
//

#ifndef NODE_H
#define NODE_H
#include <vector>

template <typename T>
class Node {
private:
    T data;
    std::vector<Node<T>*>* adj_nodes;
public:
    Node(T data = 0)
        : data(data), adj_nodes(new std::vector<Node<T>*>) {}
    ~Node();
    T get_data() const;
    std::vector<Node<T>*>* get_adj_nodes() const;
    void set_adj_nodes_size(const int n);
    void push(Node<T>* node);
    void assign(const int i, Node<T>* node);
    bool operator==(const Node<T>& obj) const;
};

#endif //NODE_H
