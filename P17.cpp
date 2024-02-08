// This program was written by Soumya Dey during classroom training.
// Purpose: Generate Fibonacci series up to n terms in C++.

#include <iostream>

// Function to generate Fibonacci series up to n terms
void fibonacci(int n) {
    int first = 0, second = 1, next;

    std::cout << "Fibonacci series up to " << n << " terms: ";

    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        std::cout << next << " ";
    }

    std::cout << std::endl;
}

int main() {
    // Declare a variable to store the number of terms
    int terms;

    // Prompt the user to enter the number of terms
    std::cout << "Enter the number of terms for Fibonacci series: ";
    std::cin >> terms;

    // Check if the number of terms is non-negative
    if (terms <= 0) {
        std::cout << "Number of terms should be greater than zero." << std::endl;
    } else {
        // Generate Fibonacci series and display it
        fibonacci(terms);
    }

    return 0;
}
