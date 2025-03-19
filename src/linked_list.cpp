//
// Created by benja on 14/03/2025.
//

#include "linked_list.h"

#include <iostream>

template<typename T>
// Constructor
LinkedList<T>::LinkedList() {
    this->head = nullptr;
    this->length = 0;
}

template<typename T>
LinkedList<T>::~LinkedList() {
    if (head == nullptr)
        return;

    Node<T>* current = head;

    while (current != nullptr) {
        Node<T>* next = current->get_pointer(0);
        delete current;
        current = next;
    }

    head = nullptr;
}

template <typename T>
int LinkedList<T>::get_length() {
    return length;
}

template <typename T>
Node<T>* LinkedList<T>::get_head() const {
    return head;
}

template <typename T>
Node<T>* LinkedList<T>::get(const int i) const {
    if (i >= length || i < 0)
        return nullptr;

    Node<T>* current = head;

    int j = 0;
    while (current->get_pointer(0) != nullptr && j < i) {
        current = current->get_pointer(0);
        j++;
    }

    return current;
}

template <typename T>
void LinkedList<T>::print() {
    Node<T>* current = head;
    std::cout << "\t" << "Node" << "\t" << "Data" << "\t" << "Pointer" << std::endl;

    while (current != nullptr) {
        std::cout << current;
        std::cout << "\t" << current->get_data();
        std::cout << "\t" << current->get_pointer(0);
        std::cout << std::endl;
        current = current->get_pointer(0);
    }
}

template <typename T>
T LinkedList<T>::remove_at(const int i) {
    if (length <= i || i < 0 || head == nullptr)
        return 0;

    length--;

    if (i == 0) {
        T current_data = head->get_data();
        Node<T>* nextHead = head->get_pointer(0);
        delete head;
        head = nextHead;
        return current_data;
    }

    Node<T>* current = head;
    Node<T>* previous = nullptr;

    int j = 0;
    while (current->get_pointer(0) != nullptr && j != i) {
        previous = current;
        current = current->get_pointer(0);
        j++;
    }

    previous->set_edge(0,nullptr);
    previous->add_edge(current->get_pointer(0));
    current->set_edge(0, nullptr);

    T currentData = current->get_data();

    delete current;
    return currentData;
}

template <typename T>
void LinkedList<T>::insert(T data) {
    Node<T>* node = new Node(data);

    if (head == nullptr) {
        head = node;
        length += 1;
        head->add_edge(nullptr);
        return;
    }

    Node<T>* current = head;

    while (current->get_pointer(0) != nullptr) {
        current = current->get_pointer(0);
    }

    node->add_edge(nullptr);
    current->set_edge(0, node);
    length += 1;
}
template class LinkedList<int>;
template class LinkedList<Node<int>*>;
