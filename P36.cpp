// Program to demonstrate inheritance with shapes

#include <iostream>

class Shape {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() override {
        return 3.14159265358979323846 * radius * radius;
    }

    double perimeter() override {
        return 2 * 3.14159265358979323846 * radius;
    }
};

class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double area() override {
        return side * side;
    }

    double perimeter() override {
        return 4 * side;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() override {
        return length * width;
    }

    double perimeter() override {
        return 2 * (length + width);
    }
};

int main() {
    Circle circle(5);
    Square square(4);
    Rectangle rectangle(3, 5);

    std::cout << "Circle Area: " << circle.area() << ", Perimeter: " << circle.perimeter() << std::endl;
    std::cout << "Square Area: " << square.area() << ", Perimeter: " << square.perimeter() << std::endl;
    std::cout << "Rectangle Area: " << rectangle.area() << ", Perimeter: " << rectangle.perimeter() << std::endl;

    return 0;
}
