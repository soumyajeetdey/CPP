// Program to create a dynamic array of objects and perform operations

#include <iostream>

class MyClass {
private:
    int data;

public:
    MyClass(int val) : data(val) {}

    int getData() const {
        return data;
    }
};

int main() {
    int size = 5;
    MyClass* arr = new MyClass[size];

    // Initialize array elements
    for (int i = 0; i < size; ++i) {
        arr[i] = MyClass(i + 1);
    }

    // Display array elements
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": " << arr[i].getData() << std::endl;
    }

    delete[] arr; // Free dynamically allocated memory

    return 0;
}
