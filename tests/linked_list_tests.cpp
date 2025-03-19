//
// Created by benja on 14/03/2025.
//

#include <gtest/gtest.h>

#include "linked_list.h"
#include "node.h"

TEST(LinkedListTest, GetNode) {
    auto* linked_list = new LinkedList<int>();
    linked_list->insert(4);
    Node<int>* gotten_node = linked_list->get(0);
    ASSERT_EQ(4, gotten_node->get_data());
}

TEST(LinkedListTest, GetNodeLargeIndex) {
    auto* linked_list = new LinkedList<int>();
    linked_list->insert(new Node<int>(4));
    ASSERT_EQ(linked_list->get(1), nullptr);
}

TEST(LinkedListTest, GetNodeSmallIndex) {
    auto* linked_list = new LinkedList<int>();
    linked_list->insert(new Node<int>(4));
    ASSERT_EQ(linked_list->get(-1), nullptr);
}