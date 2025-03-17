//
// Created by benja on 14/03/2025.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "node.h"
class LinkedList {
  public:
    LinkedList();
    ~LinkedList();
    Node* get_head() const;
    Node* get(int i) const;
    void insert(Node* node);
    int remove_at(int i);
    int remove(int data);
    int get_length();
    void print();
  private:
    Node* head;
    int length;
};
#endif //LINKEDLIST_H
