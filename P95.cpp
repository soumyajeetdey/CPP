// Purpose: Implement move semantics for a custom class to efficiently transfer resources.

#include <iostream>

class MyClass {
private:
    int* data;

public:
    MyClass() : data(nullptr) {}
    MyClass(int value) : data(new int(value)) {}
    MyClass(const MyClass& other) : data(new int(*other.data)) {}
    MyClass(MyClass&& other) noexcept : data(other.data) {
        other.data = nullptr;
    }
    ~MyClass() {
        delete data;
    }

    MyClass& operator=(const MyClass& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);
        }
        return *this;
    }

    MyClass& operator=(MyClass&& other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;
            other.data = nullptr;
        }
        return *this;
    }

    void display() {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2(std::move(obj1));

    obj2.display();

    return 0;
}
