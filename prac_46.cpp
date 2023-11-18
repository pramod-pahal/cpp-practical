#include <iostream>
#include <fstream>
#include <cctype>

int main() {
    std::ifstream inputFile("textfile.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    char ch;
    int digitCount = 0;
    int alphabetCount = 0;
    int spaceCount = 0;

    while (inputFile.get(ch)) {
        if (isdigit(ch)) {
            digitCount++;
        } else if (isalpha(ch)) {
            alphabetCount++;
        } else if (isspace(ch)) {
            spaceCount++;
        }
    }

    inputFile.close();

    std::cout << "Count of digits: " << digitCount << std::endl;
    std::cout << "Count of alphabets: " << alphabetCount << std::endl;
    std::cout << "Count of spaces: " << spaceCount << std::endl;

    return 0;
}
