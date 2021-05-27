#include <iostream>
using namespace std;

int main () {
	srand(time(NULL));
	int n, a = 5, b = 25;
	cout << "Введите размер массива: ";
	cin >> n;
	int arrayOfNums[n];
	for (int i = 0; i < n; i++) {
		arrayOfNums[i] = rand() % (b - a + 1) + a;
	}
	for (int i = 0; i < n - 1; i++) {
		cout << arrayOfNums[i] << " ";
	}
	cout << arrayOfNums[n - 1] << endl;
}
