#include "queue.h"
#include "../exceptions/queue/queue_underflow_exception.h"

template <typename T>
void Queue<T>::enqueue(T data) {
    list.push(data);
}

template <typename T>
T Queue<T>::dequeue() {
    if (list.get_size() == 0)
        throw QueueUnderflowException();
    return list.remove(0);
}
 
template <typename T>
T Queue<T>::peek() {
    return list.get(0);
}

template class Queue<int>;