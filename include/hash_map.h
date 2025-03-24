//
// Created by benja on 20/03/2025.
//

#ifndef HASH_MAP_H
#define HASH_MAP_H
#include <vector>

template <typename T, typename C>
class HashMap {
public:
    HashMap();
    ~HashMap();
    void add(T key, C value);
    void remove(T key);
private:
    int hash_function();

};
#endif //HASH_MAP_H
