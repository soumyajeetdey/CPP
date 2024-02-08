/* Program to calculate value of a mathemetical expression z = (x+10)/3y */
#include <iostream>

using namespace std;

int main() {
    // Declare variables
    double x, y, z;

    // Take input for x and y from the user
    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of y: ";
    cin >> y;

    // Calculate the value of z
    z = (x + 10) / (3 * y);

    // Print the instered values
    cout << "x = " << x << endl
         << "y = " << y << endl;
    
    // Print the result
    cout << "The value of z is: " << z << endl;

    return 0;
}