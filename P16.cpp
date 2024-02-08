// This program was written by Soumya Dey during classroom training.
// Purpose: Find the factorial of a number in C++.

#include <iostream>

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    } else {
        // Recursive call to calculate factorial
        return n * factorial(n - 1);
    }
}

int main() {
    // Declare a variable to store the number
    int number;

    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check if the number is negative
    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        // Calculate factorial and display the result
        unsigned long long fact = factorial(number);
        std::cout << "Factorial of " << number << " is: " << fact << std::endl;
    }

    return 0;
}
