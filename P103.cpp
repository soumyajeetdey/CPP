// Purpose: Demonstrate the use of smart pointers (unique_ptr, shared_ptr) in C++.

#include <iostream>
#include <memory>

class MyClass {
public:
    void display() {
        std::cout << "Hello from MyClass" << std::endl;
    }
};

int main() {
    // Example 1: unique_ptr
    std::unique_ptr<MyClass> uniquePtr(new MyClass());
    uniquePtr->display();

    // Example 2: shared_ptr
    std::shared_ptr<MyClass> sharedPtr(new MyClass());
    sharedPtr->display();

    return 0;
}
