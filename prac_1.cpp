#include <iostream>
#include <cmath>

using namespace std;
// Function to calculate the area of a square
double calculateArea(double side) {
    return side * side;
}

// Function to calculate the area of a rectangle
double calculateArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a circle
double calculateArea(double radius) {
    return M_PI * radius * radius;
}

// Function to calculate the area of a triangle
double calculateArea(double base, double height, char type) {
    if (type == 'r') { // rectangle
        return base * height / 2;
    } else if (type == 'e') { // equilateral triangle
        return 0.433 * base * base; // (sqrt(3)/4) * base * base
    } else {
        std::cerr << "Invalid triangle type" << std::endl;
        return -1;
    }
}

int main() {
    // Test the functions
    cout << "Area of square (side 5): " << calculateArea(5.0) << endl;
    cout << "Area of rectangle (length 4, width 6): " << calculateArea(4.0, 6.0) << std::endl;
    cout << "Area of circle (radius 3): " << calculateArea(3.0) << endl;
    cout << "Area of triangle (base 5, height 8, type 'r' for rectangle): " << calculateArea(5.0, 8.0, 'r') << endl;
    cout << "Area of equilateral triangle (base 5, height 8, type 'e' for equilateral): " << calculateArea(5.0, 8.0, 'e') << endl;

    return 0;
}

