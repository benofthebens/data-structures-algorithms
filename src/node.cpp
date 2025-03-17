//
// Created by benja on 14/03/2025.
//
#include "node.h"

Node::Node(int const data) {
    this->pointer = nullptr;
    this->data = data;
}

Node::~Node() {
    this->pointer = nullptr;
}

void Node::set_pointer(Node *node) {
    pointer = node;
}

int Node::get_data() {
    return data;
}

Node *Node::get_pointer() const {
    return pointer;
}
