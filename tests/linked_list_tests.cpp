//
// Created by benja on 14/03/2025.
//

#include <gtest/gtest.h>

#include "linked_list.h"
#include "node.h"

TEST(LinkedListTest, GetNode) {
    auto* linked_list = new LinkedList();
    auto* newNode = new Node(4);
    linked_list->insert(newNode);
    Node* gotten_node = linked_list->get(0);
    ASSERT_EQ(gotten_node, newNode);
}

TEST(LinkedListTest, GetNodeLargeIndex) {
    auto* linked_list = new LinkedList();
    linked_list->insert(new Node(4));
    ASSERT_EQ(linked_list->get(1), nullptr);
}

TEST(LinkedListTest, GetNodeSmallIndex) {
    auto* linked_list = new LinkedList();
    linked_list->insert(new Node(4));
    ASSERT_EQ(linked_list->get(-1), nullptr);
}