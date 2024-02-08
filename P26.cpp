// This program was written by Soumya Dey during classroom training.
// Purpose: Reverse a string using pointers in C++.

#include <iostream>
#include <cstring>

// Function to reverse a string using pointers
void reverseString(char* str) {
    // Get the length of the string
    int length = strlen(str);

    // Initialize pointers to the beginning and end of the string
    char* start = str;
    char* end = str + length - 1;

    // Swap characters from start to end until they meet in the middle
    while (start < end) {
        // Swap characters pointed by start and end
        char temp = *start;
        *start = *end;
        *end = temp;

        // Move start pointer forward and end pointer backward
        start++;
        end--;
    }
}

int main() {
    // Declare and initialize a string
    char str[] = "Hello, world!";

    // Print the original string
    std::cout << "Original string: " << str << std::endl;

    // Call the function to reverse the string
    reverseString(str);

    // Print the reversed string
    std::cout << "Reversed string: " << str << std::endl;

    return 0;
}