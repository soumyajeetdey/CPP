// Program to find the nth Fibonacci number using recursion

#include <iostream>

unsigned long long fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << std::endl;
    return 0;
}
