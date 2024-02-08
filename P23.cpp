// This program was written by Soumya Dey during classroom training.
// Purpose: Implement a function to concatenate two strings in C++.

#include <iostream>
#include <cstring>

// Function to concatenate two strings
char* concatenateStrings(const char* str1, const char* str2) {
    // Calculate the lengths of the input strings
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Allocate memory for the concatenated string
    char* result = new char[len1 + len2 + 1];

    // Copy the first string into the result
    strcpy(result, str1);

    // Concatenate the second string to the result
    strcat(result, str2);

    return result;
}

int main() {
    const char* str1 = "Hello, ";
    const char* str2 = "world!";

    // Concatenate the strings using the function
    char* concatenatedString = concatenateStrings(str1, str2);

    // Print the concatenated string
    std::cout << "Concatenated string: " << concatenatedString << std::endl;

    // Deallocate memory for the concatenated string
    delete[] concatenatedString;

    return 0;
}
