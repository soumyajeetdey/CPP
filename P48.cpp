// Program to allocate memory for an integer dynamically

#include <iostream>

int main() {
    int* ptr = new int;
    if (ptr != nullptr) {
        *ptr = 42;
        std::cout << "Value stored at dynamically allocated memory: " << *ptr << std::endl;
        delete ptr; // Free dynamically allocated memory
    } else {
        std::cerr << "Memory allocation failed!" << std::endl;
        return 1;
    }
    return 0;
}
