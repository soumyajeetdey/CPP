// Purpose: Implement a garbage collector to automatically reclaim memory from unused objects.

#include <iostream>
#include <vector>
#include <memory>

class GarbageCollector {
private:
    std::vector<std::shared_ptr<void>> objects;

public:
    template<typename T, typename... Args>
    std::shared_ptr<T> makeObject(Args&&... args) {
        std::shared_ptr<T> obj = std::make_shared<T>(std::forward<Args>(args)...);
        objects.push_back(obj);
        return obj;
    }
};

int main() {
    GarbageCollector gc;

    std::shared_ptr<int> ptr1 = gc.makeObject<int>(10);
    std::shared_ptr<int> ptr2 = gc.makeObject<int>(20);

    std::cout << "Ptr1 value: " << *ptr1 << std::endl;
    std::cout << "Ptr2 value: " << *ptr2 << std::endl;

    return 0;
}
