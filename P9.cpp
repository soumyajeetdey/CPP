/* Dice rolling */

#include <iostream>
#include <cstdlib>  // For rand() and srand() functions
#include <ctime>    // For time() function

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // Declare variables
    char rollAgain;

    do {
        // Prompt the user to press Enter to roll the dice
        std::cout << "Press Enter to roll the dice...";
        std::cin.ignore();  // Wait for user to press Enter

        // Generate a random number between 1 and 6
        int diceResult = rand() % 6 + 1;

        // Display the result
        std::cout << "You rolled a " << diceResult << std::endl;

        // Ask if the user wants to roll again
        std::cout << "Do you want to roll again? (y/n): ";
        std::cin >> rollAgain;

        // Clear the input buffer
        //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    } while (rollAgain == 'y' || rollAgain == 'Y');

    std::cout << "Goodbye! Thanks for playing." << std::endl;

    return 0;
}