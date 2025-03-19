
#include <iostream>

#include "graph.h"
#include "linked_list.h"
#include "node.h"
#include "queue.h"
#include "stack.h"
#include "../exceptions/stack_overflow_exception.h"
#include "../exceptions/stack_underflow_exception.h"

int main() {
    auto* graph = new Graph<Node<int>*>();

    auto* node = new Node(4);
    auto* another_node = new Node(3);

    another_node->add_edge(node);
    node->add_edge(another_node);

    graph->add_node(node);
    graph->add_node(another_node);

    delete graph;

    return 0;
}
