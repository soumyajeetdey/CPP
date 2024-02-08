// Program to create a template function for finding the maximum of two elements

#include <iostream>

template<typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int intMax = maximum(5, 10);
    double doubleMax = maximum(3.5, 6.7);
    char charMax = maximum('a', 'z');

    std::cout << "Maximum of 5 and 10: " << intMax << std::endl;
    std::cout << "Maximum of 3.5 and 6.7: " << doubleMax << std::endl;
    std::cout << "Maximum of 'a' and 'z': " << charMax << std::endl;

    return 0;
}
