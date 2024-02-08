// Program to check if a string is a palindrome using recursion

#include <iostream>
#include <string>

bool isPalindrome(const std::string& str, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (str[start] != str[end]) {
        return false;
    }
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    if (isPalindrome(str, 0, str.length() - 1)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }
    return 0;
}
