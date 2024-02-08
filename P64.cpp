// Program to implement a template class for a mathematical operation

#include <iostream>

template<typename T>
class MathOperation {
public:
    T add(T a, T b) {
        return a + b;
    }

    T subtract(T a, T b) {
        return a - b;
    }

    T multiply(T a, T b) {
        return a * b;
    }

    T divide(T a, T b) {
        if (b == 0) {
            throw std::invalid_argument("Division by zero");
        }
        return a / b;
    }
};

int main() {
    MathOperation<int> intMath;
    std::cout << "Addition: " << intMath.add(5, 3) << std::endl;
    std::cout << "Subtraction: " << intMath.subtract(5, 3) << std::endl;
    std::cout << "Multiplication: " << intMath.multiply(5, 3) << std::endl;
    try {
        std::cout << "Division: " << intMath.divide(5, 0) << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    MathOperation<double> doubleMath;
    std::cout << "Addition: " << doubleMath.add(5.5, 3.3) << std::endl;
    std::cout << "Subtraction: " << doubleMath.subtract(5.5, 3.3) << std::endl;
    std::cout << "Multiplication: " << doubleMath.multiply(5.5, 3.3) << std::endl;
    try {
        std::cout << "Division: " << doubleMath.divide(5.5, 0) << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
