
#include <iostream>

#include "graph.h"
#include "linked_list.h"
#include "node.h"
#include "queue.h"
#include "stack.h"
#include "tree.h"
#include "../exceptions/stack_overflow_exception.h"
#include "../exceptions/stack_underflow_exception.h"

int main() {
    Tree<int>* tree = new Tree<int>();
    int data = 4;
    tree->add(0, data);
    tree->add(4, 5);


    return 0;
}
