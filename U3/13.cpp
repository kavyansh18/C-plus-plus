// 4.Create a C++ program to implement an abstract class Bank with a data member balance and a pure
// virtual function display_balance(). Derive two classes SavingsAccount and CheckingAccount from
// Bank and implement their versions of display_balance(). Set initial balances for both account types and
// display their balances.

#include <iostream>
using namespace std;

// Abstract base class Bank
class Bank {
protected:
    float balance;
public:
    // Constructor
    Bank(float b) : balance(b) {}

    // Pure virtual function display_balance()
    virtual void display_balance() = 0;
};

// Derived class SavingsAccount from Bank
class SavingsAccount : public Bank {
public:
    // Constructor
    SavingsAccount(float b) : Bank(b) {}

    // Implementing display_balance() for SavingsAccount
    void display_balance() override {
        cout << "Savings Account Balance: $" << balance << endl;
    }
};

// Derived class CheckingAccount from Bank
class CheckingAccount : public Bank {
public:
    // Constructor
    CheckingAccount(float b) : Bank(b) {}

    // Implementing display_balance() for CheckingAccount
    void display_balance() override {
        cout << "Checking Account Balance: $" << balance << endl;
    }
};

int main() {
    // Set initial balances
    float savingsBalance = 1000.0;
    float checkingBalance = 2000.0;

    // Create objects of SavingsAccount and CheckingAccount
    SavingsAccount savings(savingsBalance);
    CheckingAccount checking(checkingBalance);

    // Display balances
    savings.display_balance();
    checking.display_balance();

    return 0;
}
