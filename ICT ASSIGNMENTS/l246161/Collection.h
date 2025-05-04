#ifndef COLLECTION_H
#define COLLECTION_H

template <typename U>
class Collection {
    U** entries;
    int maxItems, currentSize;
public:
    Collection(int max);
    void insert(U* obj);
    U* access(int index);
    int count();
    ~Collection();
};

template <typename U>
Collection<U>::Collection(int max) : maxItems(max), currentSize(0) {
    entries = new U*[maxItems];
}

template <typename U>
void Collection<U>::insert(U* obj) {
    if (currentSize < maxItems) {
        entries[currentSize++] = obj;
    }
}

template <typename U>
U* Collection<U>::access(int index) {
    if (index >= 0 && index < currentSize) return entries[index];
    return nullptr;
}

template <typename U>
int Collection<U>::count() { return currentSize; }

template <typename U>
Collection<U>::~Collection() {
    for (int i = 0; i < currentSize; ++i) delete entries[i];
    delete[] entries;
}

#endif
