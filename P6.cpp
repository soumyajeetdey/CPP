/* Radius -> Area */
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Declare constant for pi
    const double PI = 3.14159265358979323846;

    // Declare variables
    double radius, area;

    // Take input from the user for the radius
    cout << "Enter the radius of the circular area in feet: ";
    cin >> radius;

    // Calculate the area of the circular area
    area = PI * std::pow(radius, 2);

    // Print the total area
    cout << "The total area of the circular area with radius " << radius << " feet is: " << area << " square feet." << endl;

    return 0;
}