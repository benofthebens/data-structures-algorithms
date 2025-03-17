//
// Created by benja on 15/03/2025.
//

#ifndef STACK_UNDERFLOW_EXCEPTION_H
#define STACK_UNDERFLOW_EXCEPTION_H
#include <stdexcept>

class StackUnderFlowException : public std::runtime_error {
public:
    explicit StackUnderFlowException() :
    std::runtime_error("Stack underflow unable to remove from stack") {}
};

#endif //STACK_UNDERFLOW_EXCEPTION_H
