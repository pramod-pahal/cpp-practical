#include <iostream>

class Calculator {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function to add two doubles
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calculator;

    // Call the overloaded functions
    std::cout << "Sum of 5 and 7: " << calculator.add(5, 7) << std::endl;
    std::cout << "Sum of 3, 8, and 2: " << calculator.add(3, 8, 2) << std::endl;
    std::cout << "Sum of 4.5 and 2.7: " << calculator.add(4.5, 2.7) << std::endl;

    return 0;
}
