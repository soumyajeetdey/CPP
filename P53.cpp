// Program to implement a stack using dynamic memory allocation

#include <iostream>

class Stack {
private:
    int* data;
    int top;
    int capacity;

public:
    Stack(int size) : top(-1), capacity(size) {
        data = new int[capacity];
    }

    ~Stack() {
        delete[] data;
    }

    void push(int value) {
        if (top < capacity - 1) {
            data[++top] = value;
            std::cout << "Pushed: " << value << std::endl;
        } else {
            std::cerr << "Stack overflow!" << std::endl;
        }
    }

    int pop() {
        if (top >= 0) {
            return data[top--];
        } else {
            std::cerr << "Stack underflow!" << std::endl;
            return -1; // Placeholder for empty stack
        }
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack stack(5);

    stack.push(10);
    stack.push(20);
    stack.push(30);

    while (!stack.isEmpty()) {
        std::cout << "Popped: " << stack.pop() << std::endl;
    }

    return 0;
}
