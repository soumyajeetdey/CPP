// Program to demonstrate the concept of stack unwinding

#include <iostream>
#include <stdexcept>

class A {
public:
    A() {
        std::cout << "A constructor" << std::endl;
    }

    ~A() {
        std::cout << "A destructor" << std::endl;
    }
};

class B {
private:
    A a;

public:
    B() {
        std::cout << "B constructor" << std::endl;
        throw std::runtime_error("Exception in B constructor");
    }

    ~B() {
        std::cout << "B destructor" << std::endl;
    }
};

int main() {
    try {
        B b;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
