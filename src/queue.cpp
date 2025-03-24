//
// Created by benja on 17/03/2025.
//

#include "../include/queue.h"

#include "../exceptions/queue/queue_overflow_exception.h"
#include "../exceptions/queue/queue_underflow_exception.h"

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
    return list->at(0)->get_data();
}

template <typename T>
T Queue<T>::dequeue() {
    if (list->at(0) == nullptr)
        throw QueueUnderflowException();
    return list->remove_at(0);
}

template<typename T>
bool Queue<T>::is_empty() {
    return list->get_length() == 0;
}

template class Queue<int>;
template class Queue<Node<int>*>;
