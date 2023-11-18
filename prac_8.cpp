#include <iostream>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Default constructor
    Time() : hours(0), minutes(0), seconds(0) {}

    // Parameterized constructor with validation checks
    Time(int h, int m, int s) {
        setTime(h, m, s);
    }

    // Member function to set time with validation checks
    void setTime(int h, int m, int s) {
        if (h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60) {
            hours = h;
            minutes = m;
            seconds = s;
        } else {
            std::cerr << "Invalid time entered. Time set to 00:00:00." << std::endl;
            hours = 0;
            minutes = 0;
            seconds = 0;
        }
    }

    // Member function to display time
    void displayTime() const {
        std::cout << "Time: " << hours << ":" << minutes << ":" << seconds << std::endl;
    }

    // Member function to add two Time objects
    Time addTime(const Time& t2) const {
        Time result;
        result.seconds = seconds + t2.seconds;
        result.minutes = minutes + t2.minutes + result.seconds / 60;
        result.hours = hours + t2.hours + result.minutes / 60;

        result.seconds %= 60;
        result.minutes %= 60;

        return result;
    }
};

int main() {
    // Input and validate time for the first object
    int h1, m1, s1;
    std::cout << "Enter time for the first object (hours minutes seconds): ";
    std::cin >> h1 >> m1 >> s1;

    // Create the first Time object
    Time time1(h1, m1, s1);

    // Input and validate time for the second object
    int h2, m2, s2;
    std::cout << "Enter time for the second object (hours minutes seconds): ";
    std::cin >> h2 >> m2 >> s2;

    // Create the second Time object
    Time time2(h2, m2, s2);

    // Display the input times
    std::cout << "\nTime Object 1:" << std::endl;
    time1.displayTime();
    std::cout << "\nTime Object 2:" << std::endl;
    time2.displayTime();

    // Add the two Time objects and display the result
    Time result = time1.addTime(time2);
    std::cout << "\nSum of Time Objects:" << std::endl;
    result.displayTime();

    return 0;
}
