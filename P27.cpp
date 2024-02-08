// This program was written by Soumya Dey during classroom training.
// Purpose: Implement a function to find the maximum element in an array using pointers in C++.

#include <iostream>

// Function to find the maximum element in an array using pointers
int findMaxElement(int* arr, int size) {
    // Initialize a pointer to the beginning of the array
    int* ptr = arr;

    // Initialize the maximum element to the first element of the array
    int maxElement = *ptr;

    // Iterate through the array using pointers
    for (int i = 1; i < size; ++i) {
        // Move the pointer to the next element
        ptr++;

        // Update the maximum element if the current element is greater
        if (*ptr > maxElement) {
            maxElement = *ptr;
        }
    }

    return maxElement;
}

int main() {
    // Declare and initialize an array
    int arr[] = {10, 5, 20, 8, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call the function to find the maximum element in the array
    int maxElement = findMaxElement(arr, size);

    // Print the maximum element
    std::cout << "Maximum element in the array: " << maxElement << std::endl;

    return 0;
}
