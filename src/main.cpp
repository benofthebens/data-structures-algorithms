
#include <iostream>

#include "graph.h"
#include "linked_list.h"
#include "node.h"
#include "queue.h"
#include "stack.h"
#include "tree.h"

int main() {
    Tree<int>* tree = new Tree<int>();
    tree->add(0, 4);
    tree->add(4,5);
    std::cout << tree->get(4) << std::endl;
    return 0;
}
