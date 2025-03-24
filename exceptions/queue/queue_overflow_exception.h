//
// Created by benja on 17/03/2025.
//

#ifndef QUEUE_OVERFLOW_EXCEPTION_H
#define QUEUE_OVERFLOW_EXCEPTION_H

#include <stdexcept>

class QueueOverflowException : public std::runtime_error {
public:
    explicit QueueOverflowException() :
        std::runtime_error("Queue Overflow unable to enqueue to a full queue") {}

};

#endif //QUEUE_OVERFLOW_EXCEPTION_H
