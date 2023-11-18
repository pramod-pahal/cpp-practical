#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;

public:
    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;
        std::cout << "Default Constructor called." << std::endl;
    }

    // Parameterized constructor
    Student(const std::string& n, int a) : name(n), age(a) {
        std::cout << "Parameterized Constructor called." << std::endl;
    }

    // Copy constructor
    Student(const Student& other) : name(other.name), age(other.age) {
        std::cout << "Copy Constructor called." << std::endl;
    }

    // Member function to display student details
    void displayDetails() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Default constructor
    Student defaultStudent;
    std::cout << "\nDetails of Default Constructed Student:" << std::endl;
    defaultStudent.displayDetails();

    // Parameterized constructor
    Student parameterizedStudent("Alice", 20);
    std::cout << "\nDetails of Parameterized Constructed Student:" << std::endl;
    parameterizedStudent.displayDetails();

    // Copy constructor
    Student copyStudent = parameterizedStudent;
    std::cout << "\nDetails of Copied Student:" << std::endl;
    copyStudent.displayDetails();

    return 0;
}
