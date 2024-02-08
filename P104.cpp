// Purpose: Demonstrate the use of constexpr and noexcept in C++.

#include <iostream>

// Example 1: constexpr function
constexpr int square(int x) noexcept {
    return x * x;
}

// Example 2: noexcept specifier
void function() noexcept {
    throw "Exception";
}

int main() {
    // Example 1
    constexpr int result = square(5);
    std::cout << "Square of 5: " << result << std::endl;

    // Example 2
    try {
        function();
    } catch (...) {
        std::cout << "Exception caught" << std::endl;
    }

    return 0;
}
