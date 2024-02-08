// This program was written by Soumya Dey during classroom training.
// Purpose: Calculate the area of a circle using function overloading in C++.

#include <iostream>
#define PI 3.14159265358979323846

// Function to calculate the area of a circle with radius
double area(double radius) {
    return PI * radius * radius;
}

// Function to calculate the area of a circle with diameter
double area(int diameter) {
    double radius = diameter / 2.0;
    return PI * radius * radius;
}

int main() {
    double radius;
    int diameter;

    // Calculate area using radius
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    std::cout << "Area of the circle with radius " << radius << " is: " << area(radius) << std::endl;

    // Calculate area using diameter
    std::cout << "Enter the diameter of the circle: ";
    std::cin >> diameter;
    std::cout << "Area of the circle with diameter " << diameter << " is: " << area(diameter) << std::endl;

    return 0;
}
