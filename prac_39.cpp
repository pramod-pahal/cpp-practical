#include <iostream>

class CAccount {
private:
    int accountNumber;
    float accountBalance;

public:
    // Constructor with parameters to set initial values
    CAccount(int number, float balance) : accountNumber(number), accountBalance(balance) {}

    // Default constructor prompting for input
    CAccount() {
        std::cout << "Enter account number: ";
        std::cin >> accountNumber;

        std::cout << "Enter initial account balance: ";
        std::cin >> accountBalance;
    }

    // Function to input transaction details
    void inputTransaction() {
        char transactionType;
        float transactionAmount;

        std::cout << "Enter transaction type (D for deposit, W for withdrawal): ";
        std::cin >> transactionType;

        std::cout << "Enter transaction amount: ";
        std::cin >> transactionAmount;

        // Update account balance based on transaction type
        if (transactionType == 'D' || transactionType == 'd') {
            accountBalance += transactionAmount;
            std::cout << "Deposit successful." << std::endl;
        } else if (transactionType == 'W' || transactionType == 'w') {
            if (transactionAmount <= accountBalance) {
                accountBalance -= transactionAmount;
                std::cout << "Withdrawal successful." << std::endl;
            } else {
                std::cout << "Insufficient funds for withdrawal." << std::endl;
            }
        } else {
            std::cout << "Invalid transaction type." << std::endl;
        }
    }

    // Function to print account details
    void printBalance() const {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Balance: " << accountBalance << std::endl;
    }
};

int main() {
    // Creating an object of CAccount using the default constructor
    CAccount account1;

    // Creating another object of CAccount using the parameterized constructor
    CAccount account2(123456, 1500.0);

    // Performing transactions on the accounts
    account1.inputTransaction();
    account2.inputTransaction();

    // Printing the account details
    std::cout << "Details of Account 1:" << std::endl;
    account1.printBalance();

    std::cout << "\nDetails of Account 2:" << std::endl;
    account2.printBalance();

    return 0;
}
