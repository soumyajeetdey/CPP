// This program was written by Soumya Dey during classroom training.
// Purpose: Swap two numbers using pointers in C++.

#include <iostream>

// Function to swap two numbers using pointers
void swapNumbers(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    // Declare and initialize two numbers
    int num1 = 5;
    int num2 = 10;

    std::cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Call the function to swap numbers using pointers
    swapNumbers(&num1, &num2);

    std::cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}
