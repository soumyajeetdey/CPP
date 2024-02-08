// This program was written by Soumya Dey during classroom training.
// Purpose: Implement a function to check if a string is a palindrome in C++.

#include <iostream>
#include <cstring>

// Function to check if a string is a palindrome
bool isPalindrome(const char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; ++i) {
        if (str[i] != str[length - i - 1]) {
            return false; // Characters at opposite ends do not match
        }
    }
    return true; // All characters matched, string is a palindrome
}

int main() {
    const char* str = "radar";

    // Check if the string is a palindrome using the function
    if (isPalindrome(str)) {
        std::cout << "\"" << str << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << str << "\" is not a palindrome." << std::endl;
    }

    return 0;
}
