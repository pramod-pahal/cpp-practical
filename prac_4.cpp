#include <iostream>

using namespace std;

class MathOperations {
private:
    int number;

public:
    // Setter function to set the value of 'number'
    void setNumber(int n) {
        number = n;
    }

    // Getter function to get the value of 'number'
    int getNumber() {
        return number;
    }

    // Function to calculate the square of a number
    int square() {
        return number * number;
    }

    // Function to calculate the cube of a number using the square function
    int cube() {
        return square() * number;
    }
};

int main() {
    // Create an object of the MathOperations class
    MathOperations mathObj;

    // Set the value of 'number'
    mathObj.setNumber(5);

    // Display the original number, its square, and its cube
    cout << "Number: " << mathObj.getNumber() << endl;
    cout << "Square: " << mathObj.square() << endl;
    cout << "Cube: " << mathObj.cube() << endl;

    return 0;
}
