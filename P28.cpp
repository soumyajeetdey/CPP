// This program was written by Soumya Dey during classroom training.
// Purpose: Create a dynamic array of integers and perform operations in C++.

#include <iostream>

int main() {
    // Declare variables
    int size;

    // Prompt the user to enter the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Create a dynamic array of integers
    int* arr = new int[size];

    // Initialize the array elements
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 10; // Assigning some values for demonstration
    }

    // Print the array elements
    std::cout << "Array elements:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Modify an array element
    int indexToModify;
    std::cout << "Enter the index of the element to modify: ";
    std::cin >> indexToModify;
    if (indexToModify >= 0 && indexToModify < size) {
        std::cout << "Enter the new value for the element at index " << indexToModify << ": ";
        std::cin >> arr[indexToModify];
    } else {
        std::cout << "Invalid index!" << std::endl;
    }

    // Print the modified array
    std::cout << "Modified array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate the dynamic array
    delete[] arr;

    return 0;
}
