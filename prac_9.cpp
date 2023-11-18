#include <iostream>

// Forward declaration of class B to let class A know about it
class B;

class A {
private:
    int dataA;

public:
    A(int data) : dataA(data) {}

    // Friend function declaration to swap data members of A and B
    friend void swapData(A&, B&);
    
    // Member function to display dataA
    void displayData() const {
        std::cout << "Data in class A: " << dataA << std::endl;
    }
};

class B {
private:
    int dataB;

public:
    B(int data) : dataB(data) {}

    // Friend function declaration to swap data members of A and B
    friend void swapData(A&, B&);
    
    // Member function to display dataB
    void displayData() const {
        std::cout << "Data in class B: " << dataB << std::endl;
    }
};

// Friend function definition to swap data members of A and B
void swapData(A& objA, B& objB) {
    int temp = objA.dataA;
    objA.dataA = objB.dataB;
    objB.dataB = temp;
}

int main() {
    // Create objects of class A and B
    A objA(5);
    B objB(10);

    // Display original data
    std::cout << "Original Data:" << std::endl;
    objA.displayData();
    objB.displayData();

    // Swap data using friend function
    swapData(objA, objB);

    // Display data after swapping
    std::cout << "\nData after swapping:" << std::endl;
    objA.displayData();
    objB.displayData();

    return 0;
}
