//
// Created by benja on 15/03/2025.
//

#ifndef STACK_H
#define STACK_H

#include "linked_list.h"

template <typename T>

class Stack {
public:
    Stack(int size);
    ~Stack();
    void push(Node<T> *data) const;
    T pop();
    T peek() const;
private:
    LinkedList<T>* list;
    int size;
};

#endif //STACK_H
