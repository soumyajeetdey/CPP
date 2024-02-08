// Program to demonstrate a bank account class

#include <iostream>

class BankAccount {
private:
    double balance;

public:
    // Constructor
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    // Method to deposit money
    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposited $" << amount << ", Updated balance: $" << balance << std::endl;
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << ", Updated balance: $" << balance << std::endl;
        } else {
            std::cout << "Insufficient balance!" << std::endl;
        }
    }
};

int main() {
    // Create a bank account object
    BankAccount account(1000);

    // Deposit and withdraw money
    account.deposit(500);
    account.withdraw(200);
    account.withdraw(1500);

    return 0;
}
