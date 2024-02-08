// This program was written by Soumya Dey during classroom training.
// Purpose: Find the Greatest Common Divisor (GCD) of two numbers using a function in C++.

#include <iostream>

// Function to find the GCD of two numbers
int gcd(int a, int b) {
    // Base case: If b is 0, GCD is a
    if (b == 0) {
        return a;
    }
    // Recursive call to find GCD
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    // Prompt the user to enter two numbers
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Find the GCD of the two numbers using the function
    int result = gcd(num1, num2);

    // Print the GCD
    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << result << std::endl;

    return 0;
}
