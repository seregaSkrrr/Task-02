#include <iostream>
#include <random>
#include "Functions.h"
#include "Matrix.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "");
    srand(time(NULL));

    const int Size = 20;
    int Array[Size];
    int _number;
    int number;

    cout << "Массив: ";
    Initial(Array, Size);
    Print(Array, Size);

    MaxAndMin(Array, Size);

    cout << "Отсортированный массив: ";
    Sort(Array, Size);    
    Print(Array, Size);
    cout << "Введите число для поиска в массиве: ";
    cin >> _number;
    BinarySearch(_number, Array, Size);

    cout << "Введите номер элемента вмсето которого вставим новое число: ";
    cin >> _number;
    cout << "Введите само число на кторое меняем: ";
    cin >> number;
    SwitchElement(Array, Size, _number, number);
    cout << "Изменённый массив: ";
    Print(Array, Size);

    

}
