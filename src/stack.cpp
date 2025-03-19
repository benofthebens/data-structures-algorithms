//
// Created by benja on 15/03/2025.
//

#include "stack.h"

#include "../exceptions/stack_overflow_exception.h"
#include "../exceptions/stack_underflow_exception.h"

template <typename T>
Stack<T>::Stack(int const size) {
    this->list = new LinkedList<T>();
    this->size = size;
}
template <typename T>
Stack<T>::~Stack() {
    delete list;
}
template <typename T>
void Stack<T>::push(T data) const {
    if (list->get_length() >= size)
        throw StackOverFlowException(data);
    list->insert(data);
}
template <typename T>
T Stack<T>::peek() const {
    return list->get(list->get_length() - 1)->get_data();
}
template <typename T>
T Stack<T>::pop() {
    if (list->get_length() == 0)
        throw StackUnderFlowException();

    return list->remove_at(list->get_length() - 1);
}
template class Stack<int>;

