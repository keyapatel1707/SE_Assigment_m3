#include <iostream>

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
}
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: $" << amount << "\n";
        } else {
            std::cout << "Invalid deposit amount.\n";
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn: $" << amount << "\n";
        } else {
            std::cout << "Insufficient balance or invalid amount.\n";
        }
    }
    void displayBalance() const {
        std::cout << "Account Number: " << accountNumber << "\n";
        std::cout << "Current Balance: $" << balance << "\n";
    }
};

int main() {
    // Creating a BankAccount object with account number 12345 and initial balance $500.00
    BankAccount myAccount(12345, 500.00);

    // Display initial balance
    myAccount.displayBalance();

    // Deposit and withdraw operations
    myAccount.deposit(200.00);
    myAccount.withdraw(100.00);
    myAccount.withdraw(700.00);  // Test insufficient balance case

    // Display final balance
    myAccount.displayBalance();

    return 0;
}

