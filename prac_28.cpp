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

    // Overload + operator for string concatenation
    MyString operator+(const MyString& other) const {
        char* result = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(result, str);
        strcat(result, other.str);
        return MyString(result);
    }

    // Overload > operator for string comparison
    bool operator>(const MyString& other) const {
        return (strcmp(str, other.str) > 0);
    }

    // Overload < operator for string comparison
    bool operator<(const MyString& other) const {
        return (strcmp(str, other.str) < 0);
    }

    // Function to display the string
    void display() const {
        std::cout << str << std::endl;
    }
};

int main() {
    // Create two MyString objects
    MyString str1("Hello, ");
    MyString str2("world!");

    // Use overloaded + operator for concatenation
    MyString result = str1 + str2;

    // Use overloaded > and < operators for comparison
    bool greater = str1 > str2;
    bool lesser = str1 < str2;

    // Display the results
    std::cout << "String 1: ";
    str1.display();

    std::cout << "String 2: ";
    str2.display();

    std::cout << "Concatenation: ";
    result.display();

    std::cout << "String 1 is greater than String 2: " << std::boolalpha << greater << std::endl;
    std::cout << "String 1 is lesser than String 2: " << std::boolalpha << lesser << std::endl;

    return 0;
}
