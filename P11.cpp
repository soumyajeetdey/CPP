// This program was written by Soumya Dey during classroom training.
// Purpose: Take two input variables from the user and swap them without using a temporary variable in C++.

#include <iostream>

int main() {
    // Declare variables to store user input
    int num1, num2;

    // Prompt the user to enter two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Before swapping:" << std::endl;
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Swap the numbers without using a temporary variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    std::cout << "After swapping:" << std::endl;
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}