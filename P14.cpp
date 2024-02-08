// This program was written by Soumya Dey during classroom training.
// Purpose: Implement a simple calculator (addition, subtraction, multiplication, division) in C++.

#include <iostream>

int main() {
    // Declare variables to store user input and the result
    double num1, num2;
    char op;

    // Prompt the user to enter the operation and numbers
    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Perform the operation based on the operator entered
    switch (op) {
        case '+':
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << "Result: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid operator entered." << std::endl;
            break;
    }

    return 0;
}
