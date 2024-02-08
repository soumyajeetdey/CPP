// Program to demonstrate overloading the '+' and '-' operators for complex numbers

#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r, double i) : real(r), imaginary(i) {}

    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    Complex operator-(const Complex& other) {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    void display() {
        std::cout << "Real Part: " << real << ", Imaginary Part: " << imaginary << std::endl;
    }
};

int main() {
    Complex num1(3, 4);
    Complex num2(1, -2);

    Complex sum = num1 + num2;
    Complex difference = num1 - num2;

    std::cout << "Sum: ";
    sum.display();
    std::cout << "Difference: ";
    difference.display();

    return 0;
}
