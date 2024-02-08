// Purpose: Demonstrate coding standards and best practices in C++.

#include <iostream>

class MyClass {
private:
    int data;

public:
    explicit MyClass(int d) : data(d) {}

    int getData() const {
        return data;
    }

    void setData(int d) {
        data = d;
    }
};

int main() {
    MyClass obj(10);
    std::cout << "Data: " << obj.getData() << std::endl;

    obj.setData(20);
    std::cout << "Updated Data: " << obj.getData() << std::endl;

    return 0;
}
