// Program to implement a hash table with collision handling (using chaining)

#include <iostream>
#include <vector>
#include <list>

class HashTable {
private:
    std::vector<std::list<int>> table;
    int size;

    int hash(int key) {
        return key % size;
    }

public:
    HashTable(int initialSize) : size(initialSize) {
        table.resize(size);
    }

    void insert(int key) {
        int index = hash(key);
        table[index].push_back(key);
    }

    bool search(int key) {
        int index = hash(key);
        for (int num : table[index]) {
            if (num == key) {
                return true;
            }
        }
        return false;
    }

    void remove(int key) {
        int index = hash(key);
        table[index].remove(key);
    }
};

int main() {
    HashTable ht(10);
    ht.insert(10);
    ht.insert(20);
    ht.insert(15);

    std::cout << "Search for key 20: " << (ht.search(20) ? "Found" : "Not found") << std::endl;
    std::cout << "Search for key 25: " << (ht.search(25) ? "Found" : "Not found") << std::endl;

    ht.remove(20);
    std::cout << "Search for key 20 after removal: " << (ht.search(20) ? "Found" : "Not found") << std::endl;

    return 0;
}
