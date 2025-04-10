#include "stack.h"

template <typename T>
void Stack<T>::push(const T data) {
    list.push(data);
}

template <typename T>
T Stack<T>::pop() {
    return list.remove(list.get_size() - 1);
}

template <typename T>
T Stack<T>::peek() const {
    return list.get(list.get_size() - 1);
}

template class Stack<int>;
