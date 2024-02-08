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

