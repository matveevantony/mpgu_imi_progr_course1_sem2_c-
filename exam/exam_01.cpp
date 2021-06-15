#include <iostream>
#include <ctime>
using namespace std;

int sumNegArray(int*, int);

int main() {
	srand(time(NULL));
	int someArraySize; // переменная для хранения размерности массива
	cout << "Введите размерность массива: ";
	cin >> someArraySize;
	int someArray[someArraySize]; // объявление массива
	cout << "Массив:" << endl;
	for (int i = 0; i < someArraySize; i++) { // инициализация массива
		someArray[i] = rand() % (99-(-99)+1) - 99;
		cout << someArray[i] << " ";
	}
	cout << endl;
	sumNegArray(someArray, someArraySize); // вызов функции для осуществления дальнейших вычислений
}

int sumNegArray(int *pArray, int arraySize) {
	int sum = 0; // переменная для подсчета суммы
	for (int i = 0; i < arraySize; i++) { // цикл для просмотра всех элементов массива на предмет отрицательности
		if (pArray[i] < 0) {
			sum += pArray[i];
		}
	}
	if (sum == 0) { // вывод результатов в консоль
		cout << "Элементы с отрицательными значениями в массиве отсутствуют" << endl;
	}
	else {
		cout << "Сумма всех элементов массива с отрицательными значениями равна " << sum << endl;
	}
	return sum; // возвращение результата в вызывавшую функцию
}
