#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "node.h"

template <typename T>
class LinkedList {
private:
    Node<T>* head;
    int size;
public:
    LinkedList()
        : head(nullptr), size(0) { }
    ~LinkedList() {};
    int get_size() const;
    bool contains(const T data) const;
    bool is_empty() const;
    T remove(const int i);
    T get(const int i) const;
    void add(const int i, const T data);
    void push(const T data);
    void print() const;
};

#endif
