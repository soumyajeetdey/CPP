// This program was written by Soumya Dey during classroom training.
// Purpose: Implement a function to calculate the power of a number in C++.

#include <iostream>

// Function to calculate the power of a number
double power(double base, int exponent) {
    if (exponent == 0) {
        return 1; // Anything raised to the power of 0 is 1
    } else if (exponent < 0) {
        // If exponent is negative, calculate the reciprocal of the base raised to the positive exponent
        return 1 / power(base, -exponent);
    } else {
        // Otherwise, use recursion to calculate power
        return base * power(base, exponent - 1);
    }
}

int main() {
    double base;
    int exponent;

    // Prompt the user to enter the base and exponent
    std::cout << "Enter the base: ";
    std::cin >> base;
    std::cout << "Enter the exponent: ";
    std::cin >> exponent;

    // Calculate the power using the function
    double result = power(base, exponent);

    // Print the result
    std::cout << base << " raised to the power of " << exponent << " is: " << result << std::endl;

    return 0;
}
