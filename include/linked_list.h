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
    Node<T>* get(int i) const;
    void insert(Node<T>* node);
    T remove_at(int i);
    T remove(int data);
    int get_length();
    void print();
  private:
    Node<T>* head;
    int length;
};
#endif //LINKEDLIST_H
