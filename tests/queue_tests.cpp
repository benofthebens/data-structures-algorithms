//
// Created by benja on 17/03/2025.
//

#include "../exceptions/queue_underflow_exception.h"
#include <gtest/gtest.h>

#include "queue.h"
#include "../exceptions/queue_overflow_exception.h"

TEST(QueueTests, Enqueue) {
    auto* queue = new Queue<int>(3);
    try {
        queue->enqueue((3));
    } catch (QueueOverflowException e ) {
        std::cout << e.what();
    }
    ASSERT_EQ(queue->peek(), 3);
}

TEST(QueueTests, Dequeue) {
    auto* queue = new Queue<int>(3);
    try {
        queue->enqueue((3));
        queue->enqueue((2));
        queue->dequeue();
    } catch (QueueUnderflowException e) {
    }
    ASSERT_EQ(queue->peek(), 2);
}
