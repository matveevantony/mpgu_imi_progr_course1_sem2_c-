#include <iostream>
using namespace std;

int main () {
	srand(time(NULL));
	int n, a = 0, b = 30;
	cout << "Введите размер массива: ";
	cin >> n;
	int arrayOfNums[n];
	for (int i = 0; i < n; i++) {
		arrayOfNums[i] = rand() % (b - a +1) + a;
	}
	cout << "Массив:" << endl;
	for (int i = 0; i < n - 1; i++) {
		cout << arrayOfNums[i] << " ";
	}
	cout << arrayOfNums[n - 1] << endl;
	int min = arrayOfNums[0], max = arrayOfNums[0];
	for (int i = 1; i < n; i++) {
		if (arrayOfNums[i] < min) {
			min = arrayOfNums[i];
		}
		if (arrayOfNums[i] > max) {
			max = arrayOfNums[i];
		}
	}
	cout << "Минимальный элемент массива: " << min << endl;
	cout << "Максимальный элемент массива: " << max << endl;
}
