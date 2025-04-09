
#include "linked_list.h"
#include "node.h"

#include <iostream>

template<typename T>
int LinkedList<T>::get_size() const {
    return size;
}

template<typename T>
bool LinkedList<T>::contains(const T data) const {
    return false;
}

template<typename T>
bool LinkedList<T>::is_empty() const {
    return head == nullptr;
}

template<typename T>
T LinkedList<T>::remove(const int i) {

    size--;
    if (i == 0) {
        T head_data = head->get_data();
        Node<T>* new_head = head->get_adj_nodes()->at(0);
        delete head;
        head = new_head;
        return head_data;
    }

    Node<T>* current = head;
    Node<T>* previous = nullptr;

    int j = 0;

    while (current->get_adj_nodes()->at(0) != nullptr && j != i) {
        previous = current;
        current = current->get_adj_nodes()->at(0);
        j++;
    }

    previous->assign(0, current->get_adj_nodes()->at(0));

    current->assign(0, nullptr);

    T data = current->get_data();

    delete current;

    return data;
}

template<typename T>
T LinkedList<T>::get(const int i) const {
    if (i == 0)
        return head->get_data();

    Node<T>* current = head;

    int j = 0; 
    while (current->get_adj_nodes()->at(0) != nullptr && j <= i) {
        current = current->get_adj_nodes()->at(0);
        j++;
    }

    return current->get_data();
}

template<typename T>
void LinkedList<T>::add(const int i, const T data) {
}

template<typename T>
void LinkedList<T>::push(T data) {
    Node<T>* node = new Node<T>(data);
    node->set_adj_nodes_size(1);

    if (head == nullptr) {
        head = node;
        size++;
        return;
    }

    Node<T>* current = head;
    while (current->get_adj_nodes()->at(0) != nullptr)
        current = current->get_adj_nodes()->at(0);

    current->assign(0, node);
    std::cout << current->get_adj_nodes()->at(0) << std::endl;
    size++;
}

template<typename T>
void LinkedList<T>::print() const {
    Node<T>* current = head;

    while (current != nullptr) {
        std::cout << current->get_data() << ",";
        current = current->get_adj_nodes()->at(0);
    }

    std::cout << std::endl;
}


template class LinkedList<int>;
