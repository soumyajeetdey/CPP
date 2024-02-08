// This program was written by Soumya Dey during classroom training.
// Purpose: Check if a given array is sorted in non-decreasing order in C++.

#include <iostream>

// Function to check if an array is sorted in non-decreasing order
bool isSorted(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            return false; // Array is not sorted
        }
    }
    return true; // Array is sorted
}

int main() {
    // Declare and initialize an array
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 2, 1, 4, 5};

    // Get the size of the arrays
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Check if the arrays are sorted
    if (isSorted(arr1, size1)) {
        std::cout << "Array 1 is sorted." << std::endl;
    } else {
        std::cout << "Array 1 is not sorted." << std::endl;
    }

    if (isSorted(arr2, size2)) {
        std::cout << "Array 2 is sorted." << std::endl;
    } else {
        std::cout << "Array 2 is not sorted." << std::endl;
    }

    return 0;
}