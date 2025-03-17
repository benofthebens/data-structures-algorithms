//
// Created by benja on 17/03/2025.
//
#include <gtest/gtest.h>

#include "stack.h"
#include "../exceptions/stack_overflow_exception.h"
#include "../exceptions/stack_underflow_exception.h"

TEST(StackTests, StackPush) {
    auto* stack = new Stack(5);

    try {
        stack->push(new Node(5));
        stack->push(new Node(4));
    } catch (StackOverFlowException e) {
        std::cout << e.what();
    } catch (StackUnderFlowException e) {
        std::cout << e.what();
    }
    ASSERT_EQ(stack->peek(), 4);
}

TEST(StackTests, StackPop) {
    auto* stack = new Stack(5);
    try {
        stack->push(new Node(5));
        stack->push(new Node(4));
        stack->push(new Node(3));
        stack->pop();
    } catch (StackOverFlowException e) {
        std::cout << e.what();
    } catch (StackUnderFlowException e) {
        std::cout << e.what();
    }
    ASSERT_EQ(stack->peek(), 4);
    ASSERT_EQ(stack->pop(), 4);
    ASSERT_EQ(stack->peek(), 5);
}
