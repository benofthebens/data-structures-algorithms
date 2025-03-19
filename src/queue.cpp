//
// Created by benja on 17/03/2025.
//

#include "../include/queue.h"

#include "../exceptions/queue_overflow_exception.h"
#include "../exceptions/queue_underflow_exception.h"

template <typename T>
Queue<T>::Queue(int size) {
    this->size = size;
    this->list = new LinkedList<T>();
}

template <typename T>
Queue<T>::~Queue() {
    delete list;
}

template <typename T>
void Queue<T>::enqueue(T data) {
    if (list->get_length() == size)
        throw QueueOverflowException();
    list->insert(data);
}
template <typename T>
T Queue<T>::peek() {
    return list->get(0)->get_data();
}

template <typename T>
T Queue<T>::dequeue() {
    if (list->get(0) == nullptr)
        throw QueueUnderflowException();
    return list->remove_at(0);
}
template class Queue<int>;