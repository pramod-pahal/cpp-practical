#include <iostream>

class LevelThree {
public:
    LevelThree() {
        std::cout << "LevelThree Constructor" << std::endl;
    }

    ~LevelThree() {
        std::cout << "LevelThree Destructor" << std::endl;
    }
};

class LevelTwo {
private:
    LevelThree nestedThree;

public:
    LevelTwo() {
        std::cout << "LevelTwo Constructor" << std::endl;
    }

    ~LevelTwo() {
        std::cout << "LevelTwo Destructor" << std::endl;
    }
};

class LevelOne {
private:
    LevelTwo nestedTwo;

public:
    LevelOne() {
        std::cout << "LevelOne Constructor" << std::endl;
    }

    ~LevelOne() {
        std::cout << "LevelOne Destructor" << std::endl;
    }
};

int main() {
    // Create an object of LevelOne
    LevelOne mainObject;

    std::cout << "Inside main function" << std::endl;

    // Destructor of mainObject will be called when it goes out of scope

    return 0;
}
