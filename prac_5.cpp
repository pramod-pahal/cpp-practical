#include <iostream>

using namespace std;
class NumberManipulator {
private:
    int value;

public:
    // Constructor to initialize the value
    NumberManipulator(int val) : value(val) {}

    // Function to display the current value
    void display() const {
        cout << "Current Value: " << value << endl;
    }

    // Function to modify the value using call by reference
    void modifyValueByReference(int &newValue) {
        value = newValue;
    }

    // Function to get a reference to the value (return by reference)
    int &getValueReference() {
        return value;
    }
};

int main() {
    // Create an object of the NumberManipulator class
    NumberManipulator numManipulator(10);

    // Display the original value
    std::cout << "Original Value:" << endl;
    numManipulator.display();

    // Modify the value using call by reference
    int newValue = 25;
    numManipulator.modifyValueByReference(newValue);

    // Display the modified value
    cout << "\nValue after modification using call by reference:" << endl;
    numManipulator.display();

    // Get a reference to the value using return by reference
    int &refToValue = numManipulator.getValueReference();

    // Modify the value using the reference obtained from the function
    refToValue = 50;

    // Display the value after modification using return by reference
    cout << "\nValue after modification using return by reference:" << endl;
    numManipulator.display();

    return 0;
}
