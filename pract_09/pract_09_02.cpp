#include <iostream>
using namespace std;

void randArray(int n) {
	srand(time(NULL));
	int array[n];
	cout << "Массив:" << endl;
	for (int i = 0; i < n; i++) {
		array[i] = rand() % 10;
		cout << array[i] << " ";
	}
	cout << endl;
}

int main() {
	int arraySize;
	cout << "Введите размерность первого массива" << endl;
	cin >> arraySize;
	randArray(arraySize);
	cout << "Введите размерность второго массива" << endl;
	cin >> arraySize;
	randArray(arraySize);
	cout << "Введите размерность третьего массива" << endl;
	cin >> arraySize;
	randArray(arraySize);
}
