#include <iostream>

class BankAccount {
private:
    std::string owner;
    double balance;

public:
    BankAccount(const std::string& owner, double balance) : owner(owner), balance(balance) {}

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            std::cout << "Insufficient funds!" << std::endl;
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    // Testing BankAccount
    BankAccount account("John Doe", 1000);
    std::cout << "Account balance: $" << account.getBalance() << std::endl;
    account.deposit(500);
    std::cout << "Deposited $500. New balance: $" << account.getBalance() << std::endl;
    account.withdraw(200);
    std::cout << "Withdrew $200. New balance: $" << account.getBalance() << std::endl;
    account.withdraw(2000);
    std::cout << "Attempted to withdraw $2000. New balance: $" << account.getBalance() << std::endl;

    return 0;
}
