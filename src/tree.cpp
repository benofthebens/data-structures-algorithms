#include "tree.h"

#include "queue.h"
//
// Created by benja on 20/03/2025.
//
template<typename T>
Tree<T>::Tree() {
    this->root = nullptr;
}

template <typename T>
Tree<T>::~Tree() {
    delete root;
}

template<typename T>
void Tree<T>::add(T parent_data, T data) {
    if (root == nullptr) {
        root = new Node(data);
        return;
    }
    Node<T>* parent = get(parent_data);
    parent->add_edge(data);
}

template<typename T>
T Tree<T>::remove() {


}

template<typename T>
Node<T> *Tree<T>::get(T data) {
    auto* current = root;
    auto* queue = new Queue<Node<T>*>(200);
    queue->enqueue(current);

    while (!queue->is_empty()) {
        current = queue->dequeue();
        std::vector<Node<T>*>* successors = current->get_all_pointers();
        if (current->eq(new Node(data))) {
            delete queue;
            return current;
        }
        for (int i = 0; i < successors->size(); i++) {
            if (successors->at(i)->eq(new Node(data))) {
                delete queue;
                return successors->at(i);
            }
            queue->enqueue(successors->at(i));
        }
    }
    delete queue;
    return nullptr;
}

template class Tree<int>;
