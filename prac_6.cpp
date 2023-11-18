#include <iostream>

using namespace std;
class MyClass {
private:
    static int staticVariable; // Static data member

public:
    // Static member function to access the static variable
    static void displayStaticVariable() {
        cout << "Static Variable: " << staticVariable << endl;
    }

    // Member function to increment the static variable
    void incrementStaticVariable() {
        staticVariable++;
    }
};

// Initialization of the static variable
int MyClass::staticVariable = 0;

int main() {
    // Create two objects of MyClass
    MyClass obj1, obj2;

    // Display the static variable using the static member function
    MyClass::displayStaticVariable();

    // Increment the static variable using the member function for obj1
    obj1.incrementStaticVariable();

    // Display the static variable using the static member function after modification
    MyClass::displayStaticVariable();

    // Increment the static variable using the member function for obj2
    obj2.incrementStaticVariable();

    // Display the static variable using the static member function after further modification
    MyClass::displayStaticVariable();

    return 0;
}
