// Purpose: Demonstrate the use of lambda expressions in C++.

#include <iostream>

int main() {
    // Example 1: Lambda function without parameters
    auto greet = []() {
        std::cout << "Hello, Lambda!" << std::endl;
    };
    greet();

    // Example 2: Lambda function with parameters
    auto add = [](int a, int b) {
        return a + b;
    };
    std::cout << "Sum: " << add(10, 20) << std::endl;

    return 0;
}
