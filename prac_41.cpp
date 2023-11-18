// WITHOUT USING FRIEND FUNCTION

#include <iostream>

class MyNumber {
private:
    int value;

public:
    MyNumber(int val = 0) : value(val) {}

    // Overload binary + without using friend function
    MyNumber operator+(const MyNumber& other) const {
        MyNumber result;
        result.value = this->value + other.value;
        return result;
    }

    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    MyNumber num1(5);
    MyNumber num2(10);

    MyNumber sum = num1 + num2;

    std::cout << "Num1:" << std::endl;
    num1.display();

    std::cout << "\nNum2:" << std::endl;
    num2.display();

    std::cout << "\nSum of Num1 and Num2:" << std::endl;
    sum.display();

    return 0;
}


// USING FRIEND FUNCTION

#include <iostream>

class MyNumber {
private:
    int value;

public:
    MyNumber(int val = 0) : value(val) {}

    // Friend function to overload binary +
    friend MyNumber operator+(const MyNumber& num1, const MyNumber& num2);

    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

// Overload binary + using friend function
MyNumber operator+(const MyNumber& num1, const MyNumber& num2) {
    MyNumber result;
    result.value = num1.value + num2.value;
    return result;
}

int main() {
    MyNumber num1(5);
    MyNumber num2(10);

    MyNumber sum = num1 + num2;

    std::cout << "Num1:" << std::endl;
    num1.display();

    std::cout << "\nNum2:" << std::endl;
    num2.display();

    std::cout << "\nSum of Num1 and Num2:" << std::endl;
    sum.display();

    return 0;
}
