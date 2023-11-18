#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int age;
    std::string address;

public:
    // Member function to get data from the user
    void getData() {
        std::cout << "Enter employee details:" << std::endl;
        std::cout << "Name: ";
        std::getline(std::cin, name); // Allowing spaces in the name
        std::cout << "Age: ";
        std::cin >> age;
        std::cin.ignore(); // Ignore the newline character left in the input buffer
        std::cout << "Address: ";
        std::getline(std::cin, address); // Allowing spaces in the address
    }

    // Member function to display data
    void showData() const {
        std::cout << "Employee details:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Address: " << address << std::endl;
    }
};

int main() {
    // Create an object of the Employee class
    Employee employee;

    // Get data from the user
    employee.getData();

    // Display the entered data
    employee.showData();

    return 0;
}
