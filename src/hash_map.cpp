#include "hash_map.h"
#include "node.h"

template <typename K, typename V>
unsigned int HashMap<K, V>::hash(K key) {
    return key % capacity;
}

template <typename K, typename V>
void HashMap<K, V>::put(const K& key, const V& value) {
    if (contains_key(key))
        return;

    unsigned int offset = hash(key);

    while (buckets.at(offset).occupied && buckets.at(offset).key != key) {
        offset = (offset + 1) % capacity;
    }

    buckets.at(offset).value = value;
    buckets.at(offset).key = key;
    buckets.at(offset).occupied = true;
    size++;
}

template <typename K, typename V>
V& HashMap<K, V>::value_of(const K& key) {
    unsigned int bucket_index = hash(key);
    HashEntry bucket_entry = buckets.at(bucket_index);

    if (bucket_entry.key == key) {
        return bucket_entry.value;
    }

    while (buckets.at(bucket_index).occupied && buckets.at(bucket_index).key != key) {
        bucket_index = (bucket_index + 1) % capacity;
    }

    return buckets.at(bucket_index).value;
}

template<typename K, typename V>
bool HashMap<K, V>::contains_key(const K& key) {
    if (is_empty()) return false;

    for (int i = 0; i < capacity; i++) {
        if (!buckets.at(i).occupied) continue;
        if (buckets.at(i).key == key)
            return true;
    }
    return false;
}

template<typename K, typename V>
bool HashMap<K, V>::is_empty() {
    return (size == 0);
}


template class HashMap<int, int>;
template class HashMap<int, Node<int>*>;
