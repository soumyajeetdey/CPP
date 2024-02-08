// This program was written by Soumya Dey during classroom training.
// Purpose: Find the length of a string using pointers in C++.

#include <iostream>

// Function to find the length of a string using pointers
int stringLength(const char* str) {
    // Initialize a pointer to the beginning of the string
    const char* ptr = str;

    // Iterate through the string until reaching the null terminator
    while (*ptr != '\0') {
        ptr++; // Move the pointer to the next character
    }

    // Calculate the length by subtracting the starting address from the current address
    return ptr - str;
}

int main() {
    const char* str = "Hello, world!";

    // Call the function to find the length of the string
    int length = stringLength(str);

    // Print the length of the string
    std::cout << "Length of the string: " << length << std::endl;

    return 0;
}
