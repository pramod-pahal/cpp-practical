#include <iostream>
#include <cstring>

class DynamicString {
private:
    char* str; // Pointer to dynamically allocated string

public:
    // Dynamic constructor
    DynamicString(const char* initialStr) {
        // Allocate memory for the string and copy the initial value
        str = new char[strlen(initialStr) + 1];
        strcpy(str, initialStr);

        std::cout << "DynamicString object created with value: " << str << std::endl;
    }

    // Destructor
    ~DynamicString() {
        // Deallocate memory when the object is destroyed
        delete[] str;

        std::cout << "DynamicString object destroyed" << std::endl;
    }

    // Member function to display the string
    void displayString() const {
        std::cout << "Current value: " << str << std::endl;
    }
};

int main() {
    // Create objects of DynamicString
    DynamicString strObj1("Hello");
    DynamicString strObj2("World");

    // Display the strings
    strObj1.displayString();
    strObj2.displayString();

    return 0;
}
