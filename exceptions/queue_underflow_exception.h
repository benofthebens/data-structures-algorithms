//
// Created by benja on 17/03/2025.
//

#ifndef QUEUE_UNDERFLOW_EXCEPTION_H
#define QUEUE_UNDERFLOW_EXCEPTION_H
#include <stdexcept>

class QueueUnderflowException : std::runtime_error {
public:
    explicit QueueUnderflowException() :
        std::runtime_error("Unable to dequeue from an empty queue") {}

};

#endif //QUEUE_UNDERFLOW_EXCEPTION_H
