#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountHolderName;
    double balance;

public:
    BankAccount(const std::string& name, double initialBalance) : accountHolderName(name), balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposited $" << amount << " successfully." << std::endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            std::cout << "Insufficient funds. Withdrawal failed." << std::endl;
        } else {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << " successfully." << std::endl;
        }
    }

    double checkBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account("John Doe", 1000);
    account.deposit(500);
    account.withdraw(200);
    account.withdraw(900);
    std::cout << "Current balance: $" << account.checkBalance() << std::endl;
    return 0;
}
