#include <iostream>

class DynamicObject {
private:
    int value;

public:
    // Constructor
    DynamicObject(int v) : value(v) {
        std::cout << "Object created with value: " << value << std::endl;
    }

    // Destructor
    ~DynamicObject() {
        std::cout << "Object destroyed with value: " << value << std::endl;
    }

    // Member function to display value
    void displayValue() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    // Create an object dynamically using new
    DynamicObject* dynamicObj = new DynamicObject(42);

    // Use the object
    dynamicObj->displayValue();

    // Delete the dynamically allocated object
    delete dynamicObj;

    return 0;
}
