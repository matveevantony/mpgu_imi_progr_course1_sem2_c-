#include <iostream>
using namespace std;

int randArray(int n) {
	srand(time(NULL));
	int array[n];
	int evenCount = 0;
	cout << "Массив:" << endl;
	for (int i = 0; i < n; i++) {
		array[i] = rand() % 10;
		if (array[i] % 2 == 0) {
			evenCount++;
		}
		cout << array[i] << " ";
	}
	cout << endl;
	cout << "Элементов с чётными значениями ровно " << evenCount << endl;
	return evenCount;
}

int main() {
	int arraySize;
	cout << "Введите размерность первого массива" << endl;
	cin >> arraySize;
	if (arraySize >= 5 && arraySize <= 11) {
		randArray(arraySize);
	}
	else {
		cout << "Введённое значение не лежит в границах [5,11]" << endl;
	}
	cout << "Введите размерность второго массива" << endl;
	cin >> arraySize;
	if (arraySize >= 5 && arraySize <= 11) {
		randArray(arraySize);
	}
	else {
		cout << "Введённое значение не лежит в границах [5,11]"  << endl;
	}
	cout << "Введите размерность третьего массива" << endl;
	cin >> arraySize;
	if (arraySize >= 5 && arraySize <= 11) {
		randArray(arraySize);
	}
	else {
		cout << "Введённое значение не лежит в границах [5,11]" << endl;
	}
}
