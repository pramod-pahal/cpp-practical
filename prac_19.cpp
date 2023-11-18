#include <iostream>

// Base class
class Base {
public:
    void display() {
        std::cout << "Display from Base class" << std::endl;
    }
};

// Intermediate class inheriting from Base
class Intermediate : public Base {
public:
    // Function overloading
    void display(int value) {
        std::cout << "Display from Intermediate class with value: " << value << std::endl;
    }
};

// Derived class inheriting from Intermediate
class Derived : public Intermediate {
public:
    // Function overloading
    void display(double value) {
        std::cout << "Display from Derived class with value: " << value << std::endl;
    }

    // Function with the same name as in Base, to create ambiguity
    void display() {
        std::cout << "Display from Derived class" << std::endl;
    }
};

int main() {
    Derived derivedObject;

    // Call the display function from the Derived class
    derivedObject.display(); // Ambiguity: Which version of display to call?

    // Use scope resolution to call the specific version
    derivedObject.Intermediate::display(42); // Calls display(int) from Intermediate class
    derivedObject.Base::display(); // Calls display() from Base class

    return 0;
}
