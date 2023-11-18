#include <iostream>
#include <fstream>
#include <string>

// Function to read countries from the "Country.txt" file
void readCountries(std::ifstream& countryFile, std::string countries[]) {
    std::string country;
    int index = 0;

    // Read countries from the file
    while (std::getline(countryFile, country)) {
        countries[index++] = country;
    }
}

// Function to read capitals from the "Capitals.txt" file
void readCapitals(std::ifstream& capitalFile, std::string capitals[]) {
    std::string capital;
    int index = 0;

    // Read capitals from the file
    while (std::getline(capitalFile, capital)) {
        capitals[index++] = capital;
    }
}

// Function to print countries and their capitals
void printCountriesAndCapitals(const std::string countries[], const std::string capitals[], int size) {
    std::cout << "Countries and Capitals:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << countries[i] << " - " << capitals[i] << std::endl;
    }
}

int main() {
    const int maxSize = 100; // Assuming there are not more than 100 countries and capitals

    // Arrays to store countries and capitals
    std::string countries[maxSize];
    std::string capitals[maxSize];

    // Open the "Country.txt" file
    std::ifstream countryFile("Country.txt");
    if (!countryFile.is_open()) {
        std::cerr << "Error opening Country.txt" << std::endl;
        return 1;
    }

    // Open the "Capitals.txt" file
    std::ifstream capitalFile("Capitals.txt");
    if (!capitalFile.is_open()) {
        std::cerr << "Error opening Capitals.txt" << std::endl;
        return 1;
    }

    // Read countries and capitals from their respective files
    readCountries(countryFile, countries);
    readCapitals(capitalFile, capitals);

    // Close the files
    countryFile.close();
    capitalFile.close();

    // Print countries and their capitals
    printCountriesAndCapitals(countries, capitals, maxSize);

    return 0;
}
