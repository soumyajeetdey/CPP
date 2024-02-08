// Program to demonstrate overloading the '==' operator to compare two objects

#include <iostream>

class MyClass {
private:
    int value;

public:
    MyClass(int val) : value(val) {}

    bool operator==(const MyClass& other) {
        return value == other.value;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2(20);
    MyClass obj3(10);

    std::cout << "obj1 == obj2: " << (obj1 == obj2) << std::endl;
    std::cout << "obj1 == obj3: " << (obj1 == obj3) << std::endl;

    return 0;
}
