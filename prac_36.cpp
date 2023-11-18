
// DO NOT PRINT THIS
// to run this file u have to do thie using command line ::
// ./your_program input.txt even_numbers.txt odd_numbers.txt


#include <iostream>
#include <fstream>
#include <vector>

// Function to separate even and odd numbers and write them to files
void separateAndWrite(const std::vector<int>& numbers, const std::string& evenFileName, const std::string& oddFileName) {
    std::ofstream evenFile(evenFileName);
    std::ofstream oddFile(oddFileName);

    if (!evenFile.is_open() || !oddFile.is_open()) {
        std::cerr << "Error opening files for writing." << std::endl;
        return;
    }

    for (int number : numbers) {
        if (number % 2 == 0) {
            evenFile << number << std::endl;
        } else {
            oddFile << number << std::endl;
        }
    }

    std::cout << "Numbers separated and written to files successfully." << std::endl;

    // Close the files
    evenFile.close();
    oddFile.close();
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <inputFileName> <evenFileName> <oddFileName>" << std::endl;
        return 1;
    }

    std::ifstream inputFile(argv[1]);

    if (!inputFile.is_open()) {
        std::cerr << "Error opening input file." << std::endl;
        return 1;
    }

    std::vector<int> numbers;
    int number;

    // Read numbers from the input file
    while (inputFile >> number) {
        numbers.push_back(number);
    }

    // Close the input file
    inputFile.close();

    // Separate and write even and odd numbers to files
    separateAndWrite(numbers, argv[2], argv[3]);

    return 0;
}
