#include <iostream>
using namespace std;

void randIntArray(int *, int);
void printIntArray(int *, int);
int countEvenIntArray(int *, int);

int main() {
	int arraySize;
	cout << "Введите размерность массива: ";
	cin >> arraySize;
	int array[arraySize];
	if (arraySize >= 5 && arraySize <= 11) {
		randIntArray(array, arraySize);
		cout << "Массив:" << endl;
		printIntArray(array, arraySize);
		cout << "Чётных элементов в массиве: " << countEvenIntArray(array, arraySize) << endl;
	}
	else {
		cout << "Введённое значение не лежит в границах [5,11]" << endl;
	}
}

void randIntArray(int *intArray, int arraySize) {
	srand(time(NULL));
	for (int i = 0; i < arraySize; i++) {
		intArray[i] = rand() % 10;
	}
}

void printIntArray(int *intArray, int arraySize) {
	for (int i = 0; i < arraySize - 1; i++) {
		cout << intArray[i] << " ";
	}
	cout << intArray[arraySize-1] << endl;
}

int countEvenIntArray(int *intArray, int arraySize) {
	int count = 0;
	for (int i = 0; i < arraySize; i++) {
		if (intArray[i] % 2 == 0) {
			count++;
		}
	}
	return count;
}
