#ifndef QUEUE_H
#define QUEUE_H

#include "linked_list.h"

template <typename T>
class Queue {
private:
    LinkedList<T> list;
public:
    void enqueue(T data);
    T dequeue();
    T peek();
};

#endif