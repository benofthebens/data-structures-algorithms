//
// Created by benja on 15/03/2025.
//

#include "stack.h"

#include "../exceptions/stack_overflow_exception.h"
#include "../exceptions/stack_underflow_exception.h"

Stack::Stack(int const size) {
    this->list = new LinkedList();
    this->size = size;
}

Stack::~Stack() {
    delete list;
}

void Stack::push(Node* data) const {
    if (list->get_length() >= size)
        throw StackOverFlowException(data->get_data());
    list->insert(data);
}

int Stack::peek() const {
    return list->get(list->get_length() - 1)->get_data();
}

int Stack::pop() {
    if (list->get_length() == 0)
        throw StackUnderFlowException();

    return list->remove_at(list->get_length() - 1);
}

