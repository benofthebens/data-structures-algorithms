#ifndef STACK_H
#define STACK_H

#include "linked_list.h"

template <typename T>
class Stack {
private:
    LinkedList<T> list;
public:
    Stack() = default;
    ~Stack() = default;
    void push(const T data);
    T pop();
    T peek() const;
};

#endif
