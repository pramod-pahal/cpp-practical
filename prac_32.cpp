#include <iostream>
#include <string>

// Class representing an Address
class Address {
public:
    std::string street;
    std::string city;
    std::string state;
    std::string zipCode;

    // Constructor
    Address(const std::string& st, const std::string& ct, const std::string& stt, const std::string& zip)
        : street(st), city(ct), state(stt), zipCode(zip) {}

    // Function to display address
    void displayAddress() const {
        std::cout << street << ", " << city << ", " << state << ", " << zipCode << std::endl;
    }
};

// Class representing a Person
class Person {
public:
    std::string name;
    Address address; // Container ship: Address is a member of Person

    // Constructor
    Person(const std::string& n, const Address& addr) : name(n), address(addr) {}

    // Function to display person details
    void displayPerson() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Address: ";
        address.displayAddress();
    }
};

int main() {
    // Create an Address object
    Address addr("123 Main St", "Cityville", "Stateville", "12345");

    // Create a Person object with the Address object as a member
    Person person("John Doe", addr);

    // Display person details (including the address)
    person.displayPerson();

    return 0;
}
