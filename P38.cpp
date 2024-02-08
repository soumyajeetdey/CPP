// Program to demonstrate overloading the '+' operator to concatenate two strings

#include <iostream>
#include <string>

class StringConcatenator {
public:
    std::string operator+(const std::string& str1, const std::string& str2) {
        return str1 + str2;
    }
};

int main() {
    StringConcatenator concat;

    std::string str1 = "Hello, ";
    std::string str2 = "world!";
    std::cout << str1 + str2 << std::endl;

    return 0;
}
