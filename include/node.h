//
// Created by benja on 14/03/2025.
//

#ifndef NODE_H
#define NODE_H
#include <vector>

template <typename T>
class Node {
  public:
    Node(T data);
    ~Node();
    T get_data();
    Node<T> *get_pointer(int i) const;
    void add_edge(Node<T>* node, bool directed = true);
    void set_edge(int i, Node<T>* node);
  private:
    std::vector<Node<T>*>* pointers;
    T data;
};
#endif //NODE_H
