#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <vector>

template <typename Type>
class HashTable {
public:
    HashTable() {
        size = 1;

        hashTable.resize(size);
    }

    void insert(int key, Type value) {
        int index = hash(key);

        if (!hashTable[index].size()) {
            usedCells++;
        }

        bool have = false;
        for(auto &hash : hashTable[index]) {
            if (hash.first == key) {
                hash.second = value;
                have = true;
                break;
            }
        }

        if (!have) {
            hashTable[index].push_back({key, value});
        }

        if (100 * usedCells / size > cap) {
            expand();
        }
    }

    bool find(int key) {
        int index = hash(key);
        for(auto hash : hashTable[index]) {
            if (hash.first == key) {
                return true;
            }
        }

        return false;
    }

    Type get(int key) {
        int index = hash(key);

        for(auto hash : hashTable[index]) {
            if (hash.first == key) {
                return hash.second;
            }
        }

        return Type();
    }

    void remove(int key) {
        int index = hash(key);
        auto it = hashTable[index].begin();

        bool removed = false;
        while(it != hashTable[index].end()) {
            if (it->first == key) {
                hashTable[index].erase(it);
                removed = true;
                break;
            }

            ++it;
        }

        if (!removed) {
            return;
        }

        if (!hashTable[index].size()) {
            usedCells--;
        }

        if (100 * usedCells > size < 100 - cap) {
            inverseExpand();
        }
    }

    std::vector<std::vector<std::pair<int, Type>>> getHashTable() {
        return hashTable;
    }

private:
    int size;
    int usedCells = 0;
    std::vector <std::vector <std::pair <int, Type>> > hashTable;
    const int cap = 75;

    int hash(int key) {
        return key % size;
    }

    void expand() {
        std::vector <std::pair<int, Type> > queries;
        for(int i = 0; i < size; i++) {
            for(auto value : hashTable[i]) {
                queries.push_back(value);
            }
        }

        size *= 2;
        usedCells = 0;

        hashTable.assign(size, std::vector <std::pair<int, Type> > ());

        for(auto value : queries) {
            insert(value.first, value.second);
        }
    }

    void inverseExpand() {
        std::vector <std::pair<int, Type> > queries;
        for(int i = 0; i < size; i++) {
            for(auto value : hashTable[i]) {
                queries.push_back(value);
            }
        }

        size /= 2;
        usedCells = 0;

        hashTable.assign(size, std::vector <std::pair<int, Type> > ());


        for(auto value : queries) {
            insert(value.first, value.second);
        }
    }

};


#endif // HASHTABLE_H
