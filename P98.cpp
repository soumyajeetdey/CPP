// Purpose: Create a custom memory pool to efficiently manage memory allocations.

#include <iostream>
#include <vector>

class MemoryPool {
private:
    std::vector<int> pool;

public:
    MemoryPool(std::size_t size) : pool(size) {}

    void* allocate(std::size_t size) {
        for (std::size_t i = 0; i < pool.size(); ++i) {
            if (pool[i] == 0) {
                pool[i] = 1;
                return &pool[i];
            }
        }
        return nullptr;
    }
};

int main() {
    MemoryPool pool(10);
    int* ptr = static_cast<int*>(pool.allocate(sizeof(int)));

    if (ptr) {
        *ptr = 10;
        std::cout << "Allocated value: " << *ptr << std::endl;
    } else {
        std::cout << "Memory allocation failed!" << std::endl;
    }

    return 0;
}
