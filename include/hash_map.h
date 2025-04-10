#ifndef HASH_MAP_H
#define HASH_MAP_H

#include <array>

template <typename K, typename V>
class HashMap {
private:

    struct HashEntry {
        K key;
        V value;
        bool occupied = false;
    };

    unsigned int hash(K key);
    unsigned int capacity = 16;
    unsigned int size = 0;
    std::array<HashEntry, 16> buckets;
public:
    HashMap() {}
    ~HashMap() = default;
    void put(const K& key, const V& value);
    V& value_of(const K& key);
    bool contains_key(const K& value);
    bool is_empty();
};
#endif