#include <iostream>
#include <random>
using namespace std;

template <typename T>
class Matrix {
private:
	int length = 5;
	int width = 5;
	int** _matrix = new int* [length];
protected:
	Matrix() {

	}
public:

	int** CreateMatrix() {
		for (int Temp = 0; Temp < length; Temp++) {
			_matrix[Temp] = new int[width];
		}
		return _matrix;
	}

	void ClearData(){
		delete[] _matrix;
	}

	void TypeInMatrix() {
		for (int Temp = 0; Temp < length; Temp++) {
			for (int Temp1 = 0; Temp1 < width; Temp1++) {
				cout << "¬ведите элемент матрицы: ";
				cin >> _matrix[Temp][Temp1];
			}
		}
	}

	void RandomMatrix() {
		for (int Temp = 0; Temp < length; Temp++) {
			for (int Temp1 = 0; Temp1 < width; Temp1++) {
				_matrix[Temp][Temp1] = rand() % 100 + 1;
			}
		}
	}

	void Print() {
		for (int Temp = 0; Temp < length; Temp++) {
			for (int Temp1 = 0; Temp1 < width; Temp1++) {
				cout << "[" << _matrix[Temp][Temp1] << "] ";
			}
			cout << endl;
		}
	}
};