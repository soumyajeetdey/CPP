// Program to create a custom exception class and throw an exception using it

#include <iostream>
#include <stdexcept>

class MyException : public std::exception {
public:
    const char* what() const noexcept override {
        return "My custom exception occurred!";
    }
};

int main() {
    try {
        throw MyException();
    } catch (const MyException& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
