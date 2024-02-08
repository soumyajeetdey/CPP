// This program was written by Soumya Dey during classroom training.
// Purpose: Find the sum of elements in an array in C++.

#include <iostream>

// Function to find the sum of elements in an array
int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    // Declare and initialize an array
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Find the sum of elements in the array
    int sum = sumOfArray(arr, size);

    // Print the sum
    std::cout << "Sum of elements in the array: " << sum << std::endl;

    return 0;
}
