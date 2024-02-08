// This program was written by Soumya Dey during classroom training.
// Purpose: Find the second largest element in an array in C++.

#include <iostream>

// Function to find the second largest element in an array
int secondLargest(int arr[], int size) {
    if (size < 2) {
        std::cerr << "Array should have at least two elements." << std::endl;
        return -1; // Return -1 indicating error
    }

    int largest = arr[0];
    int secondLargest = arr[0];

    // Find the largest element
    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    // Declare and initialize an array
    int arr[] = {10, 5, 20, 8, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Find the second largest element in the array
    int secondLargestElement = secondLargest(arr, size);

    // Print the second largest element
    if (secondLargestElement != -1) {
        std::cout << "Second largest element in the array: " << secondLargestElement << std::endl;
    }

    return 0;
}
