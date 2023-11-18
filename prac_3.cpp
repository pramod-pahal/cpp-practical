#include <iostream>
#include <string>

using namespace std;

// Define a structure to represent student details
struct Student {
    string name;
    int age;
    double grade;
};

int main() {
    // Declare a variable of type Student
    Student student;

    // Input student details
    cout << "Enter student name: ";
    getline(std::cin, student.name);

    cout << "Enter student age: ";
    cin >> student.age;

    cout << "Enter student grade: ";
    cin >> student.grade;

    // Display student details
    cout << "\nStudent Details:" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Grade: " << student.grade << endl;

    return 0;
}
