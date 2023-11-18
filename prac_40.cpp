#include <iostream>

class Counter {
private:
    static int count; // Static variable to keep track of count

public:
    // Constructor increments the count when an object is created
    Counter() {
        count++;
    }

    // Static function to display the value of count
    static void Display() {
        std::cout << "Count: " << count << std::endl;
    }
};

// Initializing the static variable count
int Counter::count = 0;

int main() {
    // Creating multiple objects of the Counter class
    Counter obj1;
    Counter obj2;
    Counter obj3;

    // Displaying the count using the static function
    Counter::Display(); // Output: Count: 3

    // Creating more objects
    Counter obj4;
    Counter obj5;

    // Displaying the updated count
    Counter::Display(); // Output: Count: 5

    return 0;
}
