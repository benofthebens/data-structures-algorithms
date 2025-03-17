//
// Created by benja on 14/03/2025.
//

#include "linked_list.h"

#include <iostream>

// Constructor
LinkedList::LinkedList() {
    this->head = nullptr;
    this->length = 0;
}

// Destructor
LinkedList::~LinkedList() {
    if (head == nullptr)
        return;

    Node* current = head;

    while (current != nullptr) {
        Node* next = current->get_pointer();
        delete current;
        current = next;
    }

    head = nullptr;
}

// Public Methods
int LinkedList::get_length() {
    return length;
}

Node *LinkedList::get_head() const {
    return head;
}

Node *LinkedList::get(const int i) const {
    if (i >= length || i < 0)
        return nullptr;

    Node* current = head;

    for (int j = i; j > 0; j--) {
        current = current->get_pointer();
    }

    return current;
}

void LinkedList::print() {
    Node* current = head;
    std::cout << "\t" << "Node" << "\t" << "Data" << "\t" << "Pointer" << std::endl;

    while (current != nullptr) {
        std::cout << current;
        std::cout << "\t" << current->get_data();
        std::cout << "\t" << current->get_pointer();
        std::cout << std::endl;
        current = current->get_pointer();
    }
}

int LinkedList::remove(const int data) {
    if (this->head == nullptr)
        return 0;

    if (this->head->get_data() == data) {
        int currentData = this->head->get_data();
        delete this->head;
        head = nullptr; // Make sure head is updated after removal
        length--;
        return currentData;
    }

    Node* current = this->head;
    Node* previous = nullptr;

    while (current->get_pointer() != nullptr && current->get_data() != data) {
        previous = current;
        current = current->get_pointer();
    }

    if (previous == nullptr)
        return 0;

    previous->set_pointer(current->get_pointer());
    current->set_pointer(nullptr);
    int currentData = current->get_data();

    delete current;
    length--;
    return currentData;
}

int LinkedList::remove_at(const int i) {
    if (length <= i || i < 0 || head == nullptr)
        return 0;

    length--;

    if (i == 0) {
        int current_data = head->get_data();
        Node* nextHead = head->get_pointer();
        delete head;
        head = nextHead;
        return current_data;
    }

    Node* current = head;
    Node* previous = nullptr;

    for (int j = 0; j < i; j++) {
        previous = current;
        current = current->get_pointer();
    }

    previous->set_pointer(current->get_pointer());
    current->set_pointer(nullptr);

    int currentData = current->get_data();

    delete current;
    return currentData;
}

void LinkedList::insert(Node *node) {
    if (head == nullptr) {
        head = node;
        length += 1;
        return;
    }

    Node* current = head;

    while (current->get_pointer() != nullptr) {
        current = current->get_pointer();
    }

    current->set_pointer(node);
    length += 1;
}
