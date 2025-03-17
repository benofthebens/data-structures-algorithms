//
// Created by benja on 17/03/2025.
//

#include "../exceptions/queue_underflow_exception.h"
#ifndef QUEUE_TESTS_H
#define QUEUE_TESTS_H
#include <gtest/gtest.h>

#include "queue.h"
#include "../exceptions/queue_overflow_exception.h"

TEST(QueueTests, Enqueue) {
    auto* queue = new Queue(3);
    try {
        queue->enqueue(new Node(3));
    } catch (QueueOverflowException e ) {
        std::cout << e.what();
    }
    ASSERT_EQ(queue->peek(), 3);
}

TEST(QueueTests, Dequeue) {
    auto* queue = new Queue(3);
    try {
        queue->enqueue(new Node(3));
        queue->enqueue(new Node(2));
        queue->dequeue();
    } catch (QueueUnderflowException e) {
    }
    ASSERT_EQ(queue->peek(), 2);
}

#endif //QUEUE_TESTS_H
