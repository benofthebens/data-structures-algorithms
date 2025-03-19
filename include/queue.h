//
// Created by benja on 17/03/2025.
//

#ifndef QUEUE_H
#define QUEUE_H
#include "linked_list.h"
#include "node.h"

template <typename T>
class Queue {
public:
    Queue(int size);
    ~Queue();
    void enqueue(T node);
    T peek();
    T dequeue();
private:
    LinkedList<T>* list;
    int size;
};

#endif //QUEUE_H
