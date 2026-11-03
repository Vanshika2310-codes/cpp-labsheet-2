#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;   

public:
    
    BankAccount(double startingBalance) {
        balance = startingBalance;
    }


    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid amount or insufficient balance" << endl;
        }
    }

    void showBalance() {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(1000);

    account.showBalance();
    account.deposit(500);
    account.withdraw(300);
    account.withdraw(5000);   
    account.showBalance();
    return 0;
}
