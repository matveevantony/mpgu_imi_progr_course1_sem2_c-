#include <iostream>
using namespace std;

int countBetween(int*, int, int, int);

int main() {
	srand(time(NULL));
	int someArraySize;
	cout << "Введите размерность массива: ";
	cin >> someArraySize;
	int A, B;
	cout << "Введите два целых числа: ";
	cin >> A >> B;
	int someArray[someArraySize];
	cout << "Массив: " << endl;
	for (int i = 0; i < someArraySize; i++) {
		someArray[i] = rand() % 201 - 100;
		cout << someArray[i] << " ";
	}
	cout << endl;
	if (A > B) {
		int tmp = A;
		A = B;
		B = tmp;
	}
	countBetween(someArray, someArraySize, A, B);
}

int countBetween(int *pArray, int arraySize, int A, int B) {
	int count = 0;
	for (int i = 0; i < arraySize; i++) {
		if (pArray[i] > A && pArray[i] < B) {
			count++;
		}
	}
	cout << "Количество элементов массива, больших " << A << " и меньших " << B << " равно " << count << endl;
	return count;
}
