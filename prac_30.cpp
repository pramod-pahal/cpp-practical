#include <iostream>

class MathOperations {
private:
    double value;

public:
    // Constructor
    MathOperations(double initialValue = 0.0) : value(initialValue) {}

    // Overload += operator
    MathOperations& operator+=(const MathOperations& other) {
        value += other.value;
        return *this;
    }

    // Overload -= operator
    MathOperations& operator-=(const MathOperations& other) {
        value -= other.value;
        return *this;
    }

    // Overload *= operator
    MathOperations& operator*=(const MathOperations& other) {
        value *= other.value;
        return *this;
    }

    // Overload () operator for function call
    double operator()() const {
        return value;
    }
};

// Overload * operator for multiplication
MathOperations operator*(const MathOperations& a, const MathOperations& b) {
    return MathOperations(a) *= b;
}

int main() {
    MathOperations a(5.0);
    MathOperations b(3.0);

    // Use overloaded += and -= operators
    a += b;
    std::cout << "a += b: " << a() << std::endl;

    a -= b;
    std::cout << "a -= b: " << a() << std::endl;

    // Use overloaded *= operator
    a *= b;
    std::cout << "a *= b: " << a() << std::endl;

    // Use overloaded () operator for function call
    std::cout << "Value of a: " << a() << std::endl;

    // Use overloaded * operator for multiplication
    MathOperations result = a * b;
    std::cout << "a * b: " << result() << std::endl;

    return 0;
}
