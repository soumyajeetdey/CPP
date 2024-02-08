// Purpose: Use the auto keyword for type inference to simplify code and improve readability.

#include <iostream>

int main() {
    auto x = 10;
    auto y = 20.5;
    auto name = "John";

    std::cout << "x: " << x << ", type: " << typeid(x).name() << std::endl;
    std::cout << "y: " << y << ", type: " << typeid(y).name() << std::endl;
    std::cout << "name: " << name << ", type: " << typeid(name).name() << std::endl;

    return 0;
}
