#include <iostream>

// Virtual base class
class Shape {
public:
    // Pure virtual function for area calculation
    virtual double calculateArea() const = 0;

    // Virtual function for displaying shape type
    virtual void displayType() const {
        std::cout << "Shape" << std::endl;
    }
};

// Derived class 1
class Circle : virtual public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Implementation of the pure virtual function
    double calculateArea() const override {
        return 3.14 * radius * radius;
    }

    // Override the virtual function for displaying shape type
    void displayType() const override {
        std::cout << "Circle" << std::endl;
    }
};

// Derived class 2
class Square : virtual public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    // Implementation of the pure virtual function
    double calculateArea() const override {
        return side * side;
    }

    // Override the virtual function for displaying shape type
    void displayType() const override {
        std::cout << "Square" << std::endl;
    }
};

// Derived class combining both Circle and Square
class CombinedShape : public Circle, public Square {
public:
    CombinedShape(double r, double s) : Circle(r), Square(s) {}

    // Override the virtual function for displaying shape type
    void displayType() const override {
        std::cout << "CombinedShape" << std::endl;
    }
};

int main() {
    // Create objects of Circle, Square, and CombinedShape
    Circle circle(5.0);
    Square square(4.0);
    CombinedShape combinedShape(3.0, 2.0);

    // Call the displayType and calculateArea functions for each shape
    std::cout << "Circle:" << std::endl;
    circle.displayType();
    std::cout << "Area: " << circle.calculateArea() << std::endl;

    std::cout << "\nSquare:" << std::endl;
    square.displayType();
    std::cout << "Area: " << square.calculateArea() << std::endl;

    std::cout << "\nCombinedShape:" << std::endl;
    combinedShape.displayType();
    std::cout << "Area: " << combinedShape.calculateArea() << std::endl;

    return 0;
}
