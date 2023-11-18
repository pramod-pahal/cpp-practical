#include <iostream>

class MyNumber {
private:
    int value;

public:
    MyNumber(int val = 0) : value(val) {}

    // Overload += operator
    MyNumber& operator+=(const MyNumber& other) {
        this->value += other.value;
        return *this; // Return a reference to the modified object
    }

    // Overload -= operator
    MyNumber& operator-=(const MyNumber& other) {
        this->value -= other.value;
        return *this; // Return a reference to the modified object
    }

    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    MyNumber num1(5);
    MyNumber num2(10);

    // Using +=
    std::cout << "Before += operation:" << std::endl;
    num1.display();

    num1 += num2;

    std::cout << "\nAfter += operation:" << std::endl;
    num1.display();

    // Using -=
    std::cout << "\nBefore -= operation:" << std::endl;
    num1.display();

    num1 -= num2;

    std::cout << "\nAfter -= operation:" << std::endl;
    num1.display();

    return 0;
}
