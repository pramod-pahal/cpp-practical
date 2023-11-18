#include <iostream>

// Function that throws an exception
void divideNumbers(int numerator, int denominator) {
    if (denominator == 0) {
        throw std::runtime_error("Division by zero is not allowed");
    }

    int result = numerator / denominator;
    std::cout << "Result of division: " << result << std::endl;
}

int main() {
    try {
        // Attempt to divide numbers, potential for an exception
        divideNumbers(10, 2);
        
        // This line won't be executed if an exception occurs in the previous statement
        std::cout << "This line is executed if no exception occurs." << std::endl;

        // Attempt to divide by zero, causing an exception
        divideNumbers(5, 0);
    } catch (const std::exception& e) {
        // Catch and handle the exception
        std::cerr << "Exception caught: " << e.what() << std::endl;
    } catch (...) {
        // Catch any other type of exception (not recommended in general)
        std::cerr << "Unknown exception caught." << std::endl;
    }

    // Continue with the program even if an exception occurred
    std::cout << "Program continues after exception handling." << std::endl;

    return 0;
}
