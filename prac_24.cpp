#include <iostream>

// Base class
class Employee {
public:
    // Virtual function for calculating salary
    virtual double calculateSalary() const {
        return 0.0;
    }

    // Virtual function for displaying role
    virtual void displayRole() const {
        std::cout << "Employee" << std::endl;
    }
};

// Derived class: Manager
class Manager : public Employee {
private:
    double baseSalary;
    double bonus;

public:
    Manager(double base, double bonus) : baseSalary(base), bonus(bonus) {}

    // Override the virtual function for calculating salary
    double calculateSalary() const override {
        return baseSalary + bonus;
    }

    // Override the virtual function for displaying role
    void displayRole() const override {
        std::cout << "Manager" << std::endl;
    }
};

// Derived class: Engineer
class Engineer : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    Engineer(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}

    // Override the virtual function for calculating salary
    double calculateSalary() const override {
        return hourlyRate * hoursWorked;
    }

    // Override the virtual function for displaying role
    void displayRole() const override {
        std::cout << "Engineer" << std::endl;
    }
};

// Function that works with the base class pointer to demonstrate polymorphism
void processEmployee(const Employee* emp) {
    emp->displayRole();
    std::cout << "Salary: $" << emp->calculateSalary() << std::endl;
}

int main() {
    // Create objects of Manager and Engineer
    Manager manager(5000.0, 1000.0);
    Engineer engineer(30.0, 40);

    // Use the function with base class pointers to demonstrate polymorphism
    processEmployee(&manager);
    processEmployee(&engineer);

    return 0;
}
