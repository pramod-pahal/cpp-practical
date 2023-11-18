#include <iostream>

// Function to find the maximum of two numbers and return it by reference
int &findMax(int &num1, int &num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int a = 5;
    int b = 8;

    std::cout << "Original values: a = " << a << ", b = " << b << std::endl;

    // Use return by reference to find and modify the maximum of a and b
    findMax(a, b) = 10;

    std::cout << "Modified values: a = " << a << ", b = " << b << std::endl;

    return 0;
}
