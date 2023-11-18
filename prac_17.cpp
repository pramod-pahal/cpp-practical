#include <iostream>

// Base class (parent class)
class Shape {
protected:  // Change from private to protected
    double length;
    double width;

public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    void displayDimensions() const {
        std::cout << "Length: " << length << ", Width: " << width << std::endl;
    }
};

// Derived class (child class) inheriting publicly from Shape
class Rectangle : public Shape {
public:
    double calculateArea() const {
        // Accessing length and width from the base class
        return length * width;
    }
};

int main() {
    // Create an object of the derived class Rectangle
    Rectangle rectangle;

    // Set dimensions using the member function of the base class
    rectangle.setDimensions(5.0, 3.0);

    // Display dimensions using the member function of the base class
    std::cout << "Dimensions of Rectangle:" << std::endl;
    rectangle.displayDimensions();

    // Calculate and display the area using the member function of the derived class
    std::cout << "Area of Rectangle: " << rectangle.calculateArea() << std::endl;

    return 0;
}
