#include "BankAccount.h"

BankAccount::BankAccount(string accountNumber, double balance) {
    this->accountNumber = accountNumber;
    this->balance = balance;
}

void BankAccount::deposit(double amount) {
    balance += amount;
    cout << "Счет " << accountNumber << " пополнен на " << amount << endl;
}

void BankAccount::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
        cout << "Со счета " << accountNumber << " снято " << amount << endl;
    }
    else {
        cout << "Недостаточно средств на счете " << accountNumber << endl;
    }
}

void BankAccount::displayInfo() {
    cout << "Номер счета: " << accountNumber << endl;
    cout << "Текущий баланс: " << balance << endl;
}

void BankAccount::transfer(BankAccount& other, double amount) {
    withdraw(amount);
    other.deposit(amount);
    cout << "Перевод со счета " << accountNumber << " на счет " << other.accountNumber << " выполнен" << endl;
}