#include <iostream>

// Forward declaration of class Second to let class First know about it
class Second;

// Class First
class First {
private:
    int dataFirst;

public:
    // Friend class declaration
    friend class Second;

    // Member function to input value for dataFirst
    void inputData() {
        std::cout << "Enter a value for data in class First: ";
        std::cin >> dataFirst;
    }

    // Friend function to display values of both data members
    friend void displayData(First&, Second&);
};

// Class Second
class Second {
private:
    int dataSecond;

public:
    // Friend class declaration
    friend class First;

    // Member function to input value for dataSecond
    void inputData() {
        std::cout << "Enter a value for data in class Second: ";
        std::cin >> dataSecond;
    }

    // Member function to display value of dataSecond
    void displayData() {
        std::cout << "Data in class Second: " << dataSecond << std::endl;
    }
};

// Friend function definition to display values of both data members
void displayData(First& obj1, Second& obj2) {
    std::cout << "Data in class First: " << obj1.dataFirst << std::endl;
    obj2.displayData();
}

int main() {
    // Create objects of class First and Second
    First objFirst;
    Second objSecond;

    // Input values for data members through member functions of class First and Second
    objFirst.inputData();
    objSecond.inputData();

    // Display values of both data members using friend function
    displayData(objFirst, objSecond);

    return 0;
}
