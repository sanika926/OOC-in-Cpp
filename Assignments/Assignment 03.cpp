//PROGRAM//

#include <iostream>
#include <string>

using namespace std;

// Saving Account Class
class SavingAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double interestRate;
public:
    SavingAccount(string name, int accNumber, double initialBalance, double rate) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
        interestRate = rate;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
    void applyInterest() {
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest Applied: " << interest << endl;
    }
    void display() {
        cout << "\n[Savings Account]" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

// Checking Account Class
class CheckingAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double transactionFee;
public:
    CheckingAccount(string name, int accNumber, double initialBalance, double fee) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
        transactionFee = fee;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
    }
    void withdraw(double amount) {
        double total = amount + transactionFee;
        if (total <= balance) {
            balance -= total;
            cout << "Withdrawn: " << amount << " (" << transactionFee << " fee applied)" << endl;
        } else {
            cout << "Insufficient balance for withdrawal + fee!" << endl;
        }
    }
    void display() {
        cout << "\n[Checking Account]" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Transaction Fee: " << transactionFee << endl;
    }
};

// Main Function
int main() {

    // ---- My Information ----
    cout << "Name: Sanika Anil Mane\n";
    cout << "Roll No: 96\n";
    cout << "Division: B\n";
    cout << "Class: SY CSE\n";
    cout << "---------------------------\n";

    SavingAccount savings("Alice", 1001, 5000.0, 3.0);
    CheckingAccount checking("Bob", 1002, 3000.0, 20.0);

    // Operations on Savings Account
    savings.display();
    savings.deposit(1000);
    savings.withdraw(2000);
    savings.applyInterest();
    savings.display();

    // Operations on Checking Account
    checking.display();
    checking.deposit(1500);
    checking.withdraw(1000);
    checking.display();

    return 0;
}


//OUTPUT//


/*Name: Sanika Anil Mane
Roll No: 96
Division: B
Class: SY CSE
---------------------------

[Savings Account]
Account Holder: Alice
Account Number: 1001
Balance: 5000
Interest Rate: 3%
Deposited: 1000
Withdrawn: 2000
Interest Applied: 120

[Savings Account]
Account Holder: Alice
Account Number: 1001
Balance: 4120
Interest Rate: 3%

[Checking Account]
Account Holder: Bob
Account Number: 1002
Balance: 3000
Transaction Fee: 20
Deposited: 1500
Withdrawn: 1000 (20 fee applied)

[Checking Account]
Account Holder: Bob
Account Number: 1002
Balance: 3480
Transaction Fee: 20*/
