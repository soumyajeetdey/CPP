// Program to demonstrate a simple calculator using class and object concepts

#include <iostream>

class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;

    std::cout << "Addition: " << calc.add(10, 5) << std::endl;
    std::cout << "Subtraction: " << calc.subtract(10, 5) << std::endl;
    std::cout << "Multiplication: " << calc.multiply(10, 5) << std::endl;
    std::cout << "Division: " << calc.divide(10, 5) << std::endl;

    return 0;
}
