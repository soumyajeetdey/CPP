// This program was written by Soumya Dey during classroom training.
// Purpose: Find the largest and smallest among three numbers in C++.

#include <iostream>

int main() {
    // Declare variables to store the numbers
    int num1, num2, num3;

    // Prompt the user to enter three numbers
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    // Assume num1 as the largest and smallest initially
    int largest = num1;
    int smallest = num1;

    // Check if num2 is larger than the current largest
    if (num2 > largest) {
        largest = num2;
    }
    // Check if num3 is larger than the current largest
    if (num3 > largest) {
        largest = num3;
    }

    // Check if num2 is smaller than the current smallest
    if (num2 < smallest) {
        smallest = num2;
    }
    // Check if num3 is smaller than the current smallest
    if (num3 < smallest) {
        smallest = num3;
    }

    // Print the largest and smallest numbers
    std::cout << "Largest number: " << largest << std::endl;
    std::cout << "Smallest number: " << smallest << std::endl;

    return 0;
}