// Program to use template specialization to handle different data types

#include <iostream>

template<typename T>
class MyClass {
public:
    void printType() {
        std::cout << "Generic type" << std::endl;
    }
};

template<>
class MyClass<int> {
public:
    void printType() {
        std::cout << "Type: int" << std::endl;
    }
};

template<>
class MyClass<double> {
public:
    void printType() {
        std::cout << "Type: double" << std::endl;
    }
};

int main() {
    MyClass<char> obj1;
    obj1.printType();

    MyClass<int> obj2;
    obj2.printType();

    MyClass<double> obj3;
    obj3.printType();

    return 0;
}
