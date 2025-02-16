#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountholder;
    double balance;

public:
    // Constructor
    BankAccount(string holder, double initialBalance) {
        accountholder = holder;
        balance = (initialBalance >= 0) ? initialBalance : 0; // Ensuring non-negative balance
    }

    // Getter for accountholder
    string getAccountHolder() const {
        return accountholder;
    }

    // Setter for accountholder
    void setAccountHolder(string holder) {
        accountholder = holder;
    }

    // Getter for balance
    double getBalance() const {
        return balance;
    }

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    // Method to withdraw money
    bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            return true;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
            return false;
        }
    }
};

int main() {
    BankAccount account("John Doe", 1000);

    cout << "Account Holder: " << account.getAccountHolder() << endl;
    cout << "Initial Balance: $" << account.getBalance() << endl;

    account.deposit(500);
    cout << "Balance after deposit: $" << account.getBalance() << endl;

    if (account.withdraw(300)) {
        cout << "Withdrawal successful!" << endl;
    }
    cout << "Final Balance: $" << account.getBalance() << endl;

    return 0;
}
