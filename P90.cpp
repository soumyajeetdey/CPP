// Program to implement the Singleton design pattern

#include <iostream>

class Singleton {
private:
    static Singleton* instance;

    Singleton() {} // Private constructor

public:
    static Singleton* getInstance() {
        if (!instance) {
            instance = new Singleton();
        }
        return instance;
    }

    void showMessage() {
        std::cout << "Hello from Singleton!" << std::endl;
    }
};

Singleton* Singleton::instance = nullptr;

int main() {
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();

    s1->showMessage(); // Output: Hello from Singleton!
    s2->showMessage(); // Output: Hello from Singleton!

    // Both s1 and s2 point to the same instance
    if (s1 == s2) {
        std::cout << "Both instances are the same" << std::endl;
    }

    return 0;
}
