//
// Created by benja on 20/03/2025.
//

#ifndef TREE_DUPLICATE_DATA_EXCEPTION_H
#define TREE_DUPLICATE_DATA_EXCEPTION_H
#include <stdexcept>

class TreeDuplicateDataException : public std::runtime_error {
public:
    explicit TreeDuplicateDataException() : std::runtime_error("Data already exists in the tree"){}
};

#endif //TREE_DUPLICATE_DATA_EXCEPTION_H
