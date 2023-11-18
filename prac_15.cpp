#include <iostream>
#include <math.h>

class FixedDeposit {
private:
    int principal;
    int years;
    double interestRate;
    double maturityAmount;

public:
    // Parameterized constructor for dynamic initialization
    FixedDeposit(int p, int y, double rate) : principal(p), years(y), interestRate(rate) {
        calculateMaturityAmount();
    }

    // Member function to calculate the maturity amount
    void calculateMaturityAmount() {
        // Formula for compound interest
        maturityAmount = principal * pow(1 + interestRate / 100, years);
    }

    // Member function to display fixed deposit details
    void displayDetails() const {
        std::cout << "Principal Amount: " << principal << std::endl;
        std::cout << "Number of Years: " << years << std::endl;
        std::cout << "Interest Rate: " << interestRate << "%" << std::endl;
        std::cout << "Maturity Amount: " << maturityAmount << std::endl;
    }
};

int main() {
    // Dynamic initialization of FixedDeposit object
    int principalAmount, numberOfYears;
    double interestRate;
    
    std::cout << "Enter Principal Amount: ";
    std::cin >> principalAmount;

    std::cout << "Enter Number of Years: ";
    std::cin >> numberOfYears;

    std::cout << "Enter Interest Rate: ";
    std::cin >> interestRate;

    // Create FixedDeposit object using dynamic initialization
    FixedDeposit *fd = new FixedDeposit(principalAmount, numberOfYears, interestRate);

    // Display details of the fixed deposit
    std::cout << "\nFixed Deposit Details:" << std::endl;
    fd->displayDetails();

    // Deallocate memory for the dynamically created object
    delete fd;

    return 0;
}
