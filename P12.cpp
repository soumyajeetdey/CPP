// This program was written by Soumya Dey during classroom training.
// Purpose: Check if a number is even or odd in C++.

#include <iostream>

int main() {
    // Declare a variable to store the number
    int number;

    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check if the number is even or odd
    if (number % 2 == 0) {
        std::cout << number << " is even." << std::endl;
    } else {
        std::cout << number << " is odd." << std::endl;
    }

    return 0;
}