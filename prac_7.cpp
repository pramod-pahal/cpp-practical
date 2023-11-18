#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;

public:
    // Parameterized constructor
    Student(const std::string& n, int a) : name(n), age(a) {}

    // Member function to display student details
    void displayDetails() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    const int numberOfStudents = 3;

    // Create an array of Student objects
    Student studentArray[numberOfStudents] = {
        {"Alice", 20},
        {"Bob", 22},
        {"Charlie", 21}
    };

    // Display details of each student using a loop
    std::cout << "Details of Students:" << std::endl;
    for (int i = 0; i < numberOfStudents; ++i) {
        std::cout << "Student " << (i + 1) << ": ";
        studentArray[i].displayDetails();
    }

    return 0;
}
