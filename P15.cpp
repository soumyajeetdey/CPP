// This program was written by Soumya Dey during classroom training.
// Purpose: Check if a year is a leap year in C++.

#include <iostream>

int main() {
    // Declare a variable to store the year
    int year;

    // Prompt the user to enter a year
    std::cout << "Enter a year: ";
    std::cin >> year;

    // Check if the year is divisible by 4
    if (year % 4 == 0) {
        // If the year is divisible by 100, check if it's also divisible by 400
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                std::cout << year << " is a leap year." << std::endl;
            } else {
                std::cout << year << " is not a leap year." << std::endl;
            }
        } else {
            std::cout << year << " is a leap year." << std::endl;
        }
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}