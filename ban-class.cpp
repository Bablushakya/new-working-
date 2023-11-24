#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Class to represent a bank account
class BankAccount {
private:
    string accountNumber;
    string customerName;
    double balance;

public:
    BankAccount(string accNum, string name, double initialBalance) {
        accountNumber = accNum;
        customerName = name;
        balance = initialBalance;
    }

    void Deposit(double amount) {
        balance += amount;
    }

    void Withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "Insufficient funds." << endl;
        }
    }

    void DisplayBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account("250xxx", "shakya", 1000.0);
    // BankAccount account();
    account.DisplayBalance();

    account.Deposit(500.12);
    account.DisplayBalance();

    account.Withdraw(200.0);
    account.DisplayBalance();

    // return 0;
}
