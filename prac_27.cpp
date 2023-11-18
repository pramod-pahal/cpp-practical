#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Overload + operator for addition
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overload - operator for subtraction
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // Function to display the complex number
    void display() const {
        std::cout << real;
        if (imag >= 0) {
            std::cout << " + " << imag << "i";
        } else {
            std::cout << " - " << -imag << "i";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Create two complex numbers
    Complex num1(3.0, 4.0);
    Complex num2(1.5, 2.5);

    // Use overloaded + and - operators
    Complex sum = num1 + num2;
    Complex difference = num1 - num2;

    // Display the results
    std::cout << "Num1: ";
    num1.display();

    std::cout << "Num2: ";
    num2.display();

    std::cout << "Sum: ";
    sum.display();

    std::cout << "Difference: ";
    difference.display();

    return 0;
}
