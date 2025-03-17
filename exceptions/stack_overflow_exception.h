//
// Created by benja on 15/03/2025.
//

#ifndef STACK_OVERFLOW_EXCEPTION_H
#define STACK_OVERFLOW_EXCEPTION_H

#include <stdexcept>
class StackOverFlowException final : public std::runtime_error {
public:
    explicit StackOverFlowException(const int data) :
        std::runtime_error("Stack overflow unable to push " + std::to_string(data) + "to stack") {}
};
#endif //STACK_OVERFLOW_EXCEPTION_H
