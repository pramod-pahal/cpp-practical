#include <iostream>
#include <cstring>

class MyString {
private:
    char* str; // Pointer to dynamically allocated string

public:
    // Constructor
    MyString(const char* initialStr = "") {
        // Allocate memory for the string and copy the initial value
        str = new char[strlen(initialStr) + 1];
        strcpy(str, initialStr);
    }

    // Destructor
    ~MyString() {
        // Deallocate memory when the object is destroyed
        delete[] str;
    }

    // Overload << operator for output
    friend std::ostream& operator<<(std::ostream& out, const MyString& myString) {
        out << myString.str;
        return out;
    }

    // Overload >> operator for input
    friend std::istream& operator>>(std::istream& in, MyString& myString) {
        // Read input into a temporary buffer
        char buffer[1000];
        in >> buffer;

        // Deallocate previous memory and allocate new memory for the string
        delete[] myString.str;
        myString.str = new char[strlen(buffer) + 1];

        // Copy the buffer into the string
        strcpy(myString.str, buffer);

        return in;
    }
};

int main() {
    MyString myString;

    // Input a string using overloaded >>
    std::cout << "Enter a string: ";
    std::cin >> myString;

    // Output the string using overloaded <<
    std::cout << "You entered: " << myString << std::endl;

    return 0;
}
