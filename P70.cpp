// Program to implement a try-catch block for handling division by zero

#include <iostream>

int main() {
    int a = 10, b = 0;
    try {
        if (b == 0) {
            throw std::runtime_error("Division by zero");
        }
        std::cout << "Result: " << a / b << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
