// Purpose: Use smart pointers to automatically manage memory and prevent memory leaks.

#include <iostream>
#include <memory>

class MyClass {
public:
    void display() {
        std::cout << "Hello from MyClass" << std::endl;
    }
};

int main() {
    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();
    std::shared_ptr<MyClass> ptr2 = ptr1;

    ptr1->display();
    ptr2->display();

    return 0;
}
