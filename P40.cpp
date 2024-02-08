// Program to demonstrate overloading the '<<' operator to display information about an object

#include <iostream>

class MyClass {
private:
    int value;

public:
    MyClass(int val) : value(val) {}

    friend std::ostream& operator<<(std::ostream& os, const MyClass& obj) {
        os << "Value: " << obj.value;
        return os;
    }
};

int main() {
    MyClass obj(10);
    std::cout << obj << std::endl;

    return 0;
}
