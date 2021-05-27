#include <iostream>
using namespace std;

int main () {
	srand(time(NULL));
	const int n = 12, a = 0, b = 100, m = 10;
	int arrayOfNums[n];
	for (int i = 0; i < n; i++) {
		arrayOfNums[i] = rand() % (b - a + 1) + a;
	}
	cout << "Массив:" << endl;
	for (int i = 0; i < n - 1; i++) {
		cout << arrayOfNums[i] << " ";
	}
	cout << arrayOfNums[n - 1] << endl;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arrayOfNums[i] > m) {
			count++;
		}
	}
	int arrayGrM[count];
	int i = 0, j = 0;
	while (i < n && j < count) {
		if (arrayOfNums[i] > m) {
			arrayGrM[j] = arrayOfNums[i];
			j++;
		}
		i++;
	}
	cout << "Массив элементов, больших " << m << ":" << endl;
	for (int k = 0; k < count - 1; k++) {
		cout << arrayGrM[k] << " ";
	}
	cout << arrayGrM[count - 1] << endl;
}
