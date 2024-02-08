// https://www.youtube.com/watch?v=ZzaPdXTrSb8

/* Program to use mathematical expressions*/

#include <iostream>

int main()
{
    double a = 10;
    int b = 3;
    int c = 20;
    
    int u = c % b;      // Remainder
    int v = ++a;        //pre-increment
    int w = a + b;      // addition
    int x = a - b;      // subtraction
    int y = a * b;      // Multiplication
    double z = a / b;   // Division
    
    std::cout << u <<std::endl;
    std::cout << v <<std::endl;
    std::cout << w <<std::endl;
    std::cout << x <<std::endl;
    std::cout << y <<std::endl;
    std::cout << "The number with 3 decimal places is: ";
    std::cout << z <<std::endl;

    return 0;
}