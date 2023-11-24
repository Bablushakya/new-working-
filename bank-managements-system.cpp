#include <iostream>
#include <string>
#include <vector>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double balance;

public:
    BankAccount(const std::string& accNum, const std::string& accHolderName, double initialBalance)
        : accountNumber(accNum), accountHolderName(accHolderName), balance(initialBalance) {}

    const std::string& getAccountNumber() const {
        return accountNumber;
    }

    const std::string& getAccountHolderName() const {
        return accountHolderName;
    }

    double getBalance() const {
        return balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << " successfully. New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << " successfully. New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient balance." << std::endl;
        }
    }

    void displayBalance() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};

int main() {
    std::vector<BankAccount> accounts;

    while (true) {
        std::cout << "Bank Management System Menu:" << std::endl;
        std::cout << "1. Create Account" << std::endl;
        std::cout << "2. Deposit" << std::endl;
        std::cout << "3. Withdraw" << std::endl;
        std::cout << "4. Check Balance" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string accNum, accHolderName;
                double initialBalance;

                std::cout << "Enter Account Number: ";
                std::cin >> accNum;
                std::cout << "Enter Account Holder Name: ";
                std::cin >> accHolderName;
                std::cout << "Enter Initial Balance: $";
                std::cin >> initialBalance;

                BankAccount newAccount(accNum, accHolderName, initialBalance);
                accounts.push_back(newAccount);

                std::cout << "Account created successfully." << std::endl;
                break;
            }

            case 2: {
                std::string accNum;
                double amount;

                std::cout << "Enter Account Number: ";
                std::cin >> accNum;

                // Find the account by account number
                for (BankAccount& account : accounts) {
                    if (account.getAccountNumber() == accNum) {
                        std::cout << "Enter Deposit Amount: $";
                        std::cin >> amount;
                        account.deposit(amount);
                        break;
                    }
                }
                break;
            }

            case 3: {
                std::string accNum;
                double amount;

                std::cout << "Enter Account Number: ";
                std::cin >> accNum;

                // Find the account by account number
                for (BankAccount& account : accounts) {
                    if (account.getAccountNumber() == accNum) {
                        std::cout << "Enter Withdrawal Amount: $";
                        std::cin >> amount;
                        account.withdraw(amount);
                        break;
                    }
                }
                break;
            }

            case 4: {
                std::string accNum;
                std::cout << "Enter Account Number: ";
                std::cin >> accNum;

                // Find the account by account number
                for (const BankAccount& account : accounts) {
                    if (account.getAccountNumber() == accNum) {
                        account.displayBalance();
                        break;
                    }
                }
                break;
            }

            case 5:
                std::cout << "Exiting the program." << std::endl;
                return 0;

            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    }

    return 0;
};