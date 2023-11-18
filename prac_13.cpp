#include <iostream>

// Class for complex numbers
class Complex {
private:
    double real;
    double imag;

public:
    // Constructor to initialize complex numbers
    Complex(double r, double i) : real(r), imag(i) {}

    // Function to add two complex numbers
    Complex add(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Function to subtract two complex numbers
    Complex subtract(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // Function to display the complex number
    void display() const {
        std::cout << "Complex number: " << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    // Create two complex numbers
    Complex complex1(3.0, 4.0);
    Complex complex2(1.5, 2.5);

    // Display the original complex numbers
    std::cout << "Complex Numbers:" << std::endl;
    complex1.display();
    complex2.display();

    // Perform addition and display the result
    Complex sum = complex1.add(complex2);
    std::cout << "\nAddition Result:" << std::endl;
    sum.display();

    // Perform subtraction and display the result
    Complex difference = complex1.subtract(complex2);
    std::cout << "\nSubtraction Result:" << std::endl;
    difference.display();

    return 0;
}
