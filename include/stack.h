//
// Created by benja on 15/03/2025.
//

#ifndef STACK_H
#define STACK_H

#include "linked_list.h"

class Stack {
public:
    Stack(int size);
    ~Stack();
    void push(Node *data) const;
    int pop();
    int peek() const;
    int pop() const;
private:
    LinkedList* list;
    int size;
};

#endif //STACK_H
