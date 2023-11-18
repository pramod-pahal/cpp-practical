#include <iostream>

// Base class (parent class)
class Shape {
private:
    double length;
    double width;

public:
    // Public member function to set dimensions
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    // Public member function to display dimensions
    void displayDimensions() const {
        std::cout << "Length: " << length << ", Width: " << width << std::endl;
    }
};

// Derived class (child class) inheriting privately from Shape
class Rectangle : private Shape {
public:
    // Public member function to calculate area using the private members of the base class
    double calculateArea() const {
        // Accessing length and width from the base class (private members)
        return getLength() * getWidth();
    }

    // Public member function to get length (accessing private member of base class)
    double getLength() const {
        // Accessing length from the base class (private member)
        return length;
    }

    // Public member function to get width (accessing private member of base class)
    double getWidth() const {
        // Accessing width from the base class (private member)
        return width;
    }
};

int main() {
    // Create an object of the derived class Rectangle
    Rectangle rectangle;

    // Set dimensions using the member function of the base class (inherited privately)
    rectangle.setDimensions(5.0, 3.0);

    // Display dimensions using the member function of the base class (inherited privately)
    // Note: displayDimensions is not directly accessible in the derived class
    // You can use getLength() and getWidth() to access the private members.
    std::cout << "Dimensions of Rectangle:" << std::endl;
    rectangle.displayDimensions(); // Error: 'void Shape::displayDimensions() const' is inaccessible

    // Calculate and display the area using the member function of the derived class
    std::cout << "Area of Rectangle: " << rectangle.calculateArea() << std::endl;

    return 0;
}
