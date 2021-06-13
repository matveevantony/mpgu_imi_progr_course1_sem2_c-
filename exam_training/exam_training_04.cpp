#include <iostream>
using namespace std;

int countAfterNegative(int*, int);

int main() {
	srand(time(NULL));
	int someArraySize;
	cout << "Введите размерность массива: ";
	cin >> someArraySize;
	int someArray[someArraySize];
	cout << "Массив:" << endl;
	for (int i = 0; i < someArraySize; i++) {
		someArray[i] = rand()%21-10;
		cout << someArray[i] << " ";
	}
	cout << endl;
	countAfterNegative(someArray, someArraySize);
}

int countAfterNegative(int *pArray, int arraySize) {
	int i = 0;
	while (pArray[i] >= 0) {
		i++;
	}
	cout << "Количество элементов массива после первого отрицательного равно " << arraySize - i - 1 << endl;
	return arraySize - i - 1;
}
