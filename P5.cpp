/*celsius to fahrenheit*/

#include <iostream>

using namespace std;

int main() {
    // Declare variables
    double celsius, fahrenheit;

    // Take input from the user in centigrade
    cout << "Enter temperature in degrees Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Display both values in a meaningful sentence
    cout << "Temperature in Celsius: " << celsius << " degrees Celsius" << endl;
    cout << "Temperature in Fahrenheit: " << fahrenheit << " degrees Fahrenheit" << endl;

    return 0;
}