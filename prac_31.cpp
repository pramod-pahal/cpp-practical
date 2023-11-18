#include <iostream>

// Abstract base class with a pure virtual function
class Shape {
public:
    // Pure virtual function for calculating area
    virtual double calculateArea() const = 0;

    // Virtual function with an implementation
    void displayType() const {
        std::cout << "Shape" << std::endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Override the pure virtual function
    double calculateArea() const override {
        return 3.14 * radius * radius;
    }

    // Override the virtual function
    void displayType() const override {
        std::cout << "Circle" << std::endl;
    }
};

// Derived class: Square
class Square : public Shape {
private:
    double side;

public:
    // Constructor
    Square(double s) : side(s) {}

    // Override the pure virtual function
    double calculateArea() const override {
        return side * side;
    }

    // Override the virtual function
    void displayType() const override {
        std::cout << "Square" << std::endl;
    }
};

int main() {
    // Create objects of Circle and Square
    Circle circle(5.0);
    Square square(4.0);

    // Use the objects and the pure virtual function
    circle.displayType();
    std::cout << "Area of Circle: " << circle.calculateArea() << std::endl;

    square.displayType();
    std::cout << "Area of Square: " << square.calculateArea() << std::endl;

    return 0;
}
