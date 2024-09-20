#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accountNumber, double balance) {
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    void depositMoney(double amount) {
        balance += amount;
        cout << "Deposit successful. Current balance: " << balance << endl;
    }

    void withdrawMoney(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. Current balance: " << balance << endl;
        } else {
            cout << "Insufficient balance. Cannot withdraw." << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    string accountNumber;
    double balance;

    // Taking account details from user
    cout << "Enter Account Number: ";
    cin >> accountNumber;
    cout << "Enter Initial Balance: ";
    cin >> balance;

    // Create BankAccount object
    BankAccount obj(accountNumber, balance);

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // Taking deposit amount from user
                double depositAmount;
                cout << "Enter Deposit Amount: ";
                cin >> depositAmount;
                obj.depositMoney(depositAmount);
                break;
            }
            case 2: {
                // Taking withdrawal amount from user
                double withdrawAmount;
                cout << "Enter Withdrawal Amount: ";
                cin >> withdrawAmount;
                obj.withdrawMoney(withdrawAmount);
                break;
            }
            case 3: {
                cout << "Exiting... Thank you!" << endl;
                break;
            }
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 3);  // Loop continues until the user selects option 3 to exit

    return 0;
}
