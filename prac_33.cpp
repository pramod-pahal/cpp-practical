#include <iostream>

// Template function to swap two values of any type
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // Swap integers
    int x = 5, y = 10;
    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;
    swapValues(x, y);
    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    // Swap doubles
    double a = 3.14, b = 2.718;
    std::cout << "Before swapping: a = " << a << ", b = " << b << std::endl;
    swapValues(a, b);
    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;

    // Swap strings
    std::string str1 = "Hello", str2 = "World";
    std::cout << "Before swapping: str1 = " << str1 << ", str2 = " << str2 << std::endl;
    swapValues(str1, str2);
    std::cout << "After swapping: str1 = " << str1 << ", str2 = " << str2 << std::endl;

    return 0;
}
