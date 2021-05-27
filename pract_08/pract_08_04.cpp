#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	srand(time(NULL));
	int n, m;
	cout << "Введите размер матрицы (n x m):" << endl << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;
	int matrix[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			matrix[i][j] = rand() % 10;
		}
	}
	cout << "Матрица:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(2) << matrix[i][j];
		}
		cout << endl;
	}
	cout << "Элементы матрицы, лежащие выше главной диагонали:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j) {
				cout << setw(2) << matrix[i][j];
			}
			else {
				cout << setw(2) << "";
			}
		}
		cout << endl;
	}
}
