#include <iostream>

class Example {
private:
    int x;
    double y;

public:
    // Constructor with declaration list, argument list, and initialization list
    Example(int a, double b) : x(a), y(b) {
        // The body of the constructor
        std::cout << "Constructor executed. Values: " << x << ", " << y << std::endl;
    }

    // Member function to display values
    void displayValues() const {
        std::cout << "Values in the object: " << x << ", " << y << std::endl;
    }
};

int main() {
    // Creating an object of the Example class with values 5 and 3.14
    Example obj(5, 3.14);

    // Calling the displayValues member function to show the values
    obj.displayValues();

    return 0;
}
