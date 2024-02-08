// This program was written by Soumya Dey during classroom training.
// Purpose: Take user input and print it in C++.

#include <iostream>
#include <string>

int main() {
    // Declare a variable to store user input
    std::string userInput;

    // Prompt the user to enter a message
    std::cout << "Enter a message: ";

    // Take user input
    std::getline(std::cin, userInput);

    // Print the user input
    std::cout << "You entered: " << userInput << std::endl;

    return 0;
}