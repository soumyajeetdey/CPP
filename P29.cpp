// This program was written by Soumya Dey during classroom training.
// Purpose: Check if a number is prime using a function in C++.

#include <iostream>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // 0 and 1 are not prime
    }

    // Check divisibility from 2 to sqrt(num)
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false; // If num is divisible by any number, it's not prime
        }
    }

    return true; // If no divisors found, num is prime
}

int main() {
    int num;

    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Check if the number is prime using the function
    if (isPrime(num)) {
        std::cout << num << " is a prime number." << std::endl;
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}
