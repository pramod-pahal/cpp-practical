#include <iostream>

// Inline function to calculate the square of a number
inline double square(double num) {
    return num * num;
}

int main() {
    double number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    // Call to the inline function
    double result = square(number);

    std::cout << "Square of " << number << " is: " << result << std::endl;

    return 0;
}
