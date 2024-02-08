// Program to implement a generic stack using templates

#include <iostream>

template<typename T>
class Stack {
private:
    static const int maxSize = 100;
    T data[maxSize];
    int top;

public:
    Stack() : top(-1) {}

    void push(T value) {
        if (top < maxSize - 1) {
            data[++top] = value;
        } else {
            std::cerr << "Stack overflow!" << std::endl;
        }
    }

    T pop() {
        if (top >= 0) {
            return data[top--];
        } else {
            std::cerr << "Stack underflow!" << std::endl;
            return T(); // Default value for T
        }
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    while (!intStack.isEmpty()) {
        std::cout << "Popped: " << intStack.pop() << std::endl;
    }

    Stack<std::string> strStack;
    strStack.push("Hello");
    strStack.push("World");

    while (!strStack.isEmpty()) {
        std::cout << "Popped: " << strStack.pop() << std::endl;
    }

    return 0;
}
