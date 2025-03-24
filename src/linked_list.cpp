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

// Deconstruct
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

/**
 * @author Benjamin Whalley
 * @brief A method that gets the node at index i, where the list is 0 indexed
 * @param i
 * @return node at index i
 */
template <typename T>
Node<T>* LinkedList<T>::at(const int i) const {
    // Check for invalid index
    if (i >= length || i < 0)
        return nullptr;

    Node<T>* current = head;

    int j = 0;
    while (current->get_pointer(0) != nullptr && j < i) {
        // Get next pointer
        current = current->get_pointer(0);
        j++;
    }

    return current;
}

/**
 * @author Benjamin Whalley
 * @brief finds node that contains a data value of type T
 * @param data of a generic type T
 * @return node that contains data
 */
template <typename T>
Node<T>* LinkedList<T>::get(T data) {
    Node<T>* current = head;
    while (current != nullptr) {
        if (current->eq(new Node(data))) {
            return current;
        }
        current = current->get_pointer(0);
    }
    // If the data is not found return null
    return nullptr;
}

/**
 * @author Benjamin Whalley
 * @brief Outputs to console a Table representation of a linkedlist
 */
template <typename T>
void LinkedList<T>::print() {
    Node<T>* current = head;
    // Print the headings
    std::cout << "\t" << "Node" << "\t" << "Data" << "\t" << "Pointer" << std::endl;

    while (current != nullptr) {
        std::cout << current; // prints reference to current
        std::cout << "\t" << current->get_data(); // prints the data of current
        std::cout << "\t" << current->get_pointer(0); // prints the pointer of current
        std::cout << std::endl;
        // Moves to next Node
        current = current->get_pointer(0);
    }
}

/**
 * @author Benjamin Whalley
 * @brief removes node at index i, where the list is 0 indexed.
 * @param i The index to be removed
 * @return the value at the index that has been removed
 */
template <typename T>
T LinkedList<T>::remove_at(const int i) {
    // Checks for invalid index and empty list
    if (length <= i || i < 0 || head == nullptr)
        return 0;

    length--;
    if (i == 0) {
        // Gets data to be returned
        T current_data = head->get_data();
        // Moves the list down by one
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

    // Update pointers
    previous->set_edge(0,nullptr);
    previous->add_edge(current->get_pointer(0)->get_data());
    current->set_edge(0, nullptr);

    // Gets data to be returned
    T currentData = current->get_data();

    delete current;
    return currentData;
}

/**
 * @author Benjamin Whalley
 * @brief Inserts data of type T to the end of the linked list.
 * @param data Data to be inserted into the linked list
 */
template <typename T>
void LinkedList<T>::insert(T data) {
    // instantiate node with data
    auto* node = new Node(data);

    if (head == nullptr) {
        head = node;
        length += 1;
        head->add_edge(0);
        return;
    }

    Node<T>* current = head;
    // Transverse to the end of the list
    while (current->get_pointer(0) != nullptr) {
        current = current->get_pointer(0);
    }

    // insert node at the end
    node->add_edge(0);
    current->set_edge(0, node);
    length += 1;
}

template class LinkedList<int>;
template class LinkedList<Node<int>*>;
