#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accountNumber, double balance);

    void deposit(double amount);

    void withdraw(double amount);

    void displayInfo();

    void transfer(BankAccount& other, double amount);
};