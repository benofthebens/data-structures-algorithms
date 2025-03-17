
#include <iostream>
#include "linked_list.h"
#include "node.h"
#include "queue.h"
#include "stack.h"
#include "../exceptions/stack_overflow_exception.h"
#include "../exceptions/stack_underflow_exception.h"

int main() {
    auto* linked_list = new LinkedList();

    linked_list->insert(new Node(1));
    linked_list->insert(new Node(2));

    delete linked_list;
    return 0;
}
