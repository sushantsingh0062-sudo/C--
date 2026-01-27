#include <iostream>
using namespace std;

class Account {
public:
    int accountNumber;
    double balance;
};

class SavingsAccount : public Account {
public:
    double interestRate;
};

class BankResult : public SavingsAccount {
public:
    void calculateInterest() {
        double interest = (balance * interestRate) / 100;
        double finalBalance = balance + interest;

        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
        cout << "Interest Amount: " << interest << endl;
        cout << "Final Balance: " << finalBalance << endl;
    }
};

int main() {
    BankResult b;

    cout << "Enter Account Number: ";
    cin >> b.accountNumber;

    cout << "Enter Balance: ";
    cin >> b.balance;

    cout << "Enter Interest Rate: ";
    cin >> b.interestRate;

    b.calculateInterest();
    return 0;
}