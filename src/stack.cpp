#include "stack.h"
#include "../exceptions/stack/stack_underflow_exception.h"

template <typename T>
void Stack<T>::push(const T data) {
    list.push(data);
}

template <typename T>
T Stack<T>::pop() {
    if (list.get_size() == 0)
        throw StackUnderFlowException();
    return list.remove(list.get_size() - 1);
}

template <typename T>
T Stack<T>::peek() const {
    if (list.get_size() == 0)
        throw StackUnderFlowException();
    return list.get(list.get_size() - 1);
}
