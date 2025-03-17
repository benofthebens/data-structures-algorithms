//
// Created by benja on 17/03/2025.
//

#ifndef QUEUE_H
#define QUEUE_H
#include "linked_list.h"
#include "node.h"

class Queue {
public:
    Queue(int size);
    ~Queue();
    void enqueue(Node* node);
    int peek();
    int dequeue();
private:
    LinkedList* list;
    int size;
};

#endif //QUEUE_H
