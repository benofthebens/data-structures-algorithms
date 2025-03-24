//
// Created by benja on 14/03/2025.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "node.h"

template <typename T>
class LinkedList {
  public:
    LinkedList();
    ~LinkedList();
    Node<T>* get_head() const;
    Node<T>* at(int i) const;
  Node<T>* get(T data);
    void insert(T data);
    T remove_at(int i);
    int get_length();
    void print();
  private:
    Node<T>* head;
    int length;
};
#endif //LINKEDLIST_H
