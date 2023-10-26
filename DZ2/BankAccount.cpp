#include "BankAccount.h"

BankAccount::BankAccount(string accountNumber, double balance) {
    this->accountNumber = accountNumber;
    this->balance = balance;
}

void BankAccount::deposit(double amount) {
    balance += amount;
    cout << "���� " << accountNumber << " �������� �� " << amount << endl;
}

void BankAccount::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
        cout << "�� ����� " << accountNumber << " ����� " << amount << endl;
    }
    else {
        cout << "������������ ������� �� ����� " << accountNumber << endl;
    }
}

void BankAccount::displayInfo() {
    cout << "����� �����: " << accountNumber << endl;
    cout << "������� ������: " << balance << endl;
}

void BankAccount::transfer(BankAccount& other, double amount) {
    withdraw(amount);
    other.deposit(amount);
    cout << "������� �� ����� " << accountNumber << " �� ���� " << other.accountNumber << " ��������" << endl;
}