//
// Created by benja on 19/03/2025.
//

#include <gtest/gtest.h>

#include "graph.h"

TEST(GraphTests, AddNode) {

}
TEST(GraphTests, GetNode) {
    auto* graph = new Graph<Node<int>*>();
    auto* node = new Node(3);
    auto * another_node = new Node(5);

    node->add_edge(another_node);

    graph->add_node(node);
    graph->add_node(another_node);
    std::cout << graph->get_node_at(1)->get_data()->get_data() << std::endl;

    ASSERT_EQ(graph->get_node_at(0)->get_data()->get_data(),node->get_data()) ;
}
