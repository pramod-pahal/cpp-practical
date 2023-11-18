#include <iostream>

class LengthConverter {
private:
    double length; // length in meters

public:
    LengthConverter(double len = 0.0) : length(len) {}

    // Overload conversion from meters to centimeters
    double operator()(void) const {
        return length * 100.0; // 1 meter = 100 centimeters
    }

    // Overload conversion from centimeters to meters
    double operator()(double cm) const {
        return cm / 100.0; // 1 centimeter = 0.01 meters
    }

    // Display the length in meters
    void displayMeters() const {
        std::cout << "Length in meters: " << length << " meters" << std::endl;
    }

    // Display the length in centimeters
    void displayCentimeters() const {
        std::cout << "Length in centimeters: " << (*this)() << " centimeters" << std::endl;
    }
};

int main() {
    // Create an object with a length of 2 meters
    LengthConverter lengthObj(2.0);

    // Display the length in meters
    lengthObj.displayMeters();

    // Convert and display the length in centimeters using operator overloading
    lengthObj.displayCentimeters();

    // Convert and display the length in meters using operator overloading
    double convertedLength = lengthObj(250); // 250 centimeters to meters
    std::cout << "Converted length in meters: " << convertedLength << " meters" << std::endl;

    return 0;
}
