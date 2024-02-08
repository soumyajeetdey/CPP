// This program was written by Soumya Dey during classroom training.
// Purpose: Implement a simple guessing game in C++.

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    srand(time(nullptr));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Guessing Game!" << std::endl;
    std::cout << "Try to guess the secret number between 1 and 100." << std::endl;

    // Keep looping until the user guesses the correct number
    while (true) {
        // Prompt the user to guess the number
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        // Check if the guess is correct
        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << std::endl;
            break;
        } else if (guess < secretNumber) {
            std::cout << "Too low. Try again." << std::endl;
        } else {
            std::cout << "Too high. Try again." << std::endl;
        }
    }

    return 0;
}