#include <iostream>

// Forward declaration of class B to let class A know about it
class B;

// Class A
class A {
private:
    int dataA;

public:
    A(int data) : dataA(data) {}

    // Friend class declaration
    friend class B;
    
    // Member function to display dataA
    void displayData() const {
        std::cout << "Data in class A: " << dataA << std::endl;
    }
};

// Class B, declared as a friend of class A
class B {
private:
    int dataB;

public:
    B(int data) : dataB(data) {}

    // Member function to access and modify dataA of class A
    void modifyDataA(A& objA, int newData) {
        objA.dataA = newData;
    }
    
    // Member function to display dataB
    void displayData() const {
        std::cout << "Data in class B: " << dataB << std::endl;
    }
};

int main() {
    // Create objects of class A and B
    A objA(5);
    B objB(10);

    // Display original data
    std::cout << "Original Data:" << std::endl;
    objA.displayData();
    objB.displayData();

    // Modify dataA of class A using friend class B
    objB.modifyDataA(objA, 20);

    // Display data after modification
    std::cout << "\nData after modification using friend class B:" << std::endl;
    objA.displayData();
    objB.displayData();

    return 0;
}
