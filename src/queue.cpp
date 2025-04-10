#include "queue.h"

template <typename T>
void Queue<T>::enqueue(T data) {
    list.push(data);
}

template <typename T>
T Queue<T>::dequeue() {
    return list.remove(0);
}
 
template <typename T>
T Queue<T>::peek() {
    return list.get(0);
}

template class Queue<int>;