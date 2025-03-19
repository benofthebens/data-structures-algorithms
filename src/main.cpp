
#include <iostream>

#include "graph.h"
#include "linked_list.h"
#include "node.h"
#include "queue.h"
#include "stack.h"
#include "../exceptions/stack_overflow_exception.h"
#include "../exceptions/stack_underflow_exception.h"

int main() {
    Graph<int>* graph = new Graph<int>();

    Node<int>* epic_node = new Node<int>(4);
    Node<int>* another_epic_node = new Node<int>(5);

    graph->add_node(another_epic_node);
    graph->add_node(epic_node);

    epic_node->add_edge(another_epic_node);
    another_epic_node->add_edge(epic_node);

    return 0;
}
