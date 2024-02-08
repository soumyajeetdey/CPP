// Program to calculate the sum of digits of a number using recursion

#include <iostream>

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + sumOfDigits(n / 10);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Sum of digits of " << num << " is: " << sumOfDigits(num) << std::endl;
    return 0;
}
