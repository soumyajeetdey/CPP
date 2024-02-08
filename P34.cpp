// Program to demonstrate a class representing a student

#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNumber;
    float marks;

public:
    // Constructor
    Student(std::string name, int rollNumber, float marks) {
        this->name = name;
        this->rollNumber = rollNumber;
        this->marks = marks;
    }

    // Destructor
    ~Student() {
        std::cout << "Destructor called for " << name << std::endl;
    }

    // Method to display student information
    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
    }
};

int main() {
    // Create a student object
    Student student1("John", 101, 85.5);

    // Display student information
    student1.display();

    return 0;
}
