//
// Created by benja on 17/03/2025.
//

#include "../include/queue.h"

#include "../exceptions/queue_overflow_exception.h"
#include "../exceptions/queue_underflow_exception.h"

Queue::Queue(int size) {
    this->size = size;
    this->list = new LinkedList();
}

Queue::~Queue() {
    delete list;
}

void Queue::enqueue(Node *node) {
    if (list->get_length() == size)
        throw QueueOverflowException();
    list->insert(node);
}
int Queue::peek() {
    return list->get(0)->get_data();
}

int Queue::dequeue() {
    if (list->get(0) == nullptr)
        throw QueueUnderflowException();
    return list->remove_at(0);
}
