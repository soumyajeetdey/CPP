// Purpose: Implement a custom allocator to allocate and deallocate memory for objects.

#include <iostream>
#include <vector>
#include <memory>

template<typename T>
class MyAllocator {
public:
    typedef T value_type;

    MyAllocator() noexcept {}
    template<typename U>
    MyAllocator(const MyAllocator<U>&) noexcept {}

    T* allocate(std::size_t n) {
        return static_cast<T*>(::operator new(n * sizeof(T)));
    }

    void deallocate(T* p, std::size_t) noexcept {
        ::operator delete(p);
    }
};

int main() {
    std::vector<int, MyAllocator<int>> vec;
    vec.push_back(10);
    vec.push_back(20);

    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
