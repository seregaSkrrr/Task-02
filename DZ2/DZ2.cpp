#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    string AccNum;
    double receipt;
    cout << "Ваш номер: ";
    cin >> AccNum;
    cout << "Сколько там денег: ";
    cin >> receipt;

    BankAccount account1(AccNum, receipt);

    account1.displayInfo();
    account1.deposit(500.0);
    account1.withdraw(200.0);

    cout << "Другой номер: ";
    cin >> AccNum;
    cout << "Сколько там денег: ";
    cin >> receipt;
    BankAccount account2(AccNum, receipt);

    account2.displayInfo();
    account1.transfer(account2, 300.0);
    account1.displayInfo();
    account2.displayInfo();

    return 0;
}